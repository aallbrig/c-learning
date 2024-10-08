#include <stdio.h>

void main() {
	double count;
	for (count = 0; getchar() != EOF; ++count)
		; // null statement
	printf("%.0f\n", count);
}
