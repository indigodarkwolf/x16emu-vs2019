# x16emu-vs2019
A Visual Studio project for developing with the Commander X16 emulator.

To get up and running:
* Delete the x16-emulator directory (it's a submodule of my x16-emulator fork, but I don't plan to accept pull requests from others -- make your own to the master branch!)
* Create a fork of https://github.com/commanderx16/x16-emulator
* git clone your fork to this directory. This should create a directory named "x16-emulator".
* Open x16emu.sln
* Build, edit, whatever, and away you go.

Only the x86 builds are setup. In theory, x64 only needs the SDL2 libs added to Linker > Input > Additional Dependencies, and change the output location and debug working directory. Maybe a few other bits and bobs. Maybe I'll care enough to do it myself at a later point. :P

This outputs to the bin/ directory, as x16emu_Debug.exe and/or as x16emu_Release.exe.

Troublshooting:
If files are added or removed from x16-emulator, just remove them from  the project in the Solution Explorer tab, then drag-and-drop all files from x16-emulator/ into the x16-emulator filter, and ditto all files from x16-emulator/cpu/ into the x16-emulator/cpu filter.

Frankly, I doubt the cpu filter is even necessary, but it's usually nice to replicate the directory structure. (I don't really understand why that isn't the default behavior of Visual Studio at this point.)