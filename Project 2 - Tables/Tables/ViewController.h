//
//  ViewController.h
//  Tables
//
//  Created by User1 on 7/1/15.
//  Copyright (c) 2015 appconda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property NSArray * cats;
@property IBOutlet UITableView *tV;

@end

