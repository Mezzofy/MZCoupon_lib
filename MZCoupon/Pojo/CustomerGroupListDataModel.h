//
//  CustomerGroupListDataModel.h
//  Mezzofy
//
//  Created by Mezzofy on 07/08/17.
//  Copyright © 2018 Mezzofy. All rights reserved.
//

#import "MZJastor.h"
#import "CustomerGroupDataModel.h"
@interface CustomerGroupListDataModel : MZJastor
@property (nonatomic, strong) NSMutableArray *customergroups;
@end
