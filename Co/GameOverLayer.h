//
//  GameOverLayer.h
//  CocosHello
//
//  Created by Iolanta Anisko on 21.02.13.
//
//

#import "CCLayer.h"
#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor

+(CCScene *) sceneWithWon:(BOOL)won;
- (id)initWithWon:(BOOL)won;

@end
