//
//  PlayersViewController.h
//  Ratings
//
//  Created by User1 on 7/23/15.
//
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;

@end
