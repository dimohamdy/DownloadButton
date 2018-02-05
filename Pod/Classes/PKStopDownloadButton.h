//
//  PKStopDownloadButton.h
//  PKDownloadButton
//
//  Created by Pavel on 28/05/15.
//  Copyright (c) 2015 Katunin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PKCircleProgressView.h"

typedef NS_ENUM(NSUInteger, PKStopDownloadButtonState) {
    kPKStopDownloadButtonState_Resume,
    kPKStopDownloadButtonState_Paused,
};


IB_DESIGNABLE
@interface PKStopDownloadButton : PKCircleProgressView

@property (nonatomic, assign) IBInspectable CGFloat stopButtonWidth;
@property (nonatomic, weak, readonly) UIButton *stopButton;
- (void)setCurrentState:(PKStopDownloadButtonState)state;
@end
