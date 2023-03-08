

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Wpisz trzy liczby calkowite: ";
    cin >> a >> b >> c;
    if (a == b and a != c) {
        cout << "Dokladnie dwie sposrod liczb sa takie same. ";
    }
    else if (a == c and a != b) {
        cout << "Dokladnie dwie sposrod liczb sa takie same. ";
    }
    else if (b == c and b != a) {
        cout << "Dokladnie dwie sposrod liczb sa takie same. ";
    }
    else {
        cout << "Nie ma dwoch takich samych liczb. ";
    }


}


