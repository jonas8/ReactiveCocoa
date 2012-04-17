//
//  GHDMainView.h
//  RACiOSDemo
//
//  Created by Josh Abernathy on 4/17/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface GHDMainView : UIView

@property (nonatomic, strong) IBOutlet UITextField *textField;
@property (nonatomic, strong) IBOutlet UILabel *label;

+ (id)viewFromNib;

@end
