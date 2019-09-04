
#import <Foundation/Foundation.h>

#if __has_include(<WaterMarkSDK/WaterMark.h>)

FOUNDATION_EXPORT double WaterMarkSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char WaterMarkSDKVersionString[];

#import <WaterMarkSDK/WaterMarkView.h>
#import <WaterMarkSDK/UIImage+WaterMark.h>
#import <WaterMarkSDK/UIView+WaterMark.h>
#import <WaterMarkSDK/WaterMarkCollectionView.h>
#import <WaterMarkSDK/WaterMarkTableView.h>
#import <WaterMarkSDK/WaterMarkWebView.h>

#else

#import "WaterMarkView.h"
#import "UIImage+WaterMark.h"
#import "UIView+WaterMark.h"
#import "WaterMarkCollectionView.h"
#import "WaterMarkTableView.h"
#import "WaterMarkWebView.h"

#endif

