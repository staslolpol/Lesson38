#include "logic.h"

string makes_order_everywhere(int n, int m) {
	string result = "";
	n = n < 0 ? -n : n;
	m = m < 0 ? -m : m;

	if (n < m) {
		for (int i = n; i <= m; i++) {
			result += to_string(i) + " ";
		}
	}
	else {
		for (int i = n; i >= m; i--) {
			result += to_string(i) + " ";
		}

	}
	return result;
}