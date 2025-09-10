# Guppy Screen for the Artillery M1

Guppy Screen is a touch UI for Klipper using APIs exposed by Moonraker. It builds on LVGL as a standalone executable, has no dependency on any display servers such as X/Wayland.

This is a forked version from https://github.com/ballaswag/guppyscreen specifically targetting the Artillery M1 (Pro)
 
 At this point - more of a PoC than anything

## Installation / Update / hack
Forked guppyscreen to play around the Artillery M1 screen - use build.sh
(you will need docker installed)

Copy the build/bin/guppyscreen, guppyconfig.json, themes scripts to the printer using ssh - eg: under a directory called guppyscreen.

You will have to stop mksclient service to start guppyscreen
```
sudo systemctl stop makerbase-client
````

start guppyscreen (as root):
```
sudo ./guppyscreen
```

