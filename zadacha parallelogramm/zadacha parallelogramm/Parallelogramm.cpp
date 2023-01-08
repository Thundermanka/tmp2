#define _CRT_SECURE_NO_WARNINGS
#include "Parallelogramm.h"
Parallelogramm::Parallelogramm() {
	printf("vvedte dliny storoni and ygol menshiy 90\n");
	scanf("%f %d", &a, &angle);
	printf("\n:D\n");
}
void Parallelogramm::getHeight() {
	if (0 < angle <= 90) {
		double ugol = angle * 3.14 / 180;
		Height = a * sin(ugol);
	}
	else printf("ваш угол не подходит ставьте другой\n");
	printf("visota: %f\n", Height);
}
void Parallelogramm::getArea() {
	float area = 0;
	area = a * Height;
	printf("ploshad: %f\n", area);
}