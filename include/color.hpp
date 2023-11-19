#pragma once
#ifndef __COLOR_HPP__
#define __COLOR_HPP__

#include <iostream>

namespace jaszyk {

    class ConsoleColor {
    public:
        constexpr ConsoleColor(int value) : value_(value) {}

        inline friend std::ostream& operator<<(std::ostream& os, const ConsoleColor& color) {
            return os << "\033[" << color.value_ << 'm';
        }

    private:
        int value_;
    };

    namespace impl {
        struct DefaultColorGuard_ {
            inline DefaultColorGuard_(std::ostream& os) : os_(os) {}
            inline ~DefaultColorGuard_() { os_ << "\033[0m"; }
            std::ostream& os_;
        };

        const DefaultColorGuard_ guard_{ std::cout };
    }

    namespace colors {
        constexpr ConsoleColor reset(0);

        constexpr ConsoleColor black(30);
        constexpr ConsoleColor darkred(31);
        constexpr ConsoleColor darkgreen(32);
        constexpr ConsoleColor darkyellow(33);
        constexpr ConsoleColor darkblue(34);
        constexpr ConsoleColor darkmagenta(35);
        constexpr ConsoleColor darkcyan(36);
        constexpr ConsoleColor darkgray(90);

        constexpr ConsoleColor gray(37);
        constexpr ConsoleColor red(91);
        constexpr ConsoleColor green(92);
        constexpr ConsoleColor yellow(93);
        constexpr ConsoleColor blue(94);
        constexpr ConsoleColor magenta(95);
        constexpr ConsoleColor cyan(96);
        constexpr ConsoleColor white(97);
    }
}

namespace cc = jaszyk::colors;

#endif // !__COLOR_HPP__