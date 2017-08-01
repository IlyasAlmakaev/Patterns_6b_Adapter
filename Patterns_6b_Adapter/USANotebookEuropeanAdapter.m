//
//  USANotebookEuropeanAdapter.m
//  Patterns_6b_Adapter
//
//  Created by Ильяс on 20.07.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import "USANotebookEuropeanAdapter.h"

@implementation USANotebookEuropeanAdapter

- (id)initWithUSANotebookCharger:(USANotebookCharger *)charger {
    
    self = [super init];
    self.usaCharger = charger;
    
    return self;
}

- (void)chargetNotebookRoundHoles:(Charger *)charger {
    [self.usaCharger chargeNotebookRectHoles:charger];
}

- (void)charge {
    EuropeanNotebookCharger *euroCharge = [[EuropeanNotebookCharger alloc] init];
    euroCharge.delegate = self;
    [euroCharge charge];
}

@end
