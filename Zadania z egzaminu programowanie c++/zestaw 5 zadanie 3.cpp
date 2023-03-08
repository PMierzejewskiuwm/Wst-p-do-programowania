

#include <iostream>
using namespace std;

int zad3(int n) {

    int suma = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
    }

    return suma;
}
    


int main()
{
    cout << "Przypadek testowy dla n=5:" << zad3(5);
    cout << endl;
    cout << "Przypadek testowy dla n=12:" << zad3(12);


}


