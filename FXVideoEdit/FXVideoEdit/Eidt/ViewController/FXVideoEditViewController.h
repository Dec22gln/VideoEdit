//
//  FXVideoEditViewController.h
//  FXVideoEdit
//
//  Created by duoyi on 2020/9/2.
//  Copyright © 2020 xunni zou. All rights reserved.
//

#import "FXViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface FXVideoEditViewController : FXViewController

+ (FXVideoEditViewController *)videoEditViewControllerWithAVAssets:(NSArray<AVAsset *> *)avassets;

@end

NS_ASSUME_NONNULL_END