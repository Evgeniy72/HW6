#include "Calculator.h"
int sum(int x, int y) { return x + y; }
int dif(int x, int y) { return x - y; }
int multiply(int x, int y) { return x * y; }
int division(int x, int y) { return x / y; }
int power(int x, int y) {
	int p;
	p = x;
	for (int i = 0; i < y; i++) { p = p * x; }
	return p;
}
