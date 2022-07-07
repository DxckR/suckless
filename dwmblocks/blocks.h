// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
                                             // {"<\x01", "dwmnet", 1, 0},

    // {"<\x01﬙  ", "upt", 10, 0},

    // {"\x03", "weather", 1800, 0},

    // {"\x04﨎 ", "cputemp", 1, 0},

    {"  ", "~/.local/bin/battery", 2, 0},

    // {"\x06  ", "memory", 5, 0},

    {"   ", "pamixer --get-volume-human", 2, 0},

    {"   ", "~/.local/bin/clock", 5, 0},

};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim = '/';
