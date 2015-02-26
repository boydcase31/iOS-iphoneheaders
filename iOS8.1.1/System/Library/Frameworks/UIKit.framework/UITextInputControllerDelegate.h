/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInputControllerDelegate <NSObject>
@optional
-(BOOL)textInputShouldBeginEditing:(id)arg1;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
-(void)textInputDidChange:(id)arg1;
-(NSRange*)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3;
-(void)textInputDidChangeSelection:(id)arg1;

@end
