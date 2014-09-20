//
//  Data.h
//  Plain Ol' Notes
//
//  Created by LDC on 2/24/14.
//  Copyright (c) 2014 Todd Perkins. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kDefaultText @"New Note"
#define kAllNotes @"notes"
#define kDetailView @"showDetail"

@interface Data : NSObject

+(NSMutableDictionary *)getAllNotes;
+(void)setCurrentKey:(NSString *)key;
+(NSString *)getCurrentKey;
+(void)setNoteForCurrentKey:(NSString*)note;
+(void)setNote:(NSString *)note forKey:(NSString *)key;
+(void)removeNoteForKey:(NSString *)key;
+(void)saveNotes;

@end
