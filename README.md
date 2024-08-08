# mcpelauncher-ui

## Build instructions
```
git clone --recursive https://github.com/OmarDevX/mcpelauncher-cracked.git mcpelauncher-ui
cd mcpelauncher-ui && mkdir -p build && cd build
cmake ..
make -j$(getconf _NPROCESSORS_ONLN)
```
macOS: replace the ```cmake``` line with ```cmake -DCMAKE_PREFIX_PATH=$(brew --prefix qt@5) ..```

If you haven’t installed the launcher system-wide, please replace ```cmake ..``` with ```cmake -DGAME_LAUNCHER_PATH=/absolute/path/to/mcpelauncher/build/dir/mcpelauncher-client ..``` (if you compiled the mcpelauncher-manifest in /home/paul, then you’d have to use ```cmake -DGAME_LAUNCHER_PATH=/home/paul/mcpelauncher-manifest/build/mcpelauncher-client ..``` as the command).

## Installation
You can now optionally install the launcher system-wise.

Generic instructions - Run sudo make install. Note that this doesn’t make use of your system package manager, and therefore if possible, it’s generally not recommended if there are better alternatives available for your system.

Ubuntu - You can create a .deb file and install it using the following commands:
```
cpack --config mcpelauncher-ui-qt/CPackConfig.cmake
sudo dpkg -i  ./mcpelauncher-ui-qt-*-Linux.deb && sudo apt-get install -f
```
