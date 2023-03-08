// ConsoleApplication14.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;






int main()
{	
	int a, b, c;
	cout << "Wpisz liczbe a: " << endl;
	cin >> a;
	cout << "Wpisz liczbe b: " << endl;
	cin >> b;
	cout << "Wpisz liczbe c: " << endl;
	cin >> c;
	if (c * c == a * a + b * b) {

		cout << "Suma kwadratow liczb a i b spelnia twierdzenie Pitagorasa.";
		return 0;
	}
	else if (b * b == a * a + c * c) {

		cout << "Suma kwadratow liczb a i c spelnia twierdzenie Pitagorasa.";
		return 0;
	}
	else if (a * a == b * b + c * c ) {

		cout << "Suma kwadratow liczb b i c spelnia twierdzenie Pitagorasa.";
		return 0;
	}
	else {
		cout << "Liczby w zadnej kombinacji nie spelniaja twierdzenia pitagorasa.";
		return 0;
	}

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
