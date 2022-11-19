#ifdef __cplusplus
#import "react-native-turbo-compat.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTurboCompatSpec.h"

@interface TurboCompat : NSObject <NativeTurboCompatSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TurboCompat : NSObject <RCTBridgeModule>
#endif

@end
