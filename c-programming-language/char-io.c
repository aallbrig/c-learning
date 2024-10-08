#include <stdio.h>
#include <stdbool.h>

void main() {
	int c;
	while (true) { // != takes precedence over = (assignment); the paranthesis around `x = expression` is therefore necessary
		c = getchar();
		if ((c != EOF) == 1)
			putchar(c);
		else {
			printf("EOF signal received! %d\n", EOF);
			break;
		}
	}
}
