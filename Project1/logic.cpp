#include "logic.h"

string calculet_like(int n, int d) {
	string msg = "";

	int likes = n;

	for (int i = 0; i >= d; i++) {
		
		likes += n;
		msg += "Day " + to_string(d) + ": " + to_string(likes) + "\n";
	}



	return msg;
}
