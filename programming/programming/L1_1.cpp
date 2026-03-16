#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	char c;
	int rez;
	int ats;

	cout << "Apskaiciavimo uzdavinys. Sioje uzduotyje reikia apskaiciuoti uzdaviny kurio formule yra 2*a operator b, kur operatorius gali buti + - * / %\n";
	cout << "Prashome yvesti pirmaji skaichiu: ";
	cin >> a;
	cout << "Prashome yvesti antraji skaichiu: ";
	cin >> b;
	cout << "Prashome yvesti operatoriu (+ - * % /): ";
	cin >> c;
	cout << "Prashome yvesti rezultata: ";
	cin >> rez;
	if (c != '+' and c != '-' and c != '*' and c != '/' and c != '%') {
		cout << "Yvestas neteisingas operatorius prasome bandyti dar karta!\n";
		return 0;
	}

	if (c == '+') {
		cout << "Buvo yvestas +\n";
		ats = 2 * a + b;
	}
	else if (c == '-') {
		cout << "buvo ivestas -\n";
		ats = 2 * a - b;
	}
	else if (c == '*') {
		cout << "buvo ivestas *\n";
		ats = 2 * a * b;
	}
	else if (c == '/') {
		cout << "buvo ivestas  /\n";
		if (b == 0) {
			cout << "Dalyba is nulio negalima.\n";
			return 0;
		}
		else ats = 2 * a / b;
	}
	else if (c == '%') {
		cout << "buvo ivestas % - dalyba su liekana \n";
		if (b == 0) {
			cout << "Dalyba is nulio negalima.\n";
			return 0;
		}
		else ats = 2 * a % b;
	}

	if (ats == rez) {
		cout << "Atsakyma kuri pateikete yra teisingas\n";
	}
	else cout << "Atsakymas kuri pateikete yra neteisingas\n";
	return 0;
}