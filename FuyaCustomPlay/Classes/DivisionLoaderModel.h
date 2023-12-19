//
//  DivisionLoaderModel.h
//  Runner
//
//  Created by fuya on 15/12/23.
//

#import <Foundation/Foundation.h>
//#import "<KTVHTTPCache.h>"
#import <KTVHTTPCache/KTVHTTPCache.h>

NS_ASSUME_NONNULL_BEGIN

@interface DivisionLoaderModel : NSObject

/// 加载的URL
@property (nonatomic, copy, readonly) NSString *url;
/// 请求URL的Loader
@property (nonatomic, strong, readonly) KTVHCDataLoader *loader;

- (instancetype)initWithURL: (NSString *)url loader: (KTVHCDataLoader *)loader;

@end

NS_ASSUME_NONNULL_END
