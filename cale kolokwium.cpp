
#include <iostream>
#include<vector>
using namespace std;

int zad1(int n) {

    if (n == 0) {
        return 0;
    }
    return zad1(n - 1) + 4;
}



int main()

{
    srand(time(NULL));

    cout << "Zadanie 1" << endl;
    
    int tab[5] = {};
    int rozmiar = sizeof(tab) / sizeof(int);
    for (int i = 0; i < rozmiar; i++) {
        tab[i] += zad1(i);
        cout << tab[i] << " ";
    }
    cout << endl;
    cout << "Zadanie 2";
    cout << endl;

    vector<int> wektor;
    int r;
    cout << "Podaj rozmiar wektora: ";
    cin >> r;
    
    for (int z = 0; z < r; z++) {
        wektor.push_back((rand() % 10) + 1);
        cout << wektor.at(z) << " ";
    }
    cout << endl;
    for (int ii = 0; ii < wektor.size(); ii++) {
        if (wektor.at(ii) > 4 and wektor.at(ii) != 6) {
            
        }
        
        else if (wektor.at(ii) < 4) {
            wektor.at(ii) = -1;
            
        }
        
        else if (wektor.at(ii) == 6) {
            wektor.at(ii) = 12;
            
        }
    }
    for (int iii = 0; iii < wektor.size(); iii++) {
        cout << wektor.at(iii) << " ";
    }
}

