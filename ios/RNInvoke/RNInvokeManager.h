//
//  RNInvoke.h
//  RNInvoke
//
//  Created by Tal Kol on 6/20/16.
//  Copyright © 2016 Wix. All rights reserved.
//

#if __has_include(<React/RCTAssert.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

@interface RNInvokeManager : NSObject <RCTBridgeModule>

@end
