#include "../Lib/StdioMath.h"
#include <stdio.h>

void main()
{
	int a = Sub(1, 2);
	int b = Add(1, 2);
	int c = Div(1, 2);

	printf("%d %d %d %d", a, b, c);
	while (true);
}