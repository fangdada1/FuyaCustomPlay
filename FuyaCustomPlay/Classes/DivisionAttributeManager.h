//
//  DivisionAttributeManager.h
//  Runner
//
//  Created by fuya on 15/12/23.
//

#import <Foundation/Foundation.h>
#import <ZFPlayer/ZFPlayerMediaPlayback.h>

NS_ASSUME_NONNULL_BEGIN

@interface DivisionAttributeManager : NSObject<ZFPlayerMediaPlayback>

@property (nonatomic) BOOL shouldAutoPlay;

@end

NS_ASSUME_NONNULL_END
