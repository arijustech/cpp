#include <iostream>
using namespace std;

int main() {
	double x;
	double y;

	cout << "Yveskite x reikshme: ";
	cin >> x;
	cout << "Yveskite y reikshme: ";
	cin >> y;

	if (x == 0 and y == 0) {
		cout << x << " ir " << y << " yra pradzios taske";
	}
	else if (x == 0) {
		cout << "y asis";
	}
	else if (y == 0) {
		cout << "x asis";
	}

	else if (x > 0 and y > 0) {
		cout << x << " ir " << y << "yra pirmajame ketvirtyje";
	}
	else if (x < 0 and y > 0) {
		cout << x << " ir " << y << "yra antrame ketvirtyje";
	}
	else if (x < 0 and y < 0) {
		cout << x << " ir " << y << "yra treciame ketvirtyje";
	}
	else if (x > 0 and y < 0) {
		cout << x << " ir " << y << "yra ketvirtame ketvirtyje";
	}

	return 0;
}