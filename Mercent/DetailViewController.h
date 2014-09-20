//
//  DetailViewController.h
//  Mercent
//
//  Created by Abhi Agarwal on 9/20/14.
//  Copyright (c) 2014 Abhi Agarwal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

