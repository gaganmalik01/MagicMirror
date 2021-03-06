//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUndoManager.h"

@interface BCUndoManager : NSUndoManager
{
    int _undoNameRegistrationDisabledCounter;
    int _undCoalescingDisabledCounter;
    BOOL shouldOpenUndoGroup;
    BOOL hasOpenedUndoGroup;
}

- (void)bc_openUndoGroupIfNecessary;
- (void)beginMasterUndoGrouping;
- (void)didPerformFoldableAction;
- (void)disableUndoCoalescing;
- (void)disableUndoNameRegistration;
- (void)enableUndoCoalescing;
- (void)enableUndoNameRegistration;
- (void)endMasterUndoGrouping;
- (void)endUndoGrouping;
- (void)prepareForUndo;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)redo;
- (id)redoActionName;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setActionName:(id)arg1;
- (void)setActionName:(id)arg1 sender:(id)arg2;
- (void)setAdvancedActionName:(id)arg1;
- (BOOL)shouldCoalesceFoldAction:(id)arg1 withNewAction:(id)arg2;
- (BOOL)shouldCoalesceOldAction:(id)arg1 withNewAction:(id)arg2;
- (void)undo;
- (id)undoActionName;

@end

