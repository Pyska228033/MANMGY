#include "Trap.h"

int main()
{
	setlocale(0, "");
	Trap a;
	cin >> a;
	pair<int, int> p = a.lenght();
	cout << "Длина нижнего основания: " << p.first << endl << "Длина вержнего основания: " << p.second << endl;

	cout << "Высота трапеции: " << a.Height() << endl;
	cout << "Длина средней линии: " << a.Midline_lendht() << endl;
	cout << "Площадь: " << a.Square() << endl;
	
	cout << a;
}