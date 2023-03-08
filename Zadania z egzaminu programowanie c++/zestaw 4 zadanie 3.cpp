

#include <iostream>
using namespace std;

int potega(int n) {

    int temp = 1;

    for (int i = 0; i < n; i++) {
        temp *= 10;

    }

    return temp;

}
int zad3(int n) {

    if (n == 0) {
        return 2;
    }
    return 2 * potega(n) + zad3(n - 1);
}


int main()
{
    int n = 4;
    cout << zad3(n);



}



