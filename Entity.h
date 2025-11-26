#import <Foundation/Foundation.h>

#define ENTRY(label, value) label = value,

typedef enum OOScanClass OOScanClass;

enum OOScanClass
{
	ENTRY(CLASS_NOT_SET,				-1)
	ENTRY(CLASS_NO_DRAW,				0)
	ENTRY(CLASS_NEUTRAL,				1)
	ENTRY(CLASS_STATION,				3)
	ENTRY(CLASS_TARGET,					4)
	ENTRY(CLASS_CARGO,					5)
	ENTRY(CLASS_MISSILE,				6)
	ENTRY(CLASS_ROCK,					7)
	ENTRY(CLASS_MINE,					8)
	ENTRY(CLASS_THARGOID,				9)
	ENTRY(CLASS_BUOY,					10)
	ENTRY(CLASS_VISUAL_EFFECT,			11)
	ENTRY(CLASS_WORMHOLE,				444)
	ENTRY(CLASS_PLAYER,					100)
	ENTRY(CLASS_POLICE,					999)
	ENTRY(CLASS_MILITARY,				333)
};

#undef ENTRY


@interface Entity: NSObject
{
@public
	unsigned short			universalID;			// used to reference the entity
	
	unsigned				isShip: 1,  // remove the : 1 and then tehre is no assertion failure
							isStation: 1,
							isPlayer: 1,
							isWormhole: 1,
							isSubEntity: 1,
							hasMoved: 1,
							hasRotated: 1,
							hasCollided: 1,
							isSunlit: 1,
							collisionTestFilter: 2,
							throw_sparks: 1,
							isImmuneToBreakPatternHide: 1,
							isExplicitlyNotMainStation: 1,
							isVisualEffect: 1;
	
	OOScanClass				scanClass;
	
	float					zero_distance;
	float					cam_zero_distance;
	float					no_draw_distance;		// 10 km initially
	float					collision_radius;
}

- (void) setup;
- (signed char) isShip;

@end

