//
//  OZSocketPub.h
//  Procreate
//
//  Created by Rowan James on 30/07/13.
//  Copyright (c) 2013 Savage Interactive Pty Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OZSocket.h"

#import "OZSocketSend.h"

@interface OZSocketPub
: OZSocket
< OZSocketSend >

@end
