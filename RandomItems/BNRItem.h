//
//  BNRItem.h
//  RandomItems
//
//  Created by Михаил Падалка on 2/18/16.
//  Copyright © 2016 Михаил Падалка. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject
{
    NSString * _itemName;
    NSString * _serialNumber;
    int _valueInDollars;
    NSDate * _dateCreated;
}

+ (instancetype)randomItem;

- (instancetype)initWithItemName:(NSString*)name
                  valueInDollars:(int)value
                    serialNumber:(NSString*)sNumber;

- (instancetype)initWithItemName:(NSString *)name
                    serialNumber:(NSString *)sn;

- (instancetype)initWithItemName:(NSString*)name;

- (void)setItemName:(NSString *)str;
- (NSString *)itemName;

- (void)setSerialNumber:(NSString *)str;
- (NSString *)serialNumber;

- (void)setValueInDollars:(int)v;
- (int)valueInDollars;

- (NSDate *)dateCreated;

@end
