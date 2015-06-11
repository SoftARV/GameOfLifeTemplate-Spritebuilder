//
//  Grid.h
//  GameOfLife
//
//  Created by Miguel Rincon on 6/11/15.
//  Copyright © 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
