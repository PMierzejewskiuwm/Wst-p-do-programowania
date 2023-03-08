

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> wektor;
    int n;
    cout << "Wpisz dodatnia liczbe calkowita: ";
    cin >> n;

    double liczba;
    for (int i = 0; i < n; i++) {
        cout << "Wpisz liczbe: ";
        cin >> liczba;
        if (liczba == int(liczba)) {
            wektor.push_back(liczba);
        }
    }
    for (int i = 0; i < wektor.size(); i++) {
        cout << wektor.at(i) << " ";
    }
}


