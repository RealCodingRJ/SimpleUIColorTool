#include "library.h"
#include <iostream>
#include "ColorSelector/ColorSelectedByUser.cpp"

// Pick a Color and Color will be Selected...

struct ColorType {
    std::string colorX;
    std::string colorY;
    std::string colorZ;
};


std::string enumByColor(const COLORS color) {
    if (const ColorType type; color == COLORS::BLACK || type.colorX == "BLACK") {
        const std::string black = "#000";
        return black;
    }

    if (const ColorType type; color == COLORS::RED || type.colorY == "BLACK") {
        const std::string red = "#ff0000";
        return red;
    }

    if (const ColorType type; color == COLORS::GREEN || type.colorZ == "GREEN") {
        const std::string green = "#00ff00";
        return green;
    }

    if (const ColorType type; color == COLORS::WHITE || type.colorX == "WHITE" ) {
        const std::string white = "#fff";
        return white;
    }

    return "Can't Find Colors";
}
// This code will help a user Display Color of Choice...

char createColorUIWrapper(const int color, const int hexColor) {
    if (genColorByHex(color) && genColorByHex(hexColor)) {
        const int indexHex = genColorByHex(color) + genColorByHex(hexColor);
        return indexHex;
    }

    if (std::to_string(std::islower(color)) == "#fff") {
        constexpr char colorHex = *"#fff";
        return colorHex;
    }

    if (std::to_string(std::islower(color)) == "#eee") {
        constexpr char colorHex = *"#eee";
        return colorHex;
    }

    return color;
}

