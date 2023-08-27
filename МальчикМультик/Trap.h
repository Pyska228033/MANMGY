#ifndef TRAP_H
#define TRAP_H

#include "Coordinate.h"

class Trap 
{
private:
	Coor A, B, C, D;

public:

	Trap();
	Trap(int x1, int y1, int x2, int x3, int y2, int x4);
	Trap(const Trap& T);
	pair<int,int> lenght();
	int Height();
	int Midline_lendht();
	int Square();
	friend ostream& operator<< (ostream& out, const Trap& a);
	friend istream& operator>> (istream& in, Trap& a);
};


#endif // !TRAP_H
