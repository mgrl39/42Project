#ifndef COLORS_H
#define COLORS_H

// Include
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> // For standard atoi function
#include <string.h>

// Regular colors
#define ANSI_COLOR_BLACK   "\x1b[0;30m"
#define ANSI_COLOR_RED     "\x1b[0;31m"
#define ANSI_COLOR_GREEN   "\x1b[0;32m"
#define ANSI_COLOR_YELLOW  "\x1b[0;33m"
#define ANSI_COLOR_BLUE    "\x1b[0;34m"
#define ANSI_COLOR_MAGENTA  "\x1b[0;35m"
#define ANSI_COLOR_CYAN    "\x1b[0;36m"
#define ANSI_COLOR_WHITE   "\x1b[0;37m"

// Bold Colors
#define ANSI_COLOR_BOLD_BLACK   "\x1b[1;30m"
#define ANSI_COLOR_BOLD_RED     "\x1b[1;31m"
#define ANSI_COLOR_BOLD_GREEN   "\x1b[1;32m"
#define ANSI_COLOR_BOLD_YELLOW  "\x1b[1;33m"
#define ANSI_COLOR_BOLD_BLUE    "\x1b[1;34m"
#define ANSI_COLOR_BOLD_PURPLE  "\x1b[1;35m"
#define ANSI_COLOR_BOLD_CYAN    "\x1b[1;36m"
#define ANSI_COLOR_BOLD_WHITE   "\x1b[1;37m"

// Background Colors
#define ANSI_COLOR_BG_BLACK   "\x1b[40m"
#define ANSI_COLOR_BG_RED     "\x1b[41m"
#define ANSI_COLOR_BG_GREEN   "\x1b[42m"
#define ANSI_COLOR_BG_YELLOW  "\x1b[43m"
#define ANSI_COLOR_BG_BLUE    "\x1b[44m"
#define ANSI_COLOR_BG_PURPLE  "\x1b[45m"
#define ANSI_COLOR_BG_CYAN    "\x1b[46m"
#define ANSI_COLOR_BG_WHITE   "\x1b[47m"

// Reset Color
#define ANSI_COLOR_RESET   "\x1b[0m"

#endif // COLORS_H
