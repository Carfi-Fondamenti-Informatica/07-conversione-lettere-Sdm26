#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char z;
    cin>>z;
   if(conv(z)){
       cout<<z;
   }else{
       cout<<"errore";
   }
    return 0;
}

