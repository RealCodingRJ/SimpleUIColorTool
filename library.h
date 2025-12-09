#pragma once

#ifndef COLORDISPLAY_LIBRARY_H
#define COLORDISPLAY_LIBRARY_H

auto createColorUIWrapper(char &color, int hexColor) -> char;
auto genColorByHex(int hex) -> int;
auto getArgs(int index, char *argv[]) -> void;

#endif // COLORDISPLAY_LIBRARY_H