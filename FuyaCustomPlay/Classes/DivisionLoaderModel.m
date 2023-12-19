//
//  DivisionLoaderModel.m
//  Runner
//
//  Created by fuya on 15/12/23.
//

#import "DivisionLoaderModel.h"

@implementation DivisionLoaderModel

- (instancetype)initWithURL: (NSString *)url loader: (KTVHCDataLoader *)loader
{
    if (self = [super init])
    {
        _url = url;
        _loader = loader;
    }
    return self;
}

@end
