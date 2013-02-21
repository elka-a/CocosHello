//
//  HelloWorldLayer.h
//  Co
//
//  Created by Iolanta Anisko on 21.02.13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "GameOverLayer.h"
// HelloWorldLayer
@interface HelloWorldLayer : CCLayerColor <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    NSMutableArray * _monsters;
    NSMutableArray * _projectiles;
    int _monstersDestroyed;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
