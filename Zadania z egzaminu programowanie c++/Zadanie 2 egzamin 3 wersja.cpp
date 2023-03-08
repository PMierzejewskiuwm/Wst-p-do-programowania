

#include <iostream>
using namespace std;



int main()
{
    int suma = 0;
    for (int i = -100; i <=0; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
        
    }
    cout << "Suma liczb nieparzystych od -100 do 0 to: " << suma;



}


