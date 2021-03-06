/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSMutableDictionary, NSObject<TSDEditor>, TSKDocumentRoot;

@interface TSDEditorController : NSObject {
    BOOL mDidChangeCurrentEditors;
    BOOL mDidChangeTextInputEditor;
    TSKDocumentRoot *mDocumentRoot;
    NSMutableArray *mEditorStack;
    NSMutableDictionary *mInspectorPropertyValueMap;
    BOOL mIsReentrantResigningTextInputEditors;
    BOOL mNotifiedWillChangeCurrentEditors;
    BOOL mNotifiedWillChangeTextInputEditor;
    NSMutableArray *mResignedTextInputEditors;
    NSObject<TSDEditor> *mTextInputEditor;
    unsigned int mTransactionLevel;
}

- (BOOL)anyEditorProhibitsAction:(SEL)arg1;
- (void)beginTransaction;
- (id)currentEditors;
- (id)currentEditorsConformingToProtocol:(id)arg1;
- (id)currentEditorsOfClass:(Class)arg1;
- (void)dealloc;
- (void)editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned int)arg2;
- (void)editorDidChangeSelectionAndWantsKeyboard:(id)arg1 withSelectionFlags:(unsigned int)arg2;
- (id)editorForEditAction:(SEL)arg1 withSender:(id)arg2 response:(int*)arg3;
- (id)editorForEditAction:(SEL)arg1 withSender:(id)arg2;
- (void)editorSelectionWasForciblyChanged:(id)arg1;
- (void)endTransaction;
- (void)enumerateEditorsOnStackUsingBlock:(id)arg1;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;
- (id)mostSpecificCurrentEditorOfClass:(Class)arg1 conformingToProtocol:(id)arg2;
- (id)mostSpecificCurrentEditorOfClass:(Class)arg1;
- (id)mostSpecificEditorConformingToProtocol:(id)arg1;
- (void)notifyResignedTextInputEditors;
- (id)objectForInspectorPropertyKey:(id)arg1;
- (void)p_didChangeCurrentEditors;
- (void)p_didChangeTextInputEditor;
- (void)p_setTextInputEditor:(id)arg1;
- (void)p_willChangeCurrentEditors;
- (void)p_willChangeCurrentEditorsWithNewEditors:(id)arg1;
- (void)p_willChangeTextInputEditor;
- (void)popEditor:(id)arg1 andPushTextInputEditor:(id)arg2;
- (void)popEditor:(id)arg1;
- (void)popToEditor:(id)arg1;
- (void)pushEditor:(id)arg1;
- (void)removeObjectForInspectorPropertyKey:(id)arg1;
- (void)setObject:(id)arg1 forInspectorPropertyKey:(id)arg2;
- (void)setTextInputEditor:(id)arg1;
- (id)textInputEditor;

@end
