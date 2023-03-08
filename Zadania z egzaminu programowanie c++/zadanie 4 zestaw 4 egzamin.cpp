

#include <iostream>
using namespace std;

int zad4(int m, int n, int tab[]) {
    int counter = 0;
    for (int i = 0; i < m; i++) {
        if (tab[i] > n) {
            counter++;
        }
    }
    return counter;
}

int main()
{
    
    int tab[] = { 1,5,9,13,17,21 };
    int m = 6;
    cout << "Przypadek testowy do funkcji: " << zad4(6, 9, tab);
}


