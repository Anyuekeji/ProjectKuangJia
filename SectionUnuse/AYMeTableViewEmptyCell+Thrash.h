#import "LETableViewCell.h"
#import "LELineTableViewCell.h"
#import "THMeTableViewCell.h"
#import "THMeModel.h"
#import "THChargeSelectView.h" //充值界面
#import "THSignListModel.h"
#import "UILabel+copy.h"
#import "LEClickLable.h"
#import "THUserChargeModel.h"
#import "THTaskRecordModel.h"
#import "THConsumeModel.h"
#import "THFriendModel.h"

@interface AYMeTableViewEmptyCell (Thrash)
+ (BOOL)setUpThrash:(NSInteger)THRash;
+ (BOOL)configureUIThrash:(NSInteger)THRash;
+ (BOOL)cellHeightThrash:(NSInteger)THRash;

@end