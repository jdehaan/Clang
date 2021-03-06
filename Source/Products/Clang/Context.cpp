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

#include "Context.h"
#include "StringHelper.h"

using namespace System;

namespace Clang {
	Context::Context() {
		Construct(ContextFlags::None);
	}

	Context::Context(ContextFlags flags) {
		Construct(flags);
	}

	Context::~Context() {
		clang_disposeIndex(Native);
	}

	Context::!Context() {
		clang_disposeIndex(Native);
	}

	String^ Context::ClangVersion::get() {
		CXString version = clang_getClangVersion();
		return StringHelper::ConvertAndDispose(version);
	}

	void Context::Construct(ContextFlags flags) {
		int excludeDeclarationsFromPch = static_cast<int>(flags & ContextFlags::ExcludeDeclarationsFromPch) != 0;
		int displayDiagnostics = static_cast<int>(flags & ContextFlags::DisplayDiagnostics) != 0;

		native = clang_createIndex(excludeDeclarationsFromPch, displayDiagnostics);
	}

	CXIndex Context::Native::get() {
		return native;
	}
}
