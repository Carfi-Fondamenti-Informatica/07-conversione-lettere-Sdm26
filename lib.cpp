#include "lib.h"

bool convert(char &z){
    if(z>=65&&z<= 90){
        z=z+32;
        return true;
    }else if(z>=97&&z<= 122){
        z=z-32;
        return true;
    }
    return false;
}
