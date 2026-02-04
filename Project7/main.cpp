#include "logic.h"

int main() {

	int n;

	cout << "Input number of fibonacci: " << endl;
	cin >> n;

	string exam = to_string(get_fibonacci_number(n));

	cout << exam;

	return 0;
}