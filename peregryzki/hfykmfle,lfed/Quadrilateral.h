#pragma once
#include <math.h>
class Quadrilateral {
private:
	struct point {
		double x, y;
	} A;
	point B, C, D;
	double ab, bc, cd, ad;
public:
	Quadrilateral();
	void inscribedCircle_test();
	void operator==(Quadrilateral a);

};

