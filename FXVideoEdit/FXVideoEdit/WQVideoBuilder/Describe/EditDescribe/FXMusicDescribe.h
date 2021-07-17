//
//  FXMusicDescribe.h
//  FXVideoEdit
//
//  Created by xunni zou on 2020/9/3.
//  Copyright © 2020 xunni zou. All rights reserved.
//

#import "FXDescribe.h"
#import "FXAudioItem.h"


@interface FXMusicDescribe : FXDescribe

@property (nonatomic, assign) NSInteger musicIndex;

@property (nonatomic, assign) CGFloat volume;

@property (nonatomic, strong) FXAudioItem *audioItem;


@end
