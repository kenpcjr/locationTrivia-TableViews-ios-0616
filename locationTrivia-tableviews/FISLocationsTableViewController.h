//
//  FISLocationsTableViewController.h
//  
//
//  Created by Kenneth Cooke on 6/23/16.
//
//

#import <UIKit/UIKit.h>
#import "FISLocation.h"
#import "FISTrivium.h"
#import "FISTriviaTableViewController.h"

@interface FISLocationsTableViewController : UITableViewController
@property (strong,nonatomic) NSArray *locations;
@end
