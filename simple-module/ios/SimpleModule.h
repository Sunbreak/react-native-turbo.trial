
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSimpleModuleSpec.h"

@interface SimpleModule : NSObject <NativeSimpleModuleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SimpleModule : NSObject <RCTBridgeModule>
#endif

@end
