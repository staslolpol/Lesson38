#include "logic.h"

int main() {

	int n, m;


	cout << "Input first number(n): " << endl;
	cin >> n;

	cout << "Input first number(m): " << endl;
	cin >> m;

	string exam = search_sequence_of_odd_numbers(n,m);

	cout << exam;

	return 0;
}