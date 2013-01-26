//
//  Ebook.h
//  BSTestArc
//
//  Created by Abizer Nasir on 26/01/2013.
//  Copyright (c) 2013 Jungle Candy Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Ebook : NSManagedObject

@property (nonatomic, retain) NSData * contents;
@property (nonatomic, retain) NSString * title;

@end
