/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@class TIMecabraWrapper, TIHandwritingStrokes, NSArray, CIMCandidateData, NSMutableDictionary, NSMutableArray;

@interface TIInputManagerHandwriting : TIKeyboardInputManagerZephyr {

	int _completionPrefixLength;
	bool _showingCompletionCandidates;
	bool _isInCompletionMode;
	TIMecabraWrapper* _mecabraWrapper;
	WordTrie* _syntheticTrie;
	WordTrie* _compositionTrie;
	WordTrie* _extensionTrie;
	/*^block*/ id _addressBookLoader;
	id _userDictionaryObserver;
	bool _shouldLearnAcceptedCandidate;
	bool _showingFacemarks;
	int _recognitionType;
	TIHandwritingStrokes* _userDrawing;
	NSArray* _facemarkCandidates;
	CIMCandidateData* _candidateData;
	NSArray* _candidates;
	NSMutableDictionary* _candidateRefsDictionary;
	NSMutableArray* _committedCandidates;

}

@property (assign,nonatomic) bool isInCompletionMode;                                    //@synthesize isInCompletionMode=_isInCompletionMode - In the implementation block
@property (assign,nonatomic) bool shouldLearnAcceptedCandidate;                          //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;                         //@synthesize userDrawing=_userDrawing - In the implementation block
@property (assign,nonatomic) int recognitionType;                                        //@synthesize recognitionType=_recognitionType - In the implementation block
@property (assign,nonatomic) bool showingFacemarks;                                      //@synthesize showingFacemarks=_showingFacemarks - In the implementation block
@property (nonatomic,readonly) NSArray * facemarkCandidates;                             //@synthesize facemarkCandidates=_facemarkCandidates - In the implementation block
@property (nonatomic,readonly) CIMCandidateData * candidateData;                         //@synthesize candidateData=_candidateData - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                                       //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateRefsDictionary;              //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * committedCandidates;                       //@synthesize committedCandidates=_committedCandidates - In the implementation block
+(id)sharedRecognizer;
-(void)dealloc;
-(void)suspend;
-(id)candidates;
-(id)keyboardBehaviors;
-(bool)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(void)clearInput;
-(bool)usesAutoDeleteWord;
-(bool)shouldExtendPriorWord;
-(bool)suppliesCompletions;
-(id)replacementForDoubleSpace;
-(id)defaultCandidate;
-(void)setCandidates:(id)arg1 ;
-(bool)suppressPlaceholderCandidate;
-(bool)canHandleKeyHitTest;
-(bool)needsKeyHitTestResults;
-(id)addInputObject:(id)arg1 ;
-(void)setRecognitionType:(int)arg1 ;
-(int)recognitionType;
-(id)initWithInputMode:(id)arg1 ;
-(void)updateAddressBook;
-(void)mainThreadUpdateCandidates:(id)arg1 ;
-(id)committedCandidates;
-(void)loadDictionary:(WordTrie*)arg1 withFile:(id)arg2 ;
-(bool)updateCompletionCandidatesIfAppropriate;
-(bool)updateCandidates;
-(bool)isDummyCandidate:(id)arg1 ;
-(void)setShowingFacemarks:(bool)arg1 ;
-(id)facemarkCandidates;
-(id)userDrawing;
-(id)markedTextForDefaultCandidate;
-(void)cancelRecognition;
-(void)setUserDrawing:(id)arg1 ;
-(void)resetCompletionStates;
-(bool)showingFacemarks;
-(id)historyForRecognition;
-(id)processCandidates:(id)arg1 ;
-(bool)isInCompletionMode;
-(void)setIsInCompletionMode:(bool)arg1 ;
-(bool)shouldLookForCompletionCandidates;
-(void)clearCandidateRefsDictionary;
-(unsigned long long)completionOptions;
-(int)mecabraLanguage;
-(void)loadCompositionDictionary:(id)arg1 ;
-(void)loadExtensionDictionary:(id)arg1 ;
-(id)candidateData;
-(void)setCandidateRefsDictionary:(id)arg1 ;
-(void)setCommittedCandidates:(id)arg1 ;
-(MecabraRef)mecabra;
-(bool)shouldLearnAcceptedCandidate;
-(void)updateUserWordEntries;
-(void)setShouldLearnAcceptedCandidate:(bool)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(void)loadDictionaries;
-(void)setCollatorLocale;
-(id)nonstopPunctuationCharacters;
-(void)setLearnsCorrection:(bool)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(bool)arg5 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)inputLocationChanged;
-(void)addInput:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/ id)arg3 ;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(bool)arg2 ;
-(bool)shouldCommitInputString;
-(void)didAcceptCandidate:(id)arg1 ;
-(id)candidateRefsDictionary;
@end
