#include "library.h"

#include <format>
#include <fstream>
#include <iostream>
#include <vector>

#include "ColorSelector/ColorSelectedByUser.cpp"

// Pick a Color and Color will be Selected...

namespace PosColorTypes {
    struct ColorType {
        std::string colorX;
        std::string colorY;
        std::string colorZ;
    };
}


inline auto colorsRGB(const PosColorTypes::ColorType& type, const std::string& label) -> void {
    if (std::ofstream fileData("SelectedUserColor.json"); fileData.is_open()) {
        if (label.empty()) {
            std::cout << "EMPTY" << std::endl;
        }
        else {
            const std::string colorLabel = type.colorX;
            fileData.write(colorLabel.c_str(), 1);
        }
    }
}

auto getArgs(int index, char *argv[]) -> void {
    for (auto indexChar = 0; indexChar < sizeof(char); indexChar++) {
        std::cout << indexChar << argv[indexChar] << std::endl;
    }
}

std::string enumByColor(const COLORS color) {
    if (const PosColorTypes::ColorType type; color == COLORS::BLACK || type.colorX == "BLACK") {
        const std::string black = "#000";
        return black;
    }

    if (const PosColorTypes::ColorType type; color == COLORS::RED || type.colorY == "BLACK") {
        const std::string red = "#ff0000";
        return red;
    }

    if (const PosColorTypes::ColorType type; color == COLORS::GREEN || type.colorZ == "GREEN") {
        const std::string green = "#00ff00";
        return green;
    }

    if (const PosColorTypes::ColorType type; color == COLORS::WHITE || type.colorX == "WHITE" ) {
        const std::string white = "#fff";
        return white;
    }

    return "Can't Find Colors";
}
// This code will help a user Display Color of Choice...

auto createColorUIWrapper(int color, const int hexColor) -> char {
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
