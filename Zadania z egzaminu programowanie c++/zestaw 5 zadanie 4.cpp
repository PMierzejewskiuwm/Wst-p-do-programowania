

#include <iostream>
using namespace std;
int zad4(int m, int n, int tab[]) {
    int counter = 0;
    for (int i = 0; i < m; i++) {
        if (tab[i] == n) {
            counter++;
        }
    }
    return counter;
}



int main()
{
    int tab[10] = { 11,12,13,14,15,16,17,18,19,20 };

    cout << "ilosc elementow tablicy rownych n: " << zad4(10, 18, tab);

}


