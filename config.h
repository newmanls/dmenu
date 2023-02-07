/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace-10";
static const char *fonts[] = {
    font,
    "Noto Color Emoji-9"
};

/* -p  option; prompt to the left of input field */
static char *prompt = NULL;

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
    /*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/* Characters not considered part of a word while deleting words */
/* for example: " /?\"&[]" */
static const char worddelimiters[] = " ";

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "prompt",      STRING, &prompt },
	{ "color0",      STRING, &normbgcolor },
	{ "foreground",  STRING, &normfgcolor },
	{ "background",  STRING, &selbgcolor },
	{ "foreground",  STRING, &selfgcolor },
};
