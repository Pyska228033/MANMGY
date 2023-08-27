#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
#include <cmath>

using namespace std;

class Coor
{
public:
	int x;
	int y;

	Coor()
	{

	}

	Coor(int a, int b)
	{
		x = a;
		y = b;
	}

	Coor operator+(const Coor& a)
	{
		Coor b;
		b.x = this->x + a.x;
		b.y = this->y + a.y;
		return b;
	}
	Coor operator-(const Coor& a)
	{
		Coor b;
		b.x = this->x - a.x;
		b.y = this->y - a.y;
		return b;
	}
	Coor& operator=(const Coor& a)
	{
		if (this == &a)
		{
			return *this;
		}
		else
		{
			this->x = a.x;
			this->y = a.y;
			return *this;
		}
	}

	friend ostream& operator<< (ostream& out, const Coor& a)
	{
		out << "X: " << a.x << endl << "Y: " << a.y<<endl;
		return out;
	}

	friend istream& operator>> (istream& in, Coor& a)
	{
		cout << "¬ведите x:";
		in >> a.x;
		cout << "¬ведите y:";
		in >> a.y;
		return in;
	}
};


#endif // !COORDINATE_H

