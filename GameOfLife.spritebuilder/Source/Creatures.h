//
//  Creatures.h
//  GameOfLife
//
//  Created by Miguel Rincon on 6/11/15.
//  Copyright © 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creatures : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

-(id)initCreature;

@end
