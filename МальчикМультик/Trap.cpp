#include "Trap.h"
#include <stdlib.h>

Trap::Trap()
{

}

Trap::Trap(int x1, int y1, int x2, int x3, int y2, int x4)
{
	A = Coor(x1, y1);
	B = Coor(x2, y2);
	C = Coor(x3, y2);
	D = Coor(x4, y1);
}

Trap::Trap(const Trap& T)
{
	A = T.A;
	B = T.B;
	C = T.C;
	D = T.A;
}

pair<int,int> Trap::lenght()
{

	return make_pair(abs(A.x - D.x), abs(B.x - C.x));
}

int Trap::Height()
{
	int h = A.y - B.y;
	return abs(h);
}

int Trap::Midline_lendht()
{
	pair<int, int> p = this->lenght();
	int L = (p.first + p.second) / 2;
	return L;
}

int Trap::Square()
{
	int S = this->Height() * this->Midline_lendht();
	return S;
}

ostream& operator<< (ostream& out, const Trap& a)
{
	cout << "Координаты т.А:" << endl << a.A;
	cout << "Координаты т.B:" << endl << a.B;
	cout << "Координаты т.C:" << endl << a.C;
	cout << "Координаты т.D:" << endl << a.D;
	return out;
}

istream& operator>> (istream& in, Trap& a)
{
	cout << "Введите т.A: "<<endl;
	cin >> a.A;
	cout << "Введите т.B: "<< endl;
	cin >> a.B;
	if (a.A.y == a.B.y)
	{
		cout << "Ошибка, координаты Y не могут быть равными.";
		exit(0);
	}
	cout << "Введите координату X т.C: ";
	int x1;
	cin >> x1;
	if (x1 > a.B.x && x1 > a.A.x)
		a.C.x = x1;
	else
	{
		cout << "Ошибка, координата должна быть больше.";
		exit(0);
	}
	a.C.y = a.B.y;
	
	cout << "Введите координату X т.D: ";
	int x2;
	cin >> x2;
	if (x2 > a.B.x && x2 > a.A.x)
		a.D.x = x2;
	else
	{
		cout << "Ошибка, координата должна быть больше.";
		exit(0);
	}
	a.D.y = a.A.y;
	return in;
}
