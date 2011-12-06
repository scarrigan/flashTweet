//
//  FlashTweetViewController.h
//  FlashTweet
//
//  Created by Steve Carrigan on 11/30/11.
//  Copyright (c) 2011 OryxSoftware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FlashTweetViewController : UIViewController <UIAlertViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (strong, nonatomic) UIImage *tweetPhoto;

- (IBAction)tweet:(id)sender;

@end
