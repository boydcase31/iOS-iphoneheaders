/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, SUScriptSegmentedControl, NSNumber, NSString;

@interface SUScriptStorePageViewController : SUScriptViewController {

	NSArray* _initialURLStrings;

}

@property (readonly) NSArray * URLStrings; 
@property (assign) id alwaysDispatchesScrollEvents; 
@property (assign) char doubleTapEnabled; 
@property (assign) char flashesScrollIndicators; 
@property (assign) id inputViewObeysDOMFocus; 
@property (assign) int loadingIndicatorStyle; 
@property (assign) id loadsWhenHidden; 
@property (retain) id loadingTextColor; 
@property (retain) id loadingTextShadowColor; 
@property (retain) id placeholderBackgroundStyle; 
@property (readonly) id rootObject; 
@property (assign) char scrollingEnabled; 
@property (retain) SUScriptSegmentedControl * segmentedControl; 
@property (assign) char shouldInvalidateForLowMemory; 
@property (assign) char shouldLoadProgressively; 
@property (assign) id shouldShowFormAccessory; 
@property (assign) char showsBackgroundShadow; 
@property (assign) id showsHorizontalScrollIndicator; 
@property (assign) id showsVerticalScrollIndicator; 
@property (retain) NSNumber * timeoutInterval; 
@property (retain) id URLs; 
@property (retain) NSString * userInfo; 
@property (readonly) int indicatorStyleWhite; 
@property (readonly) int indicatorStyleGray; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(char)copyURLStrings:(id*)arg1 forValue:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setShowsVerticalScrollIndicator:(id)arg1 ;
-(void)setShowsHorizontalScrollIndicator:(id)arg1 ;
-(void)setUserInfo:(NSString *)arg1 ;
-(NSString *)userInfo;
-(void)setScrollingEnabled:(char)arg1 ;
-(id)showsHorizontalScrollIndicator;
-(id)showsVerticalScrollIndicator;
-(char)scrollingEnabled;
-(void)setDoubleTapEnabled:(char)arg1 ;
-(id)inputViewObeysDOMFocus;
-(void)setInputViewObeysDOMFocus:(id)arg1 ;
-(void)setAlwaysDispatchesScrollEvents:(id)arg1 ;
-(id)alwaysDispatchesScrollEvents;
-(void)setURLs:(id)arg1 ;
-(id)URLs;
-(SUScriptSegmentedControl *)segmentedControl;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(NSNumber *)timeoutInterval;
-(id)rootObject;
-(void)setLoadsWhenHidden:(id)arg1 ;
-(id)_storePageViewController;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setSegmentedControl:(SUScriptSegmentedControl *)arg1 ;
-(id)attributeKeys;
-(id)loadsWhenHidden;
-(id)loadingTextColor;
-(id)loadingTextShadowColor;
-(void)setLoadingIndicatorStyle:(int)arg1 ;
-(void)setLoadingTextColor:(id)arg1 ;
-(void)setLoadingTextShadowColor:(id)arg1 ;
-(void)setNativeViewController:(id)arg1 ;
-(int)loadingIndicatorStyle;
-(void)setShowsBackgroundShadow:(char)arg1 ;
-(char)showsBackgroundShadow;
-(void)setFlashesScrollIndicators:(char)arg1 ;
-(void)setShouldShowFormAccessory:(id)arg1 ;
-(void)setShouldLoadProgressively:(char)arg1 ;
-(char)flashesScrollIndicators;
-(id)shouldShowFormAccessory;
-(char)shouldLoadProgressively;
-(id)newNativeViewController;
-(id)initWithURLStrings:(id)arg1 ;
-(id)_copyURLsFromURLStrings:(id)arg1 ;
-(void)applyURLStrings:(id)arg1 toViewController:(id)arg2 ;
-(id)_pathForWebArchiveWithIdentifier:(id)arg1 inDirectory:(id)arg2 ;
-(char)_isSegmentedControlValid:(id)arg1 ;
-(void)_setURLs:(id)arg1 ;
-(id)loadWebArchiveWithIdentifier:(id)arg1 fromDirectory:(id)arg2 ;
-(void)reloadWithCallback:(id)arg1 ;
-(id)saveWebArchiveWithIdentifier:(id)arg1 toDirectory:(id)arg2 ;
-(void)setScrollEdgeInsetsWithTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4 ;
-(NSArray *)URLStrings;
-(char)doubleTapEnabled;
-(id)placeholderBackgroundStyle;
-(void)setPlaceholderBackgroundStyle:(id)arg1 ;
-(void)setShouldInvalidateForLowMemory:(char)arg1 ;
-(char)shouldInvalidateForLowMemory;
-(int)indicatorStyleGray;
-(int)indicatorStyleWhite;
-(void)_setValue:(id)arg1 forScriptPropertyKey:(id)arg2 ;
@end
