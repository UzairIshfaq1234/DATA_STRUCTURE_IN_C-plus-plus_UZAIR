#include <iostream>

using namespace std;

main() {

    int a = 5;
    int b = 1;

    int *aKaPointer = &a;
    int *bKaPointer = &b; 
    
    cout << aKaPointer;
    cout << bKaPointer;

}
