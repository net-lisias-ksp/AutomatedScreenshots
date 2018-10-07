# AutomatedScreenshots (Archive)

A mod to grab automated screenshots at specific time intervals and special events. Unofficial fork by Lisias.


## In a Hurry

* [Binaries](./Archive)
	* [Latest Release](https://github.com/net-lisias-kspu/AutomatedScreenshots/releases)
* [Source](https://github.com/net-lisias-kspu/AutomatedScreenshots)
* [Change Log](./CHANGE_LOG.md)


## Description

A mod to grab automated screenshots at specific time intervals and special events

Additionally, can do automated saves.

This mod will take screenshots at specified intervals.

The following are the ways that screenshots can be taken:

1.  The intervals can be specified by time in seconds between each screenshot. The smallest interval allowed is approximately 0.03 sec, if you really want to kill your performance and disk
2.  Screenshots can be taken at each scene change
3.  Screenshots can be taken at special events.
4.  The UI can be hidden during the screenshots.  Be aware that this will be visible, the UI will flicker off and then on during the screenshot.
5.  If options to both show and hide the UI are specified, then two screenshots will be taken, one with and one without the UI
6.  Pre crash/landing detection is added, so if specified, then faster screenshots will be taken just before crashes
7.  Integration with Historian.  If Historian is loaded and configured, AS will call Historian before each screenshot to activate the ribbon
8.  Automatic Saves.  The mod will now do automatic saves at specified intervals.  It will only keep a specified number of save files.

The screenshots are saved as PNG files.  PNG files can be big, so you can also specify that the PNG files be converted to JPG files, and optionally delete the PNG file after conversion.

The filename is fully configurable, by using variables in the file name.

The following are the "variables" available in file names:

[date] = Parsed DateString
[UT] = Current in-game time in seconds
[save] = Name of current save game
[vessel] = Active Vessel name
[body] = Current primary celestial body name
[situation] = Active Vessel situation (PRELAUNCH, FLYING, ORBITING, etc.)
[biome] = Current Active Vessel biome
[year] = Current in-game year (as seen in top left during flight (1, 2, etc.))
[day] = Current in-game day (similar to year)
[hour] = in-game hour
[min] = in-game minute
[sec] = in-game seconds
[evt] = event flag

### Event Flag

If a screenshot by time interval: time
If by scene change: scene
If by special event: event

An example (ridiculous) possible filename is: 
AS_[date]_[save]_[vessel]_[body]_[biome]_[situation]_Y[year]_D[day]_H[hour]_M[min]_S[sec]_UT[UT] 

which could turn out to be: 
AS_2015-04-30-22-22_KSPv1.0.0_SaveGameTest_Kerbal#X_Kerbin_Shores_PRELAUNCH_Y1_D10_H5_M7_S36_UT212856.png

The code for the JPG conversion and the custom filenames was taken from the Sensible Screenshot mod, written by magico13

### Automated Saves

The mod will now do automatic saves at specified intervals. it will only keep a specified number of save files.
Automatic saves is turned on by hitting Ctrl-F5


## Installation

To install, place the GameData folder inside your Kerbal Space Program folder.

**REMOVE ANY OLD VERSIONS OF THE PRODUCT BEFORE INSTALLING**.

### Dependencies
* Hard Dependencies
<!--        * [KSP API Extensions/L](https://github.com/net-lisias-ksp/KSPAPIExtensions) 2.0 or newer -->
        * [Toolbar Control](https://github.com/net-lisias-kspu/ToolbarControl) 0.1.6.15 or newer

### Licensing

This work is licensed under [GPL 3.0](https://www.gnu.org/licenses/gpl-3.0.txt). See [here](./LICENSE)

+ You are free to:
	- Use : unpack and use the material in any computer or device
	- Redistribute : redistribute the original package in any medium
	- Adapt : Reuse, modify or incorporate source code into your works (and redistribute it!) 
+ Under the following terms:
	- You retain any copyright notices
	- You recognize and respect any trademarks
	- You don't impersonate the authors, neither redistribute a derivative that could be misrepresented as theirs.
	- You credit the author and republish the copyright notices on your works where the code is used.
	- You relicense (and fully comply) your works using GPL 2.0 (or later)
	- You don't mix your work with GPL incompatible works.


## UPSTREAM

* [linuxgurugamer](https://forum.kerbalspaceprogram.com/index.php?/profile/129964-linuxgurugamer/)
	+ [Forum](https://forum.kerbalspaceprogram.com/index.php?/topic/116979-141-automated-screenshots/)
	+ [GitHub](https://github.com/linuxgurugamer/AutomatedScreenshots)
	+ [SpaceDock](https://spacedock.info/mod/43/Automated%20Screenshots%20&%20Saves) 
