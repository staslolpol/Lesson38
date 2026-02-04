#include "logic.h"

int main() {

	int n;


	cout << "Input number: " << endl;
	cin >> n;

	string exam = is_digits_count_even(n) ? "True." : "False.";

	cout << exam;

	return 0;
}