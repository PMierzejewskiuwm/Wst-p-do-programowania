

#include <iostream>
using namespace std;

int zad3(int n) {
    int x;
    for (int i = 2; i <= n / 2; i++) {

        if (n % i == 0) {
            x = 0;
        }
        else {
            x = 1;
        }
    }
    return x;
}


int main()
{
    
    cout << "Przypadek testowy dla 5: " << zad3(5) << endl;
    cout << "Przypadek testowy dla 10: "  << zad3(10);



}


