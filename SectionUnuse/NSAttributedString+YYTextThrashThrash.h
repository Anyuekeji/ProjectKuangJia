#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>
#import <YYKit/YYTextAttribute.h>
#import <YYKit/YYTextRubyAnnotation.h>
#import "YYTextAttribute.h"
#import "YYTextRubyAnnotation.h"
#import "NSAttributedString+YYText.h"
#import "YYKitMacro.h"
#import "UIDevice+YYAdd.h"
#import "UIFont+YYAdd.h"
#import "NSParagraphStyle+YYText.h"
#import "YYTextArchiver.h"
#import "YYTextRunDelegate.h"
#import "YYAnimatedImageView.h"
#import "YYTextUtilities.h"
#import <CoreFoundation/CoreFoundation.h>
#import "NSAttributedString+YYTextThrash.h"

@interface NSAttributedString (YYTextThrashThrash)
+ (BOOL)archiveToDataThrashThrash:(NSInteger)THRash;
+ (BOOL)unarchiveFromDataThrashThrash:(NSInteger)THRash;
+ (BOOL)attributesAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)attributeAtindexThrashThrash:(NSInteger)THRash;
+ (BOOL)attributesThrashThrash:(NSInteger)THRash;
+ (BOOL)fontThrashThrash:(NSInteger)THRash;
+ (BOOL)fontAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)kernThrashThrash:(NSInteger)THRash;
+ (BOOL)kernAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)colorThrashThrash:(NSInteger)THRash;
+ (BOOL)colorAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)backgroundColorThrashThrash:(NSInteger)THRash;
+ (BOOL)backgroundColorAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)strokeWidthThrashThrash:(NSInteger)THRash;
+ (BOOL)strokeWidthAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)strokeColorThrashThrash:(NSInteger)THRash;
+ (BOOL)strokeColorAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)shadowThrashThrash:(NSInteger)THRash;
+ (BOOL)shadowAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)strikethroughStyleThrashThrash:(NSInteger)THRash;
+ (BOOL)strikethroughStyleAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)strikethroughColorThrashThrash:(NSInteger)THRash;
+ (BOOL)strikethroughColorAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)underlineStyleThrashThrash:(NSInteger)THRash;
+ (BOOL)underlineStyleAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)underlineColorThrashThrash:(NSInteger)THRash;
+ (BOOL)underlineColorAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)ligatureThrashThrash:(NSInteger)THRash;
+ (BOOL)ligatureAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)textEffectThrashThrash:(NSInteger)THRash;
+ (BOOL)textEffectAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)obliquenessThrashThrash:(NSInteger)THRash;
+ (BOOL)obliquenessAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)expansionThrashThrash:(NSInteger)THRash;
+ (BOOL)expansionAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)baselineOffsetThrashThrash:(NSInteger)THRash;
+ (BOOL)baselineOffsetAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)verticalGlyphFormThrashThrash:(NSInteger)THRash;
+ (BOOL)verticalGlyphFormAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)languageThrashThrash:(NSInteger)THRash;
+ (BOOL)languageAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)writingDirectionThrashThrash:(NSInteger)THRash;
+ (BOOL)writingDirectionAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)paragraphStyleThrashThrash:(NSInteger)THRash;
+ (BOOL)paragraphStyleAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)alignmentThrashThrash:(NSInteger)THRash;
+ (BOOL)lineBreakModeThrashThrash:(NSInteger)THRash;
+ (BOOL)lineSpacingThrashThrash:(NSInteger)THRash;
+ (BOOL)paragraphSpacingThrashThrash:(NSInteger)THRash;
+ (BOOL)paragraphSpacingBeforeThrashThrash:(NSInteger)THRash;
+ (BOOL)firstLineHeadIndentThrashThrash:(NSInteger)THRash;
+ (BOOL)headIndentThrashThrash:(NSInteger)THRash;
+ (BOOL)tailIndentThrashThrash:(NSInteger)THRash;
+ (BOOL)minimumLineHeightThrashThrash:(NSInteger)THRash;
+ (BOOL)maximumLineHeightThrashThrash:(NSInteger)THRash;
+ (BOOL)lineHeightMultipleThrashThrash:(NSInteger)THRash;
+ (BOOL)baseWritingDirectionThrashThrash:(NSInteger)THRash;
+ (BOOL)hyphenationFactorThrashThrash:(NSInteger)THRash;
+ (BOOL)defaultTabIntervalThrashThrash:(NSInteger)THRash;
+ (BOOL)tabStopsThrashThrash:(NSInteger)THRash;
+ (BOOL)alignmentAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)lineBreakModeAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)lineSpacingAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)paragraphSpacingAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)paragraphSpacingBeforeAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)firstLineHeadIndentAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)headIndentAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)tailIndentAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)minimumLineHeightAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)maximumLineHeightAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)lineHeightMultipleAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)baseWritingDirectionAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)hyphenationFactorAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)defaultTabIntervalAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)tabStopsAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)textShadowThrashThrash:(NSInteger)THRash;
+ (BOOL)textShadowAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)textInnerShadowThrashThrash:(NSInteger)THRash;
+ (BOOL)textInnerShadowAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)textUnderlineThrashThrash:(NSInteger)THRash;
+ (BOOL)textUnderlineAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)textStrikethroughThrashThrash:(NSInteger)THRash;
+ (BOOL)textStrikethroughAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)textBorderThrashThrash:(NSInteger)THRash;
+ (BOOL)textBorderAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)textBackgroundBorderThrashThrash:(NSInteger)THRash;
+ (BOOL)textBackgroundBorderAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)textGlyphTransformThrashThrash:(NSInteger)THRash;
+ (BOOL)textGlyphTransformAtIndexThrashThrash:(NSInteger)THRash;
+ (BOOL)plainTextForRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)attachmentStringWithContentContentmodeWidthAscentDescentThrashThrash:(NSInteger)THRash;
+ (BOOL)attachmentStringWithContentContentmodeAttachmentsizeAligntofontAlignmentThrashThrash:(NSInteger)THRash;
+ (BOOL)attachmentStringWithEmojiImageFontsizeThrashThrash:(NSInteger)THRash;
+ (BOOL)rangeOfAllThrashThrash:(NSInteger)THRash;
+ (BOOL)isSharedAttributesInAllRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)canDrawWithUIKitThrashThrash:(NSInteger)THRash;

@end