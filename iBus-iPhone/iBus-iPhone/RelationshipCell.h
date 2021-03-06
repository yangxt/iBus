//
//  FollowedCell.h
//  weiboDemo
//
//  Created by yanghua on 3/25/13.
//  Copyright (c) 2013 yanghua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseCell.h"

#define Head_ImgView_Frame CGRectMake(5,5,30,30)
#define NickName_TxtView_Frame CGRectMake(40,5,230,30)
#define NickName_TxtView_FontSize 15.0f
#define NickName_Length 20

@interface RelationshipCell : BaseCell

@property (retain,nonatomic) NSString       *nickName;
@property (retain,nonatomic) UIImageView    *headImgView;

@end
