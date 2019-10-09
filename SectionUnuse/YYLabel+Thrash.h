#import <UIKit/UIKit.h>
#import <YYKit/YYTextParser.h>
#import <YYKit/YYTextLayout.h>
#import <YYKit/YYTextAttribute.h>
#import "YYTextParser.h"
#import "YYTextLayout.h"
#import "YYTextAttribute.h"
#import "YYLabel.h"
#import "YYAsyncLayer.h"
#import "YYWeakProxy.h"
#import "YYCGUtilities.h"
#import "NSAttributedString+YYText.h"
#import "YYDispatchQueuePool.h"

@interface YYLabel (Thrash)
+ (BOOL)_updateIfNeededThrash:(NSInteger)THRash;
+ (BOOL)_updateLayoutThrash:(NSInteger)THRash;
+ (BOOL)_setLayoutNeedUpdateThrash:(NSInteger)THRash;
+ (BOOL)_setLayoutNeedRedrawThrash:(NSInteger)THRash;
+ (BOOL)_clearInnerLayoutThrash:(NSInteger)THRash;
+ (BOOL)_innerLayoutThrash:(NSInteger)THRash;
+ (BOOL)_highlightLayoutThrash:(NSInteger)THRash;
+ (BOOL)_shrinkLayoutWithLayoutThrash:(NSInteger)THRash;
+ (BOOL)_startLongPressTimerThrash:(NSInteger)THRash;
+ (BOOL)_endLongPressTimerThrash:(NSInteger)THRash;
+ (BOOL)_trackDidLongPressThrash:(NSInteger)THRash;
+ (BOOL)_getHighlightAtPointRangeThrash:(NSInteger)THRash;
+ (BOOL)_showHighlightAnimatedThrash:(NSInteger)THRash;
+ (BOOL)_hideHighlightAnimatedThrash:(NSInteger)THRash;
+ (BOOL)_removeHighlightAnimatedThrash:(NSInteger)THRash;
+ (BOOL)_endTouchThrash:(NSInteger)THRash;
+ (BOOL)_convertPointToLayoutThrash:(NSInteger)THRash;
+ (BOOL)_convertPointFromLayoutThrash:(NSInteger)THRash;
+ (BOOL)_convertRectToLayoutThrash:(NSInteger)THRash;
+ (BOOL)_convertRectFromLayoutThrash:(NSInteger)THRash;
+ (BOOL)_defaultFontThrash:(NSInteger)THRash;
+ (BOOL)_shadowFromPropertiesThrash:(NSInteger)THRash;
+ (BOOL)_updateOuterLineBreakModeThrash:(NSInteger)THRash;
+ (BOOL)_updateOuterTextPropertiesThrash:(NSInteger)THRash;
+ (BOOL)_updateOuterContainerPropertiesThrash:(NSInteger)THRash;
+ (BOOL)_clearContentsThrash:(NSInteger)THRash;
+ (BOOL)_initLabelThrash:(NSInteger)THRash;
+ (BOOL)initWithFrameThrash:(NSInteger)THRash;
+ (BOOL)deallocThrash:(NSInteger)THRash;
+ (BOOL)layerClassThrash:(NSInteger)THRash;
+ (BOOL)setFrameThrash:(NSInteger)THRash;
+ (BOOL)setBoundsThrash:(NSInteger)THRash;
+ (BOOL)sizeThatFitsThrash:(NSInteger)THRash;
+ (BOOL)accessibilityLabelThrash:(NSInteger)THRash;
+ (BOOL)encodeWithCoderThrash:(NSInteger)THRash;
+ (BOOL)initWithCoderThrash:(NSInteger)THRash;
+ (BOOL)touchesBeganWitheventThrash:(NSInteger)THRash;
+ (BOOL)touchesMovedWitheventThrash:(NSInteger)THRash;
+ (BOOL)touchesEndedWitheventThrash:(NSInteger)THRash;
+ (BOOL)touchesCancelledWitheventThrash:(NSInteger)THRash;
+ (BOOL)setTextThrash:(NSInteger)THRash;
+ (BOOL)setFontThrash:(NSInteger)THRash;
+ (BOOL)setTextColorThrash:(NSInteger)THRash;
+ (BOOL)setShadowColorThrash:(NSInteger)THRash;
+ (BOOL)setShadowOffsetThrash:(NSInteger)THRash;
+ (BOOL)setShadowOffsetThrash:(NSInteger)THRash;
+ (BOOL)setShadowBlurRadiusThrash:(NSInteger)THRash;
+ (BOOL)setTextAlignmentThrash:(NSInteger)THRash;
+ (BOOL)setLineBreakModeThrash:(NSInteger)THRash;
+ (BOOL)setTextVerticalAlignmentThrash:(NSInteger)THRash;
+ (BOOL)setTruncationTokenThrash:(NSInteger)THRash;
+ (BOOL)setNumberOfLinesThrash:(NSInteger)THRash;
+ (BOOL)setAttributedTextThrash:(NSInteger)THRash;
+ (BOOL)setTextContainerPathThrash:(NSInteger)THRash;
+ (BOOL)setExclusionPathsThrash:(NSInteger)THRash;
+ (BOOL)setTextContainerInsetThrash:(NSInteger)THRash;
+ (BOOL)setVerticalFormThrash:(NSInteger)THRash;
+ (BOOL)setLinePositionModifierThrash:(NSInteger)THRash;
+ (BOOL)setTextParserThrash:(NSInteger)THRash;
+ (BOOL)setTextLayoutThrash:(NSInteger)THRash;
+ (BOOL)textLayoutThrash:(NSInteger)THRash;
+ (BOOL)setDisplaysAsynchronouslyThrash:(NSInteger)THRash;
+ (BOOL)setPreferredMaxLayoutWidthThrash:(NSInteger)THRash;
+ (BOOL)intrinsicContentSizeThrash:(NSInteger)THRash;
+ (BOOL)setDebugOptionThrash:(NSInteger)THRash;
+ (BOOL)newAsyncDisplayTaskThrash:(NSInteger)THRash;

@end