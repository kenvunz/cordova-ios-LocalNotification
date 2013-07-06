/*!
 * Cordova 2.3.0+ LocalNotification plugin
 * Original author: Olivier Lesnicki
 */

#import <Cordova/CDV.h>

@interface CDVPlugin (LocalNotificationAdditions)

- (void)didReceiveLocalNotification:(NSNotification *)notification;

@end

@interface LocalNotification : CDVPlugin

- (void)addNotification:(CDVInvokedUrlCommand*)command;
- (void)cancelNotification:(CDVInvokedUrlCommand*)command;
- (void)cancelAllNotifications:(CDVInvokedUrlCommand*)command;

@end