//
//  IMDataManager+QIMUserMedal.h
//  QIMCommon
//
//  Created by lilu on 2018/12/11.
//  Copyright © 2018 QIM. All rights reserved.
//

#import "IMDataManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface IMDataManager (QIMUserMedal)

- (NSArray *)qimDB_getUserMedalsWithXmppId:(NSString *)xmppId;

- (void)qimDB_bulkInsertUserMedalsWithData:(NSArray *)userMedals;

@end

NS_ASSUME_NONNULL_END
