//
//  USANotebookEuropeanAdapter.h
//  Patterns_6b_Adapter
//
//  Created by Ильяс on 20.07.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import "Charger.h"
#import "EuropeanNotebookChargerDelegate.h"
#import "USANotebookCharger.h"
#import "EuropeanNotebookCharger.h"

@interface USANotebookEuropeanAdapter : Charger <EuropeanNotebookChargerDelegate>

@property (nonatomic, strong) USANotebookCharger *usaCharger;

- (id)initWithUSANotebookCharger:(USANotebookCharger *)charger;

- (void)charge;

@end
