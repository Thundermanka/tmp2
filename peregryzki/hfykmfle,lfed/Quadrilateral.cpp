#define _CRT_SECURE_NO_WARNINGS
#include "Quadrilateral.h"
#include <stdio.h>
#include <math.h>
Quadrilateral::Quadrilateral() {
		printf("please enter coordinates of the point A in that order: x y\n");
		scanf("%f %f", &A.x, &A.y);
		printf("please enter coordinates of the point B in that order: x y\n");
		scanf("%f %f", &B.x, &B.y);
		printf("please enter coordinates of the point C in that order: x y\n");
		scanf("%f %f", &C.x, &C.y);
		printf("please enter coordinates of the point D in that order: x y\n");
		scanf("%f %f", &D.x, &D.y);
}
void Quadrilateral :: inscribedCircle_test() {
	ab = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
	bc = sqrt(pow(C.x - B.x, 2) + pow(C.y - B.y, 2));
	cd = sqrt(pow(D.x - C.x, 2) + pow(D.y - C.y, 2));
	ad = sqrt(pow(A.x - D.x, 2) + pow(A.y - D.y, 2));
	if (ab and bc and cd and ad == 0) printf("vashi znachenia otstoi, vvedite drygie!\n");
	if (ab + cd == bc + ad) printf("mozno\n");
	else printf("nelzya\n");
}
void Quadrilateral :: operator==(Quadrilateral a) {
	float per1 = ab + bc + cd + ad;
	float per2 = a.ab + a.bc + a.cd + a.ad;
	if (per1 == per2) printf("oni ravni!\n");
	else printf("oni ne ravni :(\n");
}