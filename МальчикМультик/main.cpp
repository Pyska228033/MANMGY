#include "Trap.h"

int main()
{
	setlocale(0, "");
	Trap a;
	cin >> a;
	pair<int, int> p = a.lenght();
	cout << "����� ������� ���������: " << p.first << endl << "����� �������� ���������: " << p.second << endl;

	cout << "������ ��������: " << a.Height() << endl;
	cout << "����� ������� �����: " << a.Midline_lendht() << endl;
	cout << "�������: " << a.Square() << endl;
	
	cout << a;
}