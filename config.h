// Modify this file to change what commands output to your statusbar, and recompile using the make command.



static const Block blocks[] = {
//	icon	command	update interval	update signal

//	{"", "statusbar_test",                           0,  1},
	{"", "cat /tmp/screen-cast_status 2> /dev/null", 0,  2},
	{"", "statusbar_network",                        4,  3},
	{"", "statusbar_time",                           60, 4},

};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
