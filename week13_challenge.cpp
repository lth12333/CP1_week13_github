#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001

double k1, k2, k3, c;
double func(double x) {
	return k1 * x * x * x + k2 * x * x + k3 * x + c;
}

double bisection(double a, double b) {
	if (func(a) * func(b) >= 0) {
		printf("������ a�� b�� �ƴ�\n");
		return -1;
	}

	double c = a;
	while ((b - a) >= EPSILON) {
		c = (b + a) / 2;
		if (func(c) * func(a) < 0) {
			b = c;
		}
		else {
			a = c;
		}
	}
	return c;
}

int main(void) {
	printf("3���� ��� 2���� ��� 1���� ��� ���:");
	scanf("%lf %lf %lf %lf", &k1, &k2, &k3, &c);

	double (*pf)(double, double); 
	pf = bisection;

	double a = -200, b = 200;
	printf("���� �� = %lf\n", pf(a, b));
	return 0;
}