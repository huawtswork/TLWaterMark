
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

/// WKWebView水印分类
@interface WKWebView (WaterMark)

/**
 给WebView加水印
 */
- (void)addWebViewWaterMark;
@end

NS_ASSUME_NONNULL_END
