#ifndef COLOR_M_H
#define COLOR_M_H
#include <iostream>
#include <ostream>
namespace Color {
    enum Code {
        FG_RED      = 31,
        FG_GREEN    = 32,
        FG_BLUE     = 34,
        FG_DEFAULT  = 39,
	FG_WHITE    = 97,
        BG_RED      = 41,
        BG_GREEN    = 42,
        BG_BLUE     = 44,
        BG_DEFAULT  = 49,
	BG_WHITE = 107,
	BG_LIGHT_GREEN = 102,
	BG_BLACK = 40,
	BG_PURPLE = 45
    };
    class Modifier {
        Code code;
    public:
        Modifier(Code pCode) : code(pCode) {}
        friend std::ostream&
        operator<<(std::ostream& os, const Modifier& mod) {
            return os << "\033[" << mod.code << "m";
        }
    };
}

#endif //COLOR_M_H
