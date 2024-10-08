#include <stdio.h>
#define IN 1
#define OUT 0
#define WORD_LIMIT 100
void main() {
	int c, nl, nw, nc, state, index;
	char word[WORD_LIMIT];
	state = OUT;
	nl = nw = nc = index = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			word[index] = '\0';
			printf("%s\n", word);
			// clear array
			for (int i = 0; i < index; i++) {
				word[i] = 0;
			}
			++nw;
		} else {
			word[index] = (char)c;
			++index;
		}
	}
	printf("new line(s): %d\nnew word(s):%d\nnew character(s):%d\n", nl, nw, nc);
}
