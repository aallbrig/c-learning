#include <stdio.h>

void main() {
	int c;
	int last_was_blank = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ')
			if (last_was_blank == 0) {
				putchar(c);
				last_was_blank = 1;
			}
		else {
			putchar(c);
			last_was_blank = 0;
		}
}
