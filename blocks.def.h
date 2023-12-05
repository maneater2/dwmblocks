//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	     /*Command*/		 /*Update Interval*/	/*Update Signal*/
        {"^c#302a5c^[^d^", "",                                      0,                      0},
        {"^c#ee8109^Mem^d^", "~/.local/bin/status_mem",             5,                      3},
        {"^c#302a5c^]^d^", "",                                      0,                      0},
        {"^c#302a5c^[^d^", "",                                      0,                      0},
        {"^c#277fff^Cpu^d^", "~/.local/bin/status_cpu",             5,                      4},
        {"^c#302a5c^]^d^", "",                                      0,                      0},
        {"^c#302a5c^[^d^", "",                                      0,                      0},
        {"^c#8f04ae^Time^d^", "~/.local/bin/status_date",          60,                      6},
        {"^c#302a5c^]^d^", "",                                      0,                      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 2;
