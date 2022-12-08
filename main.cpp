#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char z;
    cin >> z;
    if(con(z)){
        cout << z << endl;
    }else{
        cout << "errore" << endl;
    }
    return 0;
}
