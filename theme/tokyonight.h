/* tokyonight color */
static const char norm_fg[] = "#f7768e";
static const char norm_bg[] = "#15161e";
static const char norm_border[] = "#1a1b26";

static const char sel_fg[] = "#ffffff";
static const char sel_bg[] = "#7aa2f7";
static const char sel_border[] = "#7aa2f7";

/* TODO */
static const char urg_fg[] = "#d5c2e3";
static const char urg_bg[] = "#8778B4";
static const char urg_border[] = "#8778B4";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};

