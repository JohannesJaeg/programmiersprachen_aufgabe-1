#include <iostream>

int Division(){
	int Zahl = 20;
	bool gefunden = false;
	while ( gefunden == false) {
		for (int i = 1; i <= 20; i++) {
			if (Zahl % i != 0) {
				break;
			}
			if (i == 20) {
				return Zahl;
			}
		}
		Zahl += 20;
	}
};

int main()
{
	std::cout << Division();
}
