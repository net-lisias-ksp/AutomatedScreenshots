# AutomatedScreenshots :: Change Log

* 2016-0515: 0.7.2 (linuxgurugame) for KSP 1.1
	+ Added new option to start autosaving after loading game
* 2016-0419: 0.7.1.2 (linuxgurugame) for KSP 1.1
	+ No changelog provided 
* 2015-1002: 7.1.1 (no binary)
	+ No changelog provided 
* 2015-1002: 7.1 (no binary)
	+ No changelog provided 
* 201?-****: 0.6 (no binary)
	+ Added ability to supersize screenshots 
* 201?-****: 0.5.3 (no binary)
	+ Fixed bug where if a directory was unwritable, the screen could get locked with the gui hidden
	+ Fixed bug where a relative path would not work.
* 201?-****: 0.5.2 (no binary)
	+ Changed from LateUpdate to FixedUpdate, to allow faster screenshots
	+ Changed minimum time interval from 0.1 to Time.deltaTime (usualy 0.02)
	+ Fixed bug where if screenshots were stopped, and there was a png waiting to be converted, and it was deleted, no more screenshots could be taken until the game was restarted
* 201?-****: 0.5.1 (no binary)
	+ Added line to config window to show the activation key for the automated saves.  Not configurable at this time 
* 201?-****: 0.5.0 (no binary)
	+ Added public function for external mods to call to do an automated save
	+ Added public funciton for external mods to call to do an automated screenshot
	+ Updated zero-padding code for filename to use the ToString() syntax available, save a little codespace
	+ Refactored game save code to put all save functions into single class
* 201?-****: 0.4.1 (no binary)
	+ updated AVC version file
* 201?-****: 0.4.0 (no binary)
	+ Changed minimum frequency of screenshots from 1 sec to 0.1 sec
	+ Fixed bug where no active vessel caused spamming in log file in the SpaceCenter scene
	+ Added automated saving of save files
	+ Added rotation of save files to limit number of files 
	+ Fixed screenshots during timewarp, to NOT take too many snapshots.  Now	 uses realtime, not gametime
	+ Fixed name of Plugin directory, changed to Plugins
	+ Added check for colon in file name, replace it with a dash
	+ Updated hour/min/sec time to have leading zeroes
* 201?-****: 0.3.0 (no binary)
	+ Updated logging code so INFO is forced during development/debugging
	+ Added code to be able to tell the Historian mod a screenshot is happening.  Needs a small change to Historian to work
	+ Cleaned up some more code
	+ Updated buildrelease.bat
	+ Removed unnecessary PNG files from release
	+ Added ChangeLog.txt to release
	+ Moved ChangeLog.txt up one directory
* 201?-****: 0.2.0 (no binary)
	+ Added pre crash/landing detection 
	+ Added ability to take screenshots both with and without UI
	+ Bug fixed where if you had the UI hidden, it would be enabled after a screenshot
	+ Fixed missing toolbar icons
* 201?-****: 0.1.0 (no binary)
	+ initial release
