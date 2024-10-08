#include <stdio.h>

void main() {
	int c, newline, tab, blanks;
	newline = 0, tab = 0, blanks = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++newline;
		if (c == '\t')
			++tab;
		if (c == ' ')
			++blanks;
	}
	printf("%d new lines\n", newline);
	printf("%d tabs\n", tab);
	printf("%d blanks\n", blanks);
}
