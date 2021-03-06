// Copyright (c) 2011 Jaap de Haan
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
#include "TypeKind.h"
#include "CallingConvention.h"

namespace Clang {

	public ref class Type
	{
	public:
		property TypeKind Kind {
			TypeKind get();
		}

		//unsigned clang_equalTypes(CXType A, CXType B);
	    virtual bool Equals(Object^ o) override; 

		// CXType clang_getCanonicalType(CXType T);
		property Clang::Type^ CanonicalType {
			Clang::Type^ get();
		}

		//unsigned clang_isConstQualifiedType(CXType T);
		property bool IsConst {
			bool get();
		}

		//unsigned clang_isVolatileQualifiedType(CXType T);
		property bool IsVolatile {
			bool get();
		}

		//unsigned clang_isRestrictQualifiedType(CXType T);
		property bool IsRestrict {
			bool get();
		}

		//CXType clang_getPointeeType(CXType T);
		property Clang::Type^ PointeeType {
			Clang::Type^ get();
		}

		//CXCursor clang_getTypeDeclaration(CXType T);

		//CXString clang_getTypeKindSpelling(enum CXTypeKind K);

		//enum CXCallingConv clang_getFunctionTypeCallingConv(CXType T);
		property Clang::CallingConvention CallingConvention {
			Clang::CallingConvention get();
		}

		//CXType clang_getResultType(CXType T);
		property Clang::Type^ ResultType {
			Clang::Type^ get();
		}

		//unsigned clang_getNumArgTypes(CXType T);
		property unsigned ArgumentCount {
			unsigned get();
		}

		//CXType clang_getArgType(CXType T, unsigned i);
		Clang::Type^ GetArgumentType(unsigned i);

		//unsigned clang_isFunctionTypeVariadic(CXType T);
		property bool IsFunctionVariadic {
			bool get();
		}

		//unsigned clang_isPODType(CXType T);
		property bool IsPOD {
			bool get();
		}

		//CXType clang_getElementType(CXType T);
		property Clang::Type^ ElementType {
			Clang::Type^ get();
		}

		//long long clang_getNumElements(CXType T);
		property long long ElementCount {
			long long get();
		}

		//CXType clang_getArrayElementType(CXType T);
		property Clang::Type^ ArrayElementType {
			Clang::Type^ get();
		}

		//long long clang_getArraySize(CXType T);

	internal:
		Type(const CXType& native);

		property CXType Native {
			CXType get();
		}

	private:		
		// CXType is a structure, and thus cannot be directly contained
		// inside a reference type. Instead, the members of CXType are
		// directly contained in this class and CXType instances are
		// rebuilt as needed.
		CXTypeKind kind;
		const void* data0;
		const void* data1;
	};
}
