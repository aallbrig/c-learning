#include <stdio.h>

void main() {
	int c, i, nwhite, nother;
	int ndigit[10];
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	// wild, '0' == (int)48; '1' == (int)49.
	printf("%d\n", '0');
	while ((c = getchar()) != EOF) {
		printf("%d%c\n", c, (char)c);
		if (c >= '0' && c <= '9') {
			printf("%d\n", c-'0');
			++ndigit[c-'0'];
		} else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else {
			++nother;
		}
	}
	printf("digit counts =");
	for (i = 0; i < 10; ++i)
		printf(" %d: %d", i, ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
