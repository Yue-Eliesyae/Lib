#include "../Lib/StdioMath.h"
#include <stdio.h>

int main()
{
	int a = Add(1, 2);
	int b = Sub(1, 2);
	int c = Mul(1, 2);
	int d = Div(1, 2);

	printf("%d %d %d %d", a, b, c, d);
	while (true);
}