#include <stdio.h>

void main() {
	int c;
	while ((c = getchar()) != EOF) // != takes precedence over = (assignment); the paranthesis around `x = expression` is therefore necessary
		putchar(c);
}
