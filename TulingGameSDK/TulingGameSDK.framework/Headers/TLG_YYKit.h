//
//  TLG_YYKit.h
//  TLG_YYKit <https://github.com/ibireme/TLG_YYKit>
//
//  Created by ibireme on 13/3/30.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

#if __has_include(<TLG_YYKit/TLG_YYKit.h>)

FOUNDATION_EXPORT double TLG_YYKitVersionNumber;
FOUNDATION_EXPORT const unsigned char TLG_YYKitVersionString[];

#import <TLG_YYKit/TLG_YYKitMacro.h>
#import <TLG_YYKit/NSObject+TLG_YYAdd.h>
//#import <TLG_YYKit/NSObject+TLG_YYAddForKVO.h>
//#import <TLG_YYKit/NSObject+TLG_YYAddForARC.h>
#import <TLG_YYKit/NSString+TLG_YYAdd.h>
#import <TLG_YYKit/NSNumber+TLG_YYAdd.h>
#import <TLG_YYKit/NSData+TLG_YYAdd.h>
#import <TLG_YYKit/NSArray+TLG_YYAdd.h>
#import <TLG_YYKit/NSDictionary+TLG_YYAdd.h>
//#import <TLG_YYKit/NSDate+TLG_YYAdd.h>
//#import <TLG_YYKit/NSNotificationCenter+TLG_YYAdd.h>
//#import <TLG_YYKit/NSKeyedUnarchiver+TLG_YYAdd.h>
//#import <TLG_YYKit/NSTimer+TLG_YYAdd.h>
#import <TLG_YYKit/NSBundle+TLG_YYAdd.h>
//#import <TLG_YYKit/NSThread+TLG_YYAdd.h>

#import <TLG_YYKit/UIColor+TLG_YYAdd.h>
#import <TLG_YYKit/UIImage+TLG_YYAdd.h>
#import <TLG_YYKit/UIControl+TLG_YYAdd.h>
//#import <TLG_YYKit/UIBarButtonItem+TLG_YYAdd.h>
#import <TLG_YYKit/UIGestureRecognizer+TLG_YYAdd.h>
#import <TLG_YYKit/UIView+TLG_YYAdd.h>
//#import <TLG_YYKit/UIScrollView+TLG_YYAdd.h>
//#import <TLG_YYKit/UITableView+TLG_YYAdd.h>
//#import <TLG_YYKit/UITextField+TLG_YYAdd.h>
//#import <TLG_YYKit/UIScreen+TLG_YYAdd.h>
#import <TLG_YYKit/UIDevice+TLG_YYAdd.h>
#import <TLG_YYKit/UIApplication+TLG_YYAdd.h>
#import <TLG_YYKit/UIFont+TLG_YYAdd.h>
//#import <TLG_YYKit/UIBezierPath+TLG_YYAdd.h>

#import <TLG_YYKit/CALayer+TLG_YYAdd.h>
#import <TLG_YYKit/TLG_YYCGUtilities.h>

#import <TLG_YYKit/NSObject+TLG_YYModel.h>
#import <TLG_YYKit/TLG_YYClassInfo.h>

#import <TLG_YYKit/TLG_YYCache.h>
#import <TLG_YYKit/TLG_YYMemoryCache.h>
#import <TLG_YYKit/TLG_YYDiskCache.h>
#import <TLG_YYKit/TLG_YYKVStorage.h>

#import <TLG_YYKit/TLG_YYImage.h>
#import <TLG_YYKit/TLG_YYFrameImage.h>
#import <TLG_YYKit/TLG_YYSpriteSheetImage.h>
#import <TLG_YYKit/TLG_YYAnimatedImageView.h>
#import <TLG_YYKit/TLG_YYImageCoder.h>
#import <TLG_YYKit/TLG_YYImageCache.h>
#import <TLG_YYKit/TLG_YYWebImageOperation.h>
#import <TLG_YYKit/TLG_YYWebImageManager.h>
#import <TLG_YYKit/UIImageView+TLG_YYWebImage.h>
#import <TLG_YYKit/UIButton+TLG_YYWebImage.h>
#import <TLG_YYKit/MKAnnotationView+TLG_YYWebImage.h>
#import <TLG_YYKit/CALayer+TLG_YYWebImage.h>

#import <TLG_YYKit/TLG_YYLabel.h>
#import <TLG_YYKit/TLG_YYTextView.h>
#import <TLG_YYKit/TLG_YYTextAttribute.h>
#import <TLG_YYKit/TLG_YYTextArchiver.h>
#import <TLG_YYKit/TLG_YYTextParser.h>
#import <TLG_YYKit/TLG_YYTextUtilities.h>
#import <TLG_YYKit/TLG_YYTextRunDelegate.h>
#import <TLG_YYKit/TLG_YYTextRubyAnnotation.h>
#import <TLG_YYKit/NSAttributedString+TLG_YYText.h>
#import <TLG_YYKit/NSParagraphStyle+TLG_YYText.h>
#import <TLG_YYKit/UIPasteboard+TLG_YYText.h>
#import <TLG_YYKit/TLG_YYTextLayout.h>
#import <TLG_YYKit/TLG_YYTextLine.h>
#import <TLG_YYKit/TLG_YYTextInput.h>
#import <TLG_YYKit/TLG_YYTextDebugOption.h>
#import <TLG_YYKit/TLG_YYTextContainerView.h>
#import <TLG_YYKit/TLG_YYTextSelectionView.h>
#import <TLG_YYKit/TLG_YYTextMagnifier.h>
#import <TLG_YYKit/TLG_YYTextEffectWindow.h>
#import <TLG_YYKit/TLG_YYTextKeyboardManager.h>

//#import <TLG_YYKit/TLG_YYReachability.h>
#import <TLG_YYKit/TLG_YYGestureRecognizer.h>
//#import <TLG_YYKit/TLG_YYFileHash.h>
//#import <TLG_YYKit/TLG_YYKeychain.h>
#import <TLG_YYKit/TLG_YYWeakProxy.h>
//#import <TLG_YYKit/TLG_YYTimer.h>
#import <TLG_YYKit/TLG_YYTransaction.h>
#import <TLG_YYKit/TLG_YYAsyncLayer.h>
#import <TLG_YYKit/TLG_YYSentinel.h>
#import <TLG_YYKit/TLG_YYDispatchQueuePool.h>
//#import <TLG_YYKit/TLG_YYThreadSafeArray.h>
//#import <TLG_YYKit/TLG_YYThreadSafeDictionary.h>

#else

#import "TLG_YYKitMacro.h"
#import "NSObject+TLG_YYAdd.h"
//#import "NSObject+TLG_YYAddForKVO.h"
//#import "NSObject+TLG_YYAddForARC.h"
#import "NSString+TLG_YYAdd.h"
#import "NSNumber+TLG_YYAdd.h"
#import "NSData+TLG_YYAdd.h"
#import "NSArray+TLG_YYAdd.h"
#import "NSDictionary+TLG_YYAdd.h"
//#import "NSDate+TLG_YYAdd.h"
//#import "NSNotificationCenter+TLG_YYAdd.h"
//#import "NSKeyedUnarchiver+TLG_YYAdd.h"
//#import "NSTimer+TLG_YYAdd.h"
#import "NSBundle+TLG_YYAdd.h"
//#import "NSThread+TLG_YYAdd.h"

#import "UIColor+TLG_YYAdd.h"
#import "UIImage+TLG_YYAdd.h"
#import "UIControl+TLG_YYAdd.h"
//#import "UIBarButtonItem+TLG_YYAdd.h"
#import "UIGestureRecognizer+TLG_YYAdd.h"
#import "UIView+TLG_YYAdd.h"
//#import "UIScrollView+TLG_YYAdd.h"
//#import "UITableView+TLG_YYAdd.h"
//#import "UITextField+TLG_YYAdd.h"
//#import "UIScreen+TLG_YYAdd.h"
#import "UIDevice+TLG_YYAdd.h"
#import "UIApplication+TLG_YYAdd.h"
#import "UIFont+TLG_YYAdd.h"
//#import "UIBezierPath+TLG_YYAdd.h"

#import "CALayer+TLG_YYAdd.h"
#import "TLG_YYCGUtilities.h"

#import "NSObject+TLG_YYModel.h"
#import "TLG_YYClassInfo.h"

#import "TLG_YYCache.h"
#import "TLG_YYMemoryCache.h"
#import "TLG_YYDiskCache.h"
#import "TLG_YYKVStorage.h"

#import "TLG_YYImage.h"
#import "TLG_YYFrameImage.h"
#import "TLG_YYSpriteSheetImage.h"
#import "TLG_YYAnimatedImageView.h"
#import "TLG_YYImageCoder.h"
#import "TLG_YYImageCache.h"
#import "TLG_YYWebImageOperation.h"
#import "TLG_YYWebImageManager.h"
#import "UIImageView+TLG_YYWebImage.h"
#import "UIButton+TLG_YYWebImage.h"
#import "MKAnnotationView+TLG_YYWebImage.h"
#import "CALayer+TLG_YYWebImage.h"

#import "TLG_YYLabel.h"
#import "TLG_YYTextView.h"
#import "TLG_YYTextAttribute.h"
#import "TLG_YYTextArchiver.h"
#import "TLG_YYTextParser.h"
#import "TLG_YYTextUtilities.h"
#import "TLG_YYTextRunDelegate.h"
#import "TLG_YYTextRubyAnnotation.h"
#import "NSAttributedString+TLG_YYText.h"
#import "NSParagraphStyle+TLG_YYText.h"
#import "UIPasteboard+TLG_YYText.h"
#import "TLG_YYTextLayout.h"
#import "TLG_YYTextLine.h"
#import "TLG_YYTextInput.h"
#import "TLG_YYTextDebugOption.h"
#import "TLG_YYTextContainerView.h"
#import "TLG_YYTextSelectionView.h"
#import "TLG_YYTextMagnifier.h"
#import "TLG_YYTextEffectWindow.h"
#import "TLG_YYTextKeyboardManager.h"

//#import "TLG_YYReachability.h"
#import "TLG_YYGestureRecognizer.h"
//#import "TLG_YYFileHash.h"
//#import "TLG_YYKeychain.h"
#import "TLG_YYWeakProxy.h"
//#import "TLG_YYTimer.h"
#import "TLG_YYTransaction.h"
#import "TLG_YYAsyncLayer.h"
#import "TLG_YYSentinel.h"
#import "TLG_YYDispatchQueuePool.h"
//#import "TLG_YYThreadSafeArray.h"
//#import "TLG_YYThreadSafeDictionary.h"

#endif
