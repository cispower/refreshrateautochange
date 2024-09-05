# refreshrateautochange
For people with the same problem as me, your display shows a black screen when changing refresh rate to  for example 144hz?  Then this is the right tool for you.

Steps for this to work:
Install the exe if you want to change from 144hz to 60hz(check display settings for available refresh rate modes) or download the autohz.c file, edit the first lines to your liking and compile it using "gcc".

Then if you have compiled it you have to create a shortcut of the program(right click on it then (win11 show more) create shortcut).
And last thing is to add it to the startup programs. How u do it?
There are more methods to this but i used this;
1. press Win Key + R
2. type %appdata%
3. go to Roaming/Microsoft/Windows/Start Menu/Programs/Startup
4. Move the shortcut there
Done!

Also when starting the laptop the app doesnt start until you login (desktop password) so all you have to do is be carefull when writing the password and press Enter then wait until the app changes the refresh rate. (probably 10 seconds after login if on SSD).
Leave the Command Prompt open when using the laptop only if your screen refresh rate changes automatically to the bad hz (black screen).
That's it. Probably will help only a few but hey. I loved doing this script.
