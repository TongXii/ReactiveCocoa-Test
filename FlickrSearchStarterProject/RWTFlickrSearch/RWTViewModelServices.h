//
//  RWTViewModelServices.h
//  RWTFlickrSearch
//
//  Created by Apple on 16/6/25.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "RWTFlickrSearch.h"

@protocol RWTViewModelServices <NSObject>

- (id<RWTFlickrSearch>)getFlickrSearchService;

@end