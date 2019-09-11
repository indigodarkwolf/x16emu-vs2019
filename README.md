# x16emu-vs2019
A Visual Studio project for developing with the Commander X16 emulator.

To get up and running:
* Create a fork of https://github.com/commanderx16/x16-emulator
* git clone your fork to this directory. This should create a directory named "x16-emulator".
* Open x16emu.sln
* Build, edit, whatever, and away you go.

This outputs to the bin/ directory, as x16emu_Debug.exe and/or as x16emu_Release.exe.

Troublshooting:
If files are added or removed from x16-emulator, just remove them from  the project in the Solution Explorer tab, then drag-and-drop all files from x16-emulator/ into the x16-emulator filter, and ditto all files from x16-emulator/cpu/ into the x16-emulator/cpu filter.

Frankly, I doubt the cpu filter is even necessary, but it's usually nice to replicate the directory structure. (I don't really understand why that isn't the default behavior of Visual Studio at this point.)