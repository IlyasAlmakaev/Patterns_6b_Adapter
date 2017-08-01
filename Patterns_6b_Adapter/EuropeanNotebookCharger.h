//
//  EuropeanNotebookCharger.h
//  Patterns_6b_Adapter
//
//  Created by Ильяс on 20.07.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import "Charger.h"
#import "EuropeanNotebookChargerDelegate.h"

@interface EuropeanNotebookCharger : Charger <EuropeanNotebookChargerDelegate>

@property (nonatomic, strong) id<EuropeanNotebookChargerDelegate>delegate;

@end
