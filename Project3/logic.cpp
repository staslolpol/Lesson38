#include "logic.h"

bool is_power_of_two(int number) {
	int result = 0;
	number = number < 0 ? -number : number;

	while (number = 1) {
		number /= 2;
		if (number == 1) {
			result = 1;
		}
	}
		return result;
}