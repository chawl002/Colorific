//
//  PlayerDetailsViewController.m
//  Ratings
//
//  Created by User1 on 9/3/15.
//
//

#import "PlayerDetailsViewController.h"

@implementation PlayerDetailsViewController

- (IBAction)cancel:(id)sender
{
    [self.delegate playerDetailsViewControllerDidCancel:self];
}
- (IBAction)done:(id)sender
{
    [self.delegate playerDetailsViewControllerDidSave:self];
}

@end
