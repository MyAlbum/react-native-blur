#import <UIKit/UIKit.h>

@interface BlurView : UIView

@property (nonatomic, copy, nullable) NSString *blurType;
@property (nonatomic, copy, nullable) UIColor *reducedTransparencyFallbackColor;

@property (nonatomic, strong, nullable) UIBlurEffect *blurEffect;
@property (nonatomic, strong, nullable) UIVisualEffectView *blurEffectView;
@property (nonatomic, strong, nullable) UIView *reducedTransparencyFallbackView;

- (void)updateBlurEffect;
- (void)updateFallbackView;
- (BOOL)useReduceTransparencyFallback;
@end
