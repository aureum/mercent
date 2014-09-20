//
//  DetailViewController.h
//  Plain Ol' Notes
//
//  Created by LDC on 2/24/14.
//  Copyright (c) 2014 Todd Perkins. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UITextView *tView;
@end
