#include "logic.h"

string search_sequence_of_odd_numbers(int n, int m) {
	string result = "";

	if (m < n) {
		return "ERORR 404";
	}

	for (int i = 0; i < m; i++) {
		if (i >= n && i % 2 == 1) {
			result += to_string(i) + " ";
		}


	}
	return result;
}