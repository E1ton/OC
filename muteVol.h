//
//  muteVol.m
//  
//
//  Created by Sella on 27/4/21.
//

#import "vol.h"

@interface MuteVolume : Volume
{
    BOOL muting;
}
-(id)initWithMin:(int)a max:(int)b step:(int)s;
-(int)value;
-(id)mute;
@end
