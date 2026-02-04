#include "logic.h"

int main() {

	int n = 0;
	int d = 0;

	

	cout << "Input number of likes: " << endl;
	cin >> n;

	cout << "Input number of day: " << endl;
	cin >> d;

	if (n < 0 || d < 0) {
		cout << "EROR 404";
		return -1;
	}

	string exam = calculet_like(n, d);

	cout << exam;

	return 0;
}