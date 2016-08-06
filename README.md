#SythePoke
This is the source of SythePoke:
http://www.sythe.org/threads/pokemon-go-for-pc-client-play-pokemon-go-in-any-city-sythepoke-v0-8.2150567/

This very simple win32 client opens a pipe to the NOX emulator and simulates GPS movements based on key strokes and a selected location.

Some of the code was programmatically generated (in particular combobox). This code and client are in alpha release and have been rapidly prototyped over a few hours. Bugs are expected.

#Version 0.9 Notes
Added a compass reader based on the Windows Desktop Duplication API. The compass pixels are scraped from their render surface and intrepreted for direction information. This is then translated into lat lng update information when arrow keys are pressed. This code adds significant complexity to the program. A second thread was also added to separate key input from process pipe writing.

#Libraries
Compile with:
kernel32.lib; user32.lib; advapi32.lib

#Additional Libs as of SythePoke 0.9
gdi32.lib;kernel32.lib; user32.lib; advapi32.lib;dxgi.lib;dxguid.lib;D3D11.lib;Gdiplus.lib

#Copyright Free
This code is Public Domain. All copyrights on this work are hereby waived and relinquished.
