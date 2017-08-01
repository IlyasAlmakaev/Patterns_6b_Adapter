//
//  USANotebookCharger.h
//  Patterns_6b_Adapter
//
//  Created by Ильяс on 20.07.17.
//  Copyright © 2017 Алмакаев Ильяс. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Charger.h"

@interface USANotebookCharger : NSObject

- (void)chargeNotebookRectHoles:(Charger *)charger;

@end
