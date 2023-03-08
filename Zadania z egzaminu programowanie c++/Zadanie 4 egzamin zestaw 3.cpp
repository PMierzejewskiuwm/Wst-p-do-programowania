

#include <iostream>
using namespace std;
int zad4(int tab[], int rozmiar) {
    int max = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] % 2 != 0 and tab[i] > max) {
            max = i;
        }
        else if (tab[i] == 0) {
            max = -1;
        }
    }
    return max;
}


int main()
{
    cout << "Przypadek testowy: " << endl;
    int tab[5] = { 0, 2, 5, 6, 19 };
    int rozmiar = sizeof(tab) / sizeof(int);
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
    cout << "Indeks najwiekszego elementu nieparzystego w tablicy: "<< zad4(tab, rozmiar);


}


