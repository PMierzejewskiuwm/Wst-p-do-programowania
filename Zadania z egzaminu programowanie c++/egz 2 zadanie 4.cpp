// ConsoleApplication16.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int zad4(int tab[], int rozmiar) {

    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] % 2 != 0) {
            suma++;
        }
    }
    return suma;
}


int main()
{
    
    int tab[10], rozmiar;
    rozmiar = sizeof(tab) / sizeof(int);
    
    int tab1[10] = { 1,2,5,7,9,12,13,15,18,19 };
    
    cout << "Suma liczb nieparzystych w tablicy: " << zad4(tab1, rozmiar);

}


