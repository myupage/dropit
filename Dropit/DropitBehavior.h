//
//  DropitBehavior.h
//  Dropit
//
//  Created by Minoo on 2016. 2. 15..
//  Copyright © 2016년 Minoo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior
-(void)addItem:(id <UIDynamicItem>)item;
-(void)removeItem:(id <UIDynamicItem>)item;
@end
