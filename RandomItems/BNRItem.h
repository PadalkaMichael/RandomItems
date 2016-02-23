//
//  BNRItem.h
//  RandomItems
//
//  Created by Михаил Падалка on 2/18/16.
//  Copyright © 2016 Михаил Падалка. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject

@property (nonatomic, strong) BNRItem *containedItem;
@property (nonatomic, weak) BNRItem *container;

@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) int valueInDollars;
@property (nonatomic, readonly, strong) NSDate *dateCreated;

+ (instancetype)randomItem;

- (instancetype)initWithItemName:(NSString*)name
                  valueInDollars:(int)value
                    serialNumber:(NSString*)sNumber;

- (instancetype)initWithItemName:(NSString *)name
                    serialNumber:(NSString *)sn;

- (instancetype)initWithItemName:(NSString*)name;

@end
