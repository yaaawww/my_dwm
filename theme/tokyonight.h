/* tokyonight color */

    //black:   '#15161E'
    //red:     '#f7768e'
    //green:   '#9ece6a'
    //yellow:  '#e0af68'
    //blue:    '#7aa2f7'
    //magenta: '#bb9af7'
    //cyan:    '#7dcfff'
    //white:   '#a9b1d6'

static const char norm_fg[] = "#7aa2f7";
static const char norm_bg[] = "#1a1b26";
static const char norm_border[] = "#1a1b26";

static const char sel_fg[] = "#ffffff";
static const char sel_bg[] = "#29b0c7";
static const char sel_border[] = "#7aa2f7";

enum { SchemeNorm, SchemeSel }; /* color schemes */

static const char *colors[][3] = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};

