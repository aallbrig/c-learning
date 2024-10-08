#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

void while_print_table() {
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%10.0f\t%10.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
void for_print_table() {
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%10d\t%10.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
int main() {
	printf("%10s\t%10s\n", "fahrenheit", "celsius");
	// while_print_table();
	for_print_table();
}
