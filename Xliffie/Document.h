//
//  Document.h
//  Xliffie
//
//  Created by b123400 on 5/1/15.
//  Copyright (c) 2015 b123400. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "File.h"

@interface Document : NSDocument

@property (nonatomic, strong) NSMutableArray <File*> *files;

- (Document*)filteredDocumentWithSearchFilter:(NSString*)filter;
- (NSMutableArray*)filesMatchingSearchFilter:(NSString*)filter;

@end

