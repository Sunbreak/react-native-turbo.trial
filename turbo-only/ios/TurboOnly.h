#ifdef __cplusplus
#import "react-native-turbo-only.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTurboOnlySpec.h"

@interface TurboOnly : NSObject <NativeTurboOnlySpec>
#else
#import <React/RCTBridgeModule.h>

@interface TurboOnly : NSObject <RCTBridgeModule>
#endif

@end
