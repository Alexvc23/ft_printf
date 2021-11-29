#ifndef FT_PRINTFTEST_H
# define FT_PRINTFTEST_H

/* PRINTING WITH COLORS */
# define BLACK(string)		"\033[1;30m" string "\033[0m"
# define GRAY(string)		"\033[1;38;5;8m" string "\033[0m"
# define L_GRAY(string)		"\033[1;38;5;245m" string "\033[0m"
# define RED(string)		"\033[1;31m" string "\033[0m"
# define L_RED(string)		"\033[1;38;5;9m" string "\033[0m"
# define GREEN(string)		"\033[1;32m" string "\033[0m"
# define D_GREEN(string)	"\033[1;38;5;22m" string "\033[0m"
# define V_GREEN(string)	"\033[1;38;5;82m" string "\033[0m"
# define PETROL_G(string)	"\033[1;38;5;23m" string "\033[0m"
# define PETROL_B(string)	"\033[1;38;5;24m" string "\033[0m"
# define YELLOW(string)		"\033[1;33m" string "\033[0m"
# define V_YELLOW(string)	"\033[1;33m" string "\033[0m"
# define L_YELLOW(string)	"\033[1;38;5;191m" string "\033[0m"
# define BLUE(string)		"\033[1;34m" string "\033[0m"
# define V_BLUE(string)		"\033[1;38;5;27m" string "\033[0m"
# define VIOLET(string)		"\033[1;35m" string "\033[0m"
# define PINK(string)		"\033[1;38;5;199m" string "\033[0m"
# define LILAC(string)		"\033[1;38;5;13m" string "\033[0m"
# define PURPLE(string)		"\033[1;38;5;93m" string "\033[0m"
# define CYAN(string)		"\033[1;36m" string "\033[0m"
# define V_CYAN(string)		"\033[1;38;5;44m" string "\033[0m"
# define ORANGE(string)		"\033[1;38;5;166m" string "\033[0m"
# define V_ORANGE(string)	"\033[1;38;5;202m" string "\033[0m"
# define WHITE(string)	"\033[1;37m" string "\033[0m"

# endif 