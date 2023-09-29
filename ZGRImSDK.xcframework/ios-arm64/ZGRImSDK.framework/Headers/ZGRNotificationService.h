
#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZGRNotificationService : UNNotificationServiceExtension

@property (nonatomic, strong) void (^contentHandler)(UNNotificationContent *);
@property (nonatomic, strong) UNMutableNotificationContent *bestContent;

- (void)zgr_didReceiveNotificationRequest:(UNNotificationRequest *)request
                   withContentHandler:(void (^)(UNNotificationContent * _Nonnull))contentHandler;
- (void)zgr_serviceExtensionTimeWillExpire;
- (BOOL)isZGRNotification:(NSDictionary *)userInfo;

+ (instancetype)sharedInstance;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
