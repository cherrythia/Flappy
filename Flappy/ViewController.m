//
//  ViewController.m
//  Flappy
//
//  Created by Quix Creations Singapore iOS 1 on 22/8/15.
//  Copyright (c) 2015 Terry Chia. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    
    highestScoreNumber = [[NSUserDefaults standardUserDefaults]integerForKey:@"highScoreSaved"];
    highScore.text = [NSString stringWithFormat:@"High Score = %li",(long)highestScoreNumber];
    
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
