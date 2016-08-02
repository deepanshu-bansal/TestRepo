//
//  DetailViewController.h
//  JenkinsTest
//
//  Created by jenkins on 02/08/16.
//  Copyright © 2016 jenkins. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

