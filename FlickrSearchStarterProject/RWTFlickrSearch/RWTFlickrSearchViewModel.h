//
//  RWTFlickrSearchViewModel.h
//  RWTFlickrSearch
//
//  Created by Apple on 16/6/25.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "RWTViewModelServices.h"


@interface RWTFlickrSearchViewModel : NSObject

@property (strong, nonatomic) NSString *searchText;
@property (strong, nonatomic) NSString *title;

@property (strong, nonatomic) RACCommand *executeSearch;


- (instancetype)initWithServices:(id<RWTViewModelServices>)services;

@end
