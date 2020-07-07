/* C program that demonstrates the y = mx + b equationn */

#include <stdio.h>
#include <stdlib.h>

struct point {
	float x, y;
};

int line(pt1, pt2, p_M, p_B)
float *p_M, *p_B;

struct point pt1, pt2;
{
	if (pt1.x == pt2.x)
		return -1;
	else {
		*p_M = (pt2.y - pt1.y) / (pt2.x - pt1.x);
		*p_B = pt1.y - *p_M * pt1.x;
		return 0;
	}
}

int main()
{
	struct point pt1, pt2;
	float M, B;

	printf("Input x, y for point 1: ");
	scanf("%f, %f", &pt1.x, &pt1.y);
	printf("Input x, y for point 2: ");
	scanf("%f, %f", &pt2.x, &pt2.y);
	printf("pt1(%g,%g) pt2(%g,%g)\n", pt1.x, pt1.y, pt2.x, pt2.y);
	if (line(pt1, pt2, &M, &B) == -1) {
		printf("Error in computing equation. Exiting program\n");
		exit(-1);
	}
	else {
		printf("Y = %gX + %g\n", M, B);
		exit(0);
	}
}


