//
//  MIDUobMenuModel.h
//  MidtransKit
//
//  Created by Muhammad Fauzi Masykur on 14/06/21.
//  Copyright © 2021 Midtrans. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MIDUobMenuContent : NSObject

@property (nonatomic, readonly) NSString *menuTitle;
@property (nonatomic, readonly) NSString *menuDescription;
@property (nonatomic, readonly) NSString *selectedTitle;
@property (nonatomic, readonly) NSString *selectedOption;
@property (nonatomic, readonly) NSString *menuImage;

- (instancetype)initWithMenuTitle:(NSString *)menuTitle
                  menuDescription:(NSString *)menuDescription
                    selectedTitle:(NSString *)selectedTitle
                  selectedOption:(NSString *)selectedOption;
- (instancetype)initWithAppMenu;
- (instancetype)initWithWebMenu;
@end

NS_ASSUME_NONNULL_END
