//
//  XMMessageCell.h
//  XMChatControllerExample
//
//  Created by shscce on 15/9/1.
//  Copyright (c) 2015年 xmfraker. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Masonry.h"

#import "XMTextMessage.h"
#import "XMImageMessage.h"
#import "XMVoiceMessage.h"
#import "XMSystemMessage.h"
#import "XMLocationMessage.h"

#define kSystemTextPaddingLeft      8.0f
#define kSystemTextPaddingRight     8.0f
#define kSystemTextPaddingTop       3.0f
#define kSystemTextPaddingBottom    3.0f

#define kAvatarSize                 40.0f
#define kAvatarCornerRadius         8.0f


@interface XMMessageCell : UITableViewCell

@property (strong, nonatomic) XMMessage *message;
@property (strong, nonatomic) UIImageView *avatarImageView /**< 显示发送者头像 system 没有头像 */;
@property (strong, nonatomic) UIImageView *messageBackgroundImageView /**< 消息背景,location,text,voice时有 */;
@property (strong, nonatomic) UIImageView *messageSendStateImageView /**< 显示发送状态消息状态 */;

@property (weak, nonatomic) id<XMMessageDelegate> messageDelegate;

- (instancetype)initWithMessage:(XMMessage *)message;

- (void)setup;

+ (NSString *)cellIndetifyForMessage:(XMMessage *)message;

@end
