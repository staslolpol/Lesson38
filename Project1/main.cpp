#include "logic.h"

int main() {

	int n = 0;
	int d = 0;

	

	cout << "Input number of likes: " << endl;
	cin >> n;

	cout << "Input number of day: " << endl;
	cin >> d;

	string exam = calculet_like(n, d);

	cout << exam;

	return 0;
}