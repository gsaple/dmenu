/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                 /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:pixelsize=16:antialias=true:autohint=true",
        "JoyPixels:pixelsize=16:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static char normfgcolor[] =   "#bbbbbb";
static char normbgcolor[] =   "#222222";
static char selfgcolor[]  =   "#eeeeee";
static char selbgcolor[]  =   "#005577";
static char hlnormfgcolor[] = "#ffc978";
static char hlnormbgcolor[] = "#222222";
static char hlselfgcolor[]  = "#ffc978";
static char hlselbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
	                        /*     fg         bg      */
	[SchemeNorm] =          { normfgcolor,   normbgcolor },
	[SchemeSel] =           { selfgcolor,    selbgcolor},
	[SchemeNormHighlight] = { hlnormfgcolor, hlnormbgcolor},
	[SchemeSelHighlight] =  { hlselfgcolor,  hlselbgcolor},
	[SchemeOut] =           { "#000000",     "#00ffff" },
	[SchemeOutHighlight] =  { "#ffc978",     "#00ffff" },
};


/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "color7",     STRING, &normfgcolor  },
	{ "background", STRING, &normbgcolor  },
	{ "color15",    STRING, &selfgcolor   },
	{ "color4",     STRING, &selbgcolor   },
	{ "color11",    STRING, &hlnormfgcolor},
	{ "background", STRING,	&hlnormbgcolor},
	{ "color11",    STRING, &hlselfgcolor },
	{ "color4",     STRING, &hlselbgcolor },
};
