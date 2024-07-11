# DWMBlocks
Status bar built for my build of [DWM](/maneater2/dwm). Compatible with Linux, OpenBSD, and FreeBSD, however I have not yet written the actual functionality for FreeBSD in the scripts yet.

# Compatible systems
Linux, OpenBSD, FreeBSD

# Installation
## Linux
`./configure && make && sudo make install`

## FreeBSD and OpenBSD
`./configure && gmake && doas gmake install`

## Software Made to Work With This
- [DWM](https://github.com/maneater2/dwm)
- [DMenu](https://github.com/maneater2/dmenu)
- [ST](https://github.com/maneater2/st)

# Dependencies
Each module depends on a script of mine, specifically the following:
- `sb-cpuusage`
- `sb-volume`
- `sb-memory`
- `sb-cputemp`
- `sb-network`
- `sb-battery`\
All of these scripts can be found in my [dotfiles repo](https://github.com/maneater2/files). Simply download each script (or add your own), make them each executable, and place them somewhere in your $PATH.
