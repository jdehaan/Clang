// Copyright (c) 2011 Josh Petrie
//	
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#pragma once

#include "Index.h"
#include "TranslationUnitFlags.h"

namespace Clang {
	ref class Context;
	ref class Diagnostic;
	value class SourceFile;

	public ref class TranslationUnit
	{
	public:
		TranslationUnit(Context^ context, System::String^ file, TranslationUnitFlags flags);
		TranslationUnit(Context^ context, System::String^ file, TranslationUnitFlags flags, System::Collections::Generic::IEnumerable<System::String^>^ commandLineArguments);
		~TranslationUnit();

		property System::Collections::ObjectModel::ReadOnlyCollection<Diagnostic^>^ Diagnostics {
			System::Collections::ObjectModel::ReadOnlyCollection<Diagnostic^>^ get();
		}

		SourceFile GetFile(System::String^ fileName);

		bool IsFileMultipleIncludeGuarded(SourceFile file);

	internal:
		property CXTranslationUnit Native {
			CXTranslationUnit get();
		}

	private:
		!TranslationUnit();
	
		System::Collections::ObjectModel::ReadOnlyCollection<Diagnostic^>^ diagnostics;
		CXTranslationUnit native;
	};
}
