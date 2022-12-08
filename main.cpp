#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char a;
    cin >> a;
    if(convert(a)){
        cout << a << endl;
    }else{
        cout << "errore" << endl;
    }
    return 0;
}

