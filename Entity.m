#import "Entity.h"


@implementation Entity

- (id) init
{
    isShip = YES;
	return self;
}


- (void) setup
{
// From PlayerEntity.m line 2184
   	scanClass				= CLASS_PLAYER;
}

- (signed char)isShip
{
	return isShip;
}

@end
