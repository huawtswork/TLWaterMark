
#import "UIView+WaterMark.h"
#import "WaterMarkView.h"

@implementation UIView (WaterMark)

- (WaterMarkView *)addWaterMark
{
    CGRect frame = self.bounds;
    WaterMarkView *markView = [[WaterMarkView alloc] initWithFrame:frame waterMarkString:@"" markViewType:kMarkViewType_TwoColumn];
    [self addSubview:markView];
    return markView;
}


@end
