Cordova Local Notification Plugin
=================================

Based on 

- Cordova 2.3.0+ plugin to create local notifications on iOs by Olivier Lesnicki 
- changes to reduce manual steps and make [plugman](https://github.com/apache/cordova-plugman) compatible


Installing the plugin
---------------------

This is what I do to install:

    $ plugman  --platform ios --project . --plugin git@github.com:bruchu/cordova-ios-LocalNotification.git --www app/scripts/vendor/

Using the plugin
----------------

	// Schedules a local notification to be triggered after 5 seconds

    window.addNotification({
		fireDate        : Math.round(new Date().getTime()/1000 + 5),
		alertBody       : "This is a local notification.",
		repeatInterval  : "daily",
		soundName       : "beep.caf",
		badge           : 0,
		notificationId  : 123,
		callBack        : function(notificationId){ 
			alert("Hello World! This alert was triggered by notification" + notificationId); 
		}    		
	});


To Do
-----
- Implement badges (currently property is ignored)
- JavaScript validation
- Different callback if the app was in the background
- support for UILocalNotification.alertAction
