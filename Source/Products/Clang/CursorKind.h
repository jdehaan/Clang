// File auto-generated using ClangGenerator - clang version 3.4 (181997).
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

namespace Clang {

    public enum class CursorKind    {
        UnexposedDeclaration = CXCursor_UnexposedDecl,
        StructureDeclaration = CXCursor_StructDecl,
        UnionDeclaration = CXCursor_UnionDecl,
        ClassDeclaration = CXCursor_ClassDecl,
        EnumerationDeclaration = CXCursor_EnumDecl,
        FieldDeclaration = CXCursor_FieldDecl,
        EnumerationConstantDeclaration = CXCursor_EnumConstantDecl,
        FunctionDeclaration = CXCursor_FunctionDecl,
        VariableDeclaration = CXCursor_VarDecl,
        ParameterDeclaration = CXCursor_ParmDecl,
        ObjectiveCInterfaceDeclaration = CXCursor_ObjCInterfaceDecl,
        ObjectiveCCategoryDeclaration = CXCursor_ObjCCategoryDecl,
        ObjectiveCProtocolDeclaration = CXCursor_ObjCProtocolDecl,
        ObjectiveCPropertyDeclaration = CXCursor_ObjCPropertyDecl,
        ObjectiveCIvarDeclaration = CXCursor_ObjCIvarDecl,
        ObjectiveCInstanceMethodDeclaration = CXCursor_ObjCInstanceMethodDecl,
        ObjectiveCClassMethodDeclaration = CXCursor_ObjCClassMethodDecl,
        ObjectiveCImplementationDeclaration = CXCursor_ObjCImplementationDecl,
        ObjectiveCCategoryImplDeclaration = CXCursor_ObjCCategoryImplDecl,
        TypedefDeclaration = CXCursor_TypedefDecl,
        CPlusPlusMethod = CXCursor_CXXMethod,
        Namespace = CXCursor_Namespace,
        LinkageSpecification = CXCursor_LinkageSpec,
        Constructor = CXCursor_Constructor,
        Destructor = CXCursor_Destructor,
        ConversionFunction = CXCursor_ConversionFunction,
        TemplateTypeParameter = CXCursor_TemplateTypeParameter,
        NonTypeTemplateParameter = CXCursor_NonTypeTemplateParameter,
        TemplateTemplateParameter = CXCursor_TemplateTemplateParameter,
        FunctionTemplate = CXCursor_FunctionTemplate,
        ClassTemplate = CXCursor_ClassTemplate,
        ClassTemplatePartialSpecialization = CXCursor_ClassTemplatePartialSpecialization,
        NamespaceAlias = CXCursor_NamespaceAlias,
        UsingDirective = CXCursor_UsingDirective,
        UsingDeclaration = CXCursor_UsingDeclaration,
        TypeAliasDeclaration = CXCursor_TypeAliasDecl,
        ObjectiveCSynthesizeDeclaration = CXCursor_ObjCSynthesizeDecl,
        ObjectiveCDynamicDeclaration = CXCursor_ObjCDynamicDecl,
        CPlusPlusAccessSpecifier = CXCursor_CXXAccessSpecifier,
        // FirstDeclaration = CXCursor_FirstDecl,
        // LastDeclaration = CXCursor_LastDecl,

        // FirstReference = CXCursor_FirstRef,
        ObjectiveCSuperClassReference = CXCursor_ObjCSuperClassRef,
        ObjectiveCProtocolReference = CXCursor_ObjCProtocolRef,
        ObjectiveCClassReference = CXCursor_ObjCClassRef,
        TypeReference = CXCursor_TypeRef,
        CPlusPlusBaseSpecifier = CXCursor_CXXBaseSpecifier,
        TemplateReference = CXCursor_TemplateRef,
        NamespaceReference = CXCursor_NamespaceRef,
        MemberReference = CXCursor_MemberRef,
        LabelReference = CXCursor_LabelRef,
        OverloadedDeclReference = CXCursor_OverloadedDeclRef,
        VariableReference = CXCursor_VariableRef,
        // LastReference = CXCursor_LastRef,

        // FirstInvalid = CXCursor_FirstInvalid,
        InvalidFile = CXCursor_InvalidFile,
        NoDeclFound = CXCursor_NoDeclFound,
        NotImplemented = CXCursor_NotImplemented,
        InvalidCode = CXCursor_InvalidCode,
        // LastInvalid = CXCursor_LastInvalid,

        // FirstExpression = CXCursor_FirstExpr,
        UnexposedExpression = CXCursor_UnexposedExpr,
        DeclarationRefExpression = CXCursor_DeclRefExpr,
        MemberRefExpression = CXCursor_MemberRefExpr,
        CallExpression = CXCursor_CallExpr,
        ObjectiveCMessageExpression = CXCursor_ObjCMessageExpr,
        BlockExpression = CXCursor_BlockExpr,
        IntegerLiteral = CXCursor_IntegerLiteral,
        FloatingLiteral = CXCursor_FloatingLiteral,
        ImaginaryLiteral = CXCursor_ImaginaryLiteral,
        StringLiteral = CXCursor_StringLiteral,
        CharacterLiteral = CXCursor_CharacterLiteral,
        ParenExpression = CXCursor_ParenExpr,
        UnaryOperator = CXCursor_UnaryOperator,
        ArraySubscriptExpression = CXCursor_ArraySubscriptExpr,
        BinaryOperator = CXCursor_BinaryOperator,
        CompoundAssignOperator = CXCursor_CompoundAssignOperator,
        ConditionalOperator = CXCursor_ConditionalOperator,
        CStyleCastExpression = CXCursor_CStyleCastExpr,
        CompoundLiteralExpression = CXCursor_CompoundLiteralExpr,
        InitListExpression = CXCursor_InitListExpr,
        AddrLabelExpression = CXCursor_AddrLabelExpr,
        StatementExpression = CXCursor_StmtExpr,
        GenericSelectionExpression = CXCursor_GenericSelectionExpr,
        GnuNullExpression = CXCursor_GNUNullExpr,
        CPlusPlusStaticCastExpression = CXCursor_CXXStaticCastExpr,
        CPlusPlusDynamicCastExpression = CXCursor_CXXDynamicCastExpr,
        CPlusPlusReinterpretCastExpression = CXCursor_CXXReinterpretCastExpr,
        CPlusPlusConstCastExpression = CXCursor_CXXConstCastExpr,
        CPlusPlusFunctionalCastExpression = CXCursor_CXXFunctionalCastExpr,
        CPlusPlusTypeidExpression = CXCursor_CXXTypeidExpr,
        CPlusPlusBoolLiteralExpression = CXCursor_CXXBoolLiteralExpr,
        CPlusPlusNullPtrLiteralExpression = CXCursor_CXXNullPtrLiteralExpr,
        CPlusPlusThisExpression = CXCursor_CXXThisExpr,
        CPlusPlusThrowExpression = CXCursor_CXXThrowExpr,
        CPlusPlusNewExpression = CXCursor_CXXNewExpr,
        CPlusPlusDeleteExpression = CXCursor_CXXDeleteExpr,
        UnaryExpression = CXCursor_UnaryExpr,
        ObjectiveCStringLiteral = CXCursor_ObjCStringLiteral,
        ObjectiveCEncodeExpression = CXCursor_ObjCEncodeExpr,
        ObjectiveCSelectorExpression = CXCursor_ObjCSelectorExpr,
        ObjectiveCProtocolExpression = CXCursor_ObjCProtocolExpr,
        ObjectiveCBridgedCastExpression = CXCursor_ObjCBridgedCastExpr,
        PackExpansionExpression = CXCursor_PackExpansionExpr,
        SizeOfPackExpression = CXCursor_SizeOfPackExpr,
        LambdaExpression = CXCursor_LambdaExpr,
        ObjectiveCBoolLiteralExpression = CXCursor_ObjCBoolLiteralExpr,
        ObjectiveCSelfExpression = CXCursor_ObjCSelfExpr,
        // LastExpression = CXCursor_LastExpr,

        // FirstStatement = CXCursor_FirstStmt,
        UnexposedStatement = CXCursor_UnexposedStmt,
        LabelStatement = CXCursor_LabelStmt,
        CompoundStatement = CXCursor_CompoundStmt,
        CaseStatement = CXCursor_CaseStmt,
        DefaultStatement = CXCursor_DefaultStmt,
        IfStatement = CXCursor_IfStmt,
        SwitchStatement = CXCursor_SwitchStmt,
        WhileStatement = CXCursor_WhileStmt,
        DoStatement = CXCursor_DoStmt,
        ForStatement = CXCursor_ForStmt,
        GotoStatement = CXCursor_GotoStmt,
        IndirectGotoStatement = CXCursor_IndirectGotoStmt,
        ContinueStatement = CXCursor_ContinueStmt,
        BreakStatement = CXCursor_BreakStmt,
        ReturnStatement = CXCursor_ReturnStmt,
        GCCAsmStatement = CXCursor_GCCAsmStmt,
        AsmStatement = CXCursor_AsmStmt,
        ObjectiveCAtTryStatement = CXCursor_ObjCAtTryStmt,
        ObjectiveCAtCatchStatement = CXCursor_ObjCAtCatchStmt,
        ObjectiveCAtFinallyStatement = CXCursor_ObjCAtFinallyStmt,
        ObjectiveCAtThrowStatement = CXCursor_ObjCAtThrowStmt,
        ObjectiveCAtSynchronizedStatement = CXCursor_ObjCAtSynchronizedStmt,
        ObjectiveCAutoreleasePoolStatement = CXCursor_ObjCAutoreleasePoolStmt,
        ObjectiveCForCollectionStatement = CXCursor_ObjCForCollectionStmt,
        CPlusPlusCatchStatement = CXCursor_CXXCatchStmt,
        CPlusPlusTryStatement = CXCursor_CXXTryStmt,
        CPlusPlusForRangeStatement = CXCursor_CXXForRangeStmt,
        WinSehTryStatement = CXCursor_SEHTryStmt,
        WinSehExceptStatement = CXCursor_SEHExceptStmt,
        WinSehFinallyStatement = CXCursor_SEHFinallyStmt,
        MSAsmStatement = CXCursor_MSAsmStmt,
        NullStatement = CXCursor_NullStmt,
        DeclarationStatement = CXCursor_DeclStmt,
        // LastStatement = CXCursor_LastStmt,

        TranslationUnit = CXCursor_TranslationUnit,
        // FirstAttribute = CXCursor_FirstAttr,
        UnexposedAttribute = CXCursor_UnexposedAttr,
        IBActionAttribute = CXCursor_IBActionAttr,
        IBOutletAttribute = CXCursor_IBOutletAttr,
        IBOutletCollectionAttribute = CXCursor_IBOutletCollectionAttr,
        CPlusPlusFinalAttribute = CXCursor_CXXFinalAttr,
        CPlusPlusOverrideAttribute = CXCursor_CXXOverrideAttr,
        AnnotateAttribute = CXCursor_AnnotateAttr,
        AsmLabelAttribute = CXCursor_AsmLabelAttr,
        // LastAttribute = CXCursor_LastAttr,

        PreprocessingDirective = CXCursor_PreprocessingDirective,
        MacroDefinition = CXCursor_MacroDefinition,
        MacroExpansion = CXCursor_MacroExpansion,
        MacroInstantiation = CXCursor_MacroInstantiation,
        InclusionDirective = CXCursor_InclusionDirective,
        // FirstPreprocessing = CXCursor_FirstPreprocessing,
        // LastPreprocessing = CXCursor_LastPreprocessing,

        ModuleImportDeclaration = CXCursor_ModuleImportDecl,
        // FirstExtraDeclaration = CXCursor_FirstExtraDecl,
        // LastExtraDeclaration = CXCursor_LastExtraDecl,

    };

}

