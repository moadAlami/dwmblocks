#define CMDLENGTH 100
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sb-mpd", 0, 9),
	BLOCK("sb-bluetooth",	1, 8),
	BLOCK("sb-bandwidth",	1, 7),
	BLOCK("sb-torrent",	1, 6),
	BLOCK("sb-memory",	5, 5),
	BLOCK("sb-volume",	0, 4),
	BLOCK("sb-cpu",	5, 3),
	BLOCK("sb-date",	60, 2),
	/* BLOCK("sb-numlock", 0, 1), */
};

