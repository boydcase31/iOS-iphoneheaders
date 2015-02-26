/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class SKUIDownloadsCellView, UIImageView;

@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell {

	SKUIDownloadsCellView* _cellView;
	UIImageView* _editIndicator;
	long long _cellState;

}

@property (nonatomic,readonly) SKUIDownloadsCellView * cellView;              //@synthesize cellView=_cellView - In the implementation block
@property (assign,nonatomic) long long cellState;                             //@synthesize cellState=_cellState - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(SKUIDownloadsCellView *)cellView;
-(void)setCellState:(long long)arg1 ;
-(void)_reloadEditState;
-(long long)cellState;
@end
