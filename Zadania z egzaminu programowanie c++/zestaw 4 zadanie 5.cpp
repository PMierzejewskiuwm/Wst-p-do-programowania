

#include <iostream>
#include<vector>
using namespace std;

int main()
{
   
	float a, b, c, d, e, f, g, h, i, j;
	cout << "Wprowadz 10 liczb: " << endl;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
	vector<float> wektor = { a,b,c,d,e,f,g,h,i,j };
	for (int i = 9; i >= 0; i=i-1) {
		cout << wektor.at(i) << " ";
	}
}


