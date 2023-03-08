
#include <iostream>
#include <vector>
using namespace std;

double zad5(vector<double> wektor, double srednia) {
    int counter = 0;
    for (int i = 0; i < wektor.size(); i++) {
        if (wektor.at(i) > srednia) {
            counter++;
        }
    }
    return counter;
}

int main()
{
    vector<double> wektor;
    double a, b, c, d, e, f, g, h, i, j;

    cout << "Wpisz 10 liczb wymiernych: ";

    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;

    wektor = { a,b,c,d,e,f,g,h,i,j };

    double srednia = (a + b + c + d + e + f + g + h + i + j) / 10;

    for (int i = 0; i < wektor.size(); i++) {
        cout << wektor.at(i) << " ";
    }
    cout << endl;

    cout << "Srednia liczb: " << srednia << endl;
   
    cout << "Ilosc liczb wiekszych od sredniej: " << zad5(wektor, srednia);
    
}


