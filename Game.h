//
//  Game.h
//  Flappy
//
//  Created by Quix Creations Singapore iOS 1 on 22/8/15.
//  Copyright (c) 2015 Terry Chia. All rights reserved.
//

#import <UIKit/UIKit.h>

int birdFlight;
int randomTopTunnelPosition;
int randomBottomTunnelPosition;
int scoreNumber;
NSInteger highScoreNumber;  //save to avoid bug

@interface Game : UIViewController
{
    IBOutlet UIImageView *bird;
    IBOutlet UIButton *startGame;
    IBOutlet UIImageView *tunnelBottom;
    IBOutlet UIImageView *tunnelTop;

    IBOutlet UIImageView *bottom;
    IBOutlet UIImageView *top;
    IBOutlet UIButton *exit;
    IBOutlet UILabel *scoreLabel;
    
    NSTimer *birdMovement;
    NSTimer *tunnelMovement;
    
}

-(IBAction)startGame :(id)sender;
-(void) birdMoving;
-(void) tunnelMoving;
-(void)placeTunnels;
-(void)score;
-(void)GameOver;


@end
