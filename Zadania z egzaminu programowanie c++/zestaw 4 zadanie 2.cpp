

#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Podaj liczbe dodatnia: ";
    cin >> n;
    if (n > 1) {
        for (int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                cout << i << endl;
            }
        }
    }
    else {
        cout << "Wpisano bledna liczbe. ";
    }

}


