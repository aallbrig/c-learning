#include <stdio.h>

void main() {
	int c;
	while ((c = getchar()) != EOF)
		putchar(c);
	// c = getchar();
	// while (c != EOF) {
	// 	putchar(c);
	// 	c = getchar();
	// }
}
