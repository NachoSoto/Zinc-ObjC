//
//  ZCManifest.h
//  Zinc-iOS
//
//  Created by Andy Mroczkowski on 12/5/11.
//  Copyright (c) 2011 MindSnacks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Zinc.h"

@interface ZincManifest : NSObject

- (id) init;
- (id) initWithDictionary:(NSDictionary*)dict;

@property (nonatomic, retain) NSString* bundleName;
@property (nonatomic, assign) ZincVersion version;

- (NSString*) shaForFile:(NSString*)path;
- (NSArray*) allFiles;
- (NSArray*) allSHAs;

- (NSDictionary*) dictionaryRepresentation;
- (NSString*) jsonRepresentation:(NSError**)outError;

@end