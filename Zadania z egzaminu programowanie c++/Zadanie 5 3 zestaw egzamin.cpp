

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    cout << "Wprowadz 10 liczb calkowitych: ";
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    vector<int> wektor = {a,b,c,d,e,f,g,h,i,j};
    cout << endl;
    for (int i = 0; i < wektor.size(); i++) {
        
        wektor.at(i) = wektor.at(i) * wektor.at(i);
        cout << wektor.at(i) << " ";
    }

}


