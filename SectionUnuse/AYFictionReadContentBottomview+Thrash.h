#import <UIKit/UIKit.h>
#import "THFictionReadContentViewController.h"
#import "LEBatteryView.h" //电池视图
#import "THShowTextView.h" //显示文本视图
#import <objc/runtime.h>
#import "THCYFictionChapterModel.h" //章节信息
#import "THChargeView.h" //提示付费和充值view
#import <GoogleMobileAds/GoogleMobileAds.h> //admob
#import "AYAdmobManager.h"

@interface AYFictionReadContentBottomview (Thrash)
+ (BOOL)initWithFrameShowadThrash:(NSInteger)THRash;
+ (BOOL)configureUIThrash:(NSInteger)THRash;
+ (BOOL)updateBottomValueCurrentShowadThrash:(NSInteger)THRash;
+ (BOOL)getCurrentTimesThrash:(NSInteger)THRash;
+ (BOOL)getCurrentBatteryLevelThrash:(NSInteger)THRash;
+ (BOOL)getReadFontColorThrash:(NSInteger)THRash;

@end
