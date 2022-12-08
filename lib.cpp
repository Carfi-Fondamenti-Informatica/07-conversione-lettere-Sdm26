#include "lib.h"
bool conv(char &z) {
    int c = 0, d = 0;
    for (int i = 65; i < 91; i++) {
        char s = i;
        if (z == s) {
            z = s + 32;
            c = 1;
            d = 1;
            return true;
            break;
        }
    }
    if (d == 0) {
        for (int i = 97; i < 123; i++) {
            char s = i;
            if (z == s) {
                z = s - 32;
                c = 1;
                return true;
                break;
            }
        }
    }
    if (c == 0) {
        return false;
    }

