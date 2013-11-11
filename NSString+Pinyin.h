//
//  NSString+Pinyin.h
//  Snowball
//
//  Created by croath on 11/11/13.
//  Copyright (c) 2013 Snowball. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Pinyin)

- (NSString*)pinyinWithPhoneticSymbol;
- (NSString*)pinyin;
- (NSArray*)pinyinArray;
- (NSString*)pinyinWithoutBlank;
- (NSArray*)pinyinInitialsArray;
- (NSString*)pinyinInitialsString;

@end
