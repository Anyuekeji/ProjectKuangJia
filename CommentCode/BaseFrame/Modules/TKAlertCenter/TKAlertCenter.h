//
//  TKAlertCenter.h
//  Created by Devin Ross on 9/29/10.
//
/*
 
 tapku.com || http://github.com/devinross/tapkulibrary
 
 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class TKAlertView;

@interface TKAlertCenter : NSObject {

	NSMutableArray *alerts;
	BOOL active;
	TKAlertView *alertView;
	CGRect alertFrame;
	
}

+ (TKAlertCenter*) defaultCenter;
/**
 *  弹出一个的能自定义背景的提示
 *  @param message 提示内容
 *  @param image   背景图片
 */
- (void) postAlertWithMessage:(NSString*)message image:(UIImage*)image;
/**
 *  弹出一个的提示
 *  @param message 提示内容
 */
- (void) postAlertWithMessage:(NSString *)message;
/**
 *  是否在显示当中
 */
-(BOOL)isAcitive;
@end





