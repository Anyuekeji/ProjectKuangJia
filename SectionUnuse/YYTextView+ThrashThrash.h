#import <UIKit/UIKit.h>
#import <YYKit/YYTextParser.h>
#import <YYKit/YYTextLayout.h>
#import <YYKit/YYTextAttribute.h>
#import "YYTextParser.h"
#import "YYTextLayout.h"
#import "YYTextAttribute.h"
#import "YYTextView.h"
#import "YYKitMacro.h"
#import "YYTextInput.h"
#import "YYTextContainerView.h"
#import "YYTextSelectionView.h"
#import "YYTextMagnifier.h"
#import "YYTextEffectWindow.h"
#import "YYTextKeyboardManager.h"
#import "YYTextUtilities.h"
#import "YYCGUtilities.h"
#import "YYTransaction.h"
#import "YYWeakProxy.h"
#import "UIView+YYAdd.h"
#import "NSAttributedString+YYText.h"
#import "UIPasteboard+YYText.h"
#import "UIDevice+YYAdd.h"
#import "UIApplication+YYAdd.h"
#import "YYImage.h"
#import "YYTextView+Thrash.h"

@interface YYTextView (ThrashThrash)
+ (BOOL)_commitUpdateThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateIfNeededThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateLayoutThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateSelectionViewThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateInnerContainerSizeThrashThrash:(NSInteger)THRash;
+ (BOOL)_commitPlaceholderUpdateThrashThrash:(NSInteger)THRash;
+ (BOOL)_updatePlaceholderIfNeededThrashThrash:(NSInteger)THRash;
+ (BOOL)_updatePlaceholderThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateTextRangeByTrackingCaretThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateTextRangeByTrackingGrabberThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateTextRangeByTrackingPreSelectThrashThrash:(NSInteger)THRash;
+ (BOOL)_showMagnifierCaretThrashThrash:(NSInteger)THRash;
+ (BOOL)_showMagnifierRangedThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateMagnifierThrashThrash:(NSInteger)THRash;
+ (BOOL)_hideMagnifierThrashThrash:(NSInteger)THRash;
+ (BOOL)_showMenuThrashThrash:(NSInteger)THRash;
+ (BOOL)_hideMenuThrashThrash:(NSInteger)THRash;
+ (BOOL)_showHighlightAnimatedThrashThrash:(NSInteger)THRash;
+ (BOOL)_hideHighlightAnimatedThrashThrash:(NSInteger)THRash;
+ (BOOL)_removeHighlightAnimatedThrashThrash:(NSInteger)THRash;
+ (BOOL)_scrollSelectedRangeToVisibleThrashThrash:(NSInteger)THRash;
+ (BOOL)_scrollRangeToVisibleThrashThrash:(NSInteger)THRash;
+ (BOOL)_restoreInsetsAnimatedThrashThrash:(NSInteger)THRash;
+ (BOOL)_keyboardChangedThrashThrash:(NSInteger)THRash;
+ (BOOL)_startLongPressTimerThrashThrash:(NSInteger)THRash;
+ (BOOL)_endLongPressTimerThrashThrash:(NSInteger)THRash;
+ (BOOL)_trackDidLongPressThrashThrash:(NSInteger)THRash;
+ (BOOL)_startAutoScrollTimerThrashThrash:(NSInteger)THRash;
+ (BOOL)_endAutoScrollTimerThrashThrash:(NSInteger)THRash;
+ (BOOL)_trackDidTickAutoScrollThrashThrash:(NSInteger)THRash;
+ (BOOL)_endTouchTrackingThrashThrash:(NSInteger)THRash;
+ (BOOL)_startSelectionDotFixTimerThrashThrash:(NSInteger)THRash;
+ (BOOL)_endSelectionDotFixTimerThrashThrash:(NSInteger)THRash;
+ (BOOL)_fixSelectionDotThrashThrash:(NSInteger)THRash;
+ (BOOL)_getClosestTokenRangeAtPositionThrashThrash:(NSInteger)THRash;
+ (BOOL)_getClosestTokenRangeAtPointThrashThrash:(NSInteger)THRash;
+ (BOOL)_getHighlightAtPointRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)_getMagnifierRangedOffsetThrashThrash:(NSInteger)THRash;
+ (BOOL)_getMoveDirectionThrashThrash:(NSInteger)THRash;
+ (BOOL)_getAutoscrollOffsetThrashThrash:(NSInteger)THRash;
+ (BOOL)_getVisibleSizeThrashThrash:(NSInteger)THRash;
+ (BOOL)_isPasteboardContainsValidValueThrashThrash:(NSInteger)THRash;
+ (BOOL)_copySelectedTextToPasteboardThrashThrash:(NSInteger)THRash;
+ (BOOL)_pasteboardChangedThrashThrash:(NSInteger)THRash;
+ (BOOL)_isTextPositionValidThrashThrash:(NSInteger)THRash;
+ (BOOL)_isTextRangeValidThrashThrash:(NSInteger)THRash;
+ (BOOL)_correctedTextPositionThrashThrash:(NSInteger)THRash;
+ (BOOL)_correctedTextRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)_convertPointToLayoutThrashThrash:(NSInteger)THRash;
+ (BOOL)_convertPointFromLayoutThrashThrash:(NSInteger)THRash;
+ (BOOL)_convertRectToLayoutThrashThrash:(NSInteger)THRash;
+ (BOOL)_convertRectFromLayoutThrashThrash:(NSInteger)THRash;
+ (BOOL)_replaceRangeWithtextNotifytodelegateThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateAttributesHolderThrashThrash:(NSInteger)THRash;
+ (BOOL)_updateOuterPropertiesThrashThrash:(NSInteger)THRash;
+ (BOOL)_parseTextThrashThrash:(NSInteger)THRash;
+ (BOOL)_shouldDetectTextThrashThrash:(NSInteger)THRash;
+ (BOOL)_detectTextThrashThrash:(NSInteger)THRash;
+ (BOOL)_getRootViewControllerThrashThrash:(NSInteger)THRash;
+ (BOOL)_resetUndoAndRedoStackThrashThrash:(NSInteger)THRash;
+ (BOOL)_resetRedoStackThrashThrash:(NSInteger)THRash;
+ (BOOL)_saveToUndoStackThrashThrash:(NSInteger)THRash;
+ (BOOL)_saveToRedoStackThrashThrash:(NSInteger)THRash;
+ (BOOL)_canUndoThrashThrash:(NSInteger)THRash;
+ (BOOL)_canRedoThrashThrash:(NSInteger)THRash;
+ (BOOL)_undoThrashThrash:(NSInteger)THRash;
+ (BOOL)_redoThrashThrash:(NSInteger)THRash;
+ (BOOL)_restoreFirstResponderAfterUndoAlertThrashThrash:(NSInteger)THRash;
+ (BOOL)ThrashThrash:(NSInteger)THRash;
+ (BOOL)_localizedUndoStringsThrashThrash:(NSInteger)THRash;
+ (BOOL)_defaultFontThrashThrash:(NSInteger)THRash;
+ (BOOL)_defaultTintColorThrashThrash:(NSInteger)THRash;
+ (BOOL)_defaultPlaceholderColorThrashThrash:(NSInteger)THRash;
+ (BOOL)_setTextThrashThrash:(NSInteger)THRash;
+ (BOOL)_setFontThrashThrash:(NSInteger)THRash;
+ (BOOL)_setTextColorThrashThrash:(NSInteger)THRash;
+ (BOOL)_setTextAlignmentThrashThrash:(NSInteger)THRash;
+ (BOOL)_setDataDetectorTypesThrashThrash:(NSInteger)THRash;
+ (BOOL)_setLinkTextAttributesThrashThrash:(NSInteger)THRash;
+ (BOOL)_setHighlightTextAttributesThrashThrash:(NSInteger)THRash;
+ (BOOL)_setTextParserThrashThrash:(NSInteger)THRash;
+ (BOOL)_setAttributedTextThrashThrash:(NSInteger)THRash;
+ (BOOL)_setTextContainerInsetThrashThrash:(NSInteger)THRash;
+ (BOOL)_setExclusionPathsThrashThrash:(NSInteger)THRash;
+ (BOOL)_setVerticalFormThrashThrash:(NSInteger)THRash;
+ (BOOL)_setLinePositionModifierThrashThrash:(NSInteger)THRash;
+ (BOOL)_setSelectedRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)_setTypingAttributesThrashThrash:(NSInteger)THRash;
+ (BOOL)_initTextViewThrashThrash:(NSInteger)THRash;
+ (BOOL)initWithFrameThrashThrash:(NSInteger)THRash;
+ (BOOL)deallocThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollRangeToVisibleThrashThrash:(NSInteger)THRash;
+ (BOOL)setTextThrashThrash:(NSInteger)THRash;
+ (BOOL)setFontThrashThrash:(NSInteger)THRash;
+ (BOOL)setTextColorThrashThrash:(NSInteger)THRash;
+ (BOOL)setTextAlignmentThrashThrash:(NSInteger)THRash;
+ (BOOL)setDataDetectorTypesThrashThrash:(NSInteger)THRash;
+ (BOOL)setLinkTextAttributesThrashThrash:(NSInteger)THRash;
+ (BOOL)setHighlightTextAttributesThrashThrash:(NSInteger)THRash;
+ (BOOL)setTextParserThrashThrash:(NSInteger)THRash;
+ (BOOL)setTypingAttributesThrashThrash:(NSInteger)THRash;
+ (BOOL)setAttributedTextThrashThrash:(NSInteger)THRash;
+ (BOOL)setTextVerticalAlignmentThrashThrash:(NSInteger)THRash;
+ (BOOL)setTextContainerInsetThrashThrash:(NSInteger)THRash;
+ (BOOL)setExclusionPathsThrashThrash:(NSInteger)THRash;
+ (BOOL)setVerticalFormThrashThrash:(NSInteger)THRash;
+ (BOOL)setLinePositionModifierThrashThrash:(NSInteger)THRash;
+ (BOOL)setSelectedRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)setHighlightableThrashThrash:(NSInteger)THRash;
+ (BOOL)setEditableThrashThrash:(NSInteger)THRash;
+ (BOOL)setSelectableThrashThrash:(NSInteger)THRash;
+ (BOOL)setClearsOnInsertionThrashThrash:(NSInteger)THRash;
+ (BOOL)setDebugOptionThrashThrash:(NSInteger)THRash;
+ (BOOL)debugOptionThrashThrash:(NSInteger)THRash;
+ (BOOL)textLayoutThrashThrash:(NSInteger)THRash;
+ (BOOL)setPlaceholderTextThrashThrash:(NSInteger)THRash;
+ (BOOL)setPlaceholderFontThrashThrash:(NSInteger)THRash;
+ (BOOL)setPlaceholderTextColorThrashThrash:(NSInteger)THRash;
+ (BOOL)setPlaceholderAttributedTextThrashThrash:(NSInteger)THRash;
+ (BOOL)setMultipleTouchEnabledThrashThrash:(NSInteger)THRash;
+ (BOOL)setContentInsetThrashThrash:(NSInteger)THRash;
+ (BOOL)setScrollIndicatorInsetsThrashThrash:(NSInteger)THRash;
+ (BOOL)setFrameThrashThrash:(NSInteger)THRash;
+ (BOOL)setBoundsThrashThrash:(NSInteger)THRash;
+ (BOOL)tintColorDidChangeThrashThrash:(NSInteger)THRash;
+ (BOOL)sizeThatFitsThrashThrash:(NSInteger)THRash;
+ (BOOL)touchesBeganWitheventThrashThrash:(NSInteger)THRash;
+ (BOOL)touchesMovedWitheventThrashThrash:(NSInteger)THRash;
+ (BOOL)touchesEndedWitheventThrashThrash:(NSInteger)THRash;
+ (BOOL)touchesCancelledWitheventThrashThrash:(NSInteger)THRash;
+ (BOOL)motionEndedWitheventThrashThrash:(NSInteger)THRash;
+ (BOOL)canBecomeFirstResponderThrashThrash:(NSInteger)THRash;
+ (BOOL)becomeFirstResponderThrashThrash:(NSInteger)THRash;
+ (BOOL)canResignFirstResponderThrashThrash:(NSInteger)THRash;
+ (BOOL)resignFirstResponderThrashThrash:(NSInteger)THRash;
+ (BOOL)canPerformActionWithsenderThrashThrash:(NSInteger)THRash;
+ (BOOL)ThrashThrash:(NSInteger)THRash;
+ (BOOL)reloadInputViewsThrashThrash:(NSInteger)THRash;
+ (BOOL)cutThrashThrash:(NSInteger)THRash;
+ (BOOL)copyThrashThrash:(NSInteger)THRash;
+ (BOOL)pasteThrashThrash:(NSInteger)THRash;
+ (BOOL)selectThrashThrash:(NSInteger)THRash;
+ (BOOL)selectAllThrashThrash:(NSInteger)THRash;
+ (BOOL)_defineThrashThrash:(NSInteger)THRash;
+ (BOOL)automaticallyNotifiesObserversForKeyThrashThrash:(NSInteger)THRash;
+ (BOOL)initWithCoderThrashThrash:(NSInteger)THRash;
+ (BOOL)encodeWithCoderThrashThrash:(NSInteger)THRash;
+ (BOOL)delegateThrashThrash:(NSInteger)THRash;
+ (BOOL)setDelegateThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewDidScrollThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewDidZoomThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewWillBeginDraggingThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewWillEndDraggingWithvelocityTargetcontentoffsetThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewDidEndDraggingWilldecelerateThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewWillBeginDeceleratingThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewDidEndDeceleratingThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewDidEndScrollingAnimationThrashThrash:(NSInteger)THRash;
+ (BOOL)viewForZoomingInScrollViewThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewWillBeginZoomingWithviewThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewDidEndZoomingWithviewAtscaleThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewShouldScrollToTopThrashThrash:(NSInteger)THRash;
+ (BOOL)scrollViewDidScrollToTopThrashThrash:(NSInteger)THRash;
+ (BOOL)keyboardChangedWithTransitionThrashThrash:(NSInteger)THRash;
+ (BOOL)alertViewClickedbuttonatindexThrashThrash:(NSInteger)THRash;
+ (BOOL)hasTextThrashThrash:(NSInteger)THRash;
+ (BOOL)insertTextThrashThrash:(NSInteger)THRash;
+ (BOOL)deleteBackwardThrashThrash:(NSInteger)THRash;
+ (BOOL)setInputDelegateThrashThrash:(NSInteger)THRash;
+ (BOOL)setSelectedTextRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)setMarkedTextStyleThrashThrash:(NSInteger)THRash;
+ (BOOL)setMarkedTextSelectedrangeThrashThrash:(NSInteger)THRash;
+ (BOOL)unmarkTextThrashThrash:(NSInteger)THRash;
+ (BOOL)replaceRangeWithtextThrashThrash:(NSInteger)THRash;
+ (BOOL)setBaseWritingDirectionForrangeThrashThrash:(NSInteger)THRash;
+ (BOOL)textInRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)baseWritingDirectionForPositionIndirectionThrashThrash:(NSInteger)THRash;
+ (BOOL)beginningOfDocumentThrashThrash:(NSInteger)THRash;
+ (BOOL)endOfDocumentThrashThrash:(NSInteger)THRash;
+ (BOOL)positionFromPositionOffsetThrashThrash:(NSInteger)THRash;
+ (BOOL)positionFromPositionIndirectionOffsetThrashThrash:(NSInteger)THRash;
+ (BOOL)textRangeFromPositionTopositionThrashThrash:(NSInteger)THRash;
+ (BOOL)comparePositionTopositionThrashThrash:(NSInteger)THRash;
+ (BOOL)offsetFromPositionTopositionThrashThrash:(NSInteger)THRash;
+ (BOOL)positionWithinRangeFarthestindirectionThrashThrash:(NSInteger)THRash;
+ (BOOL)characterRangeByExtendingPositionIndirectionThrashThrash:(NSInteger)THRash;
+ (BOOL)closestPositionToPointThrashThrash:(NSInteger)THRash;
+ (BOOL)closestPositionToPointWithinrangeThrashThrash:(NSInteger)THRash;
+ (BOOL)characterRangeAtPointThrashThrash:(NSInteger)THRash;
+ (BOOL)firstRectForRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)caretRectForPositionThrashThrash:(NSInteger)THRash;
+ (BOOL)selectionRectsForRangeThrashThrash:(NSInteger)THRash;
+ (BOOL)selectionAffinityThrashThrash:(NSInteger)THRash;
+ (BOOL)setSelectionAffinityThrashThrash:(NSInteger)THRash;
+ (BOOL)textStylingAtPositionIndirectionThrashThrash:(NSInteger)THRash;
+ (BOOL)positionWithinRangeAtcharacteroffsetThrashThrash:(NSInteger)THRash;
+ (BOOL)characterOffsetOfPositionWithinrangeThrashThrash:(NSInteger)THRash;

@end