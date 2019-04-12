#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int is_prime() {
	int Zahl = 11;
	int zaehler = 0;
	int i;
	if (Zahl == 2) {
		std::cout << "prime: ";
		exit;
	}
	else if (Zahl < 2 || Zahl % 2 == 0) {
		std::cout << "not prime: ";
		exit;
	}
	else {
		for (i = 2; i < Zahl;i++) {
			if (Zahl % i == 0) {
				zaehler++;
			}
		}
		if (zaehler > 1) {
			std::cout << "not prime: ";
		}
		else {
			std::cout << "prime: ";
		}
	}
	return Zahl;
}

int checksum() {
	int Zahl = 119933;
	int Quersumme = 0;
	while (Zahl > 0) {
		Quersumme += Zahl % 10;
		Zahl /= 10;
	}
	return Quersumme;
}

int sum_multiples() {
	int Summe = 0;
	int i = 1;
	while (i <= 1000) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			Summe = Summe + i;
		}
		i += 1;
	}
	return Summe;
}

int fract() {
	float Zahl = 2.1352, intZahl, fractZahl;
	fractZahl = modf(Zahl, &intZahl);
	std::cout << "Der Nachkommaanteil der Gleitkommazahl ist " <<fractZahl;
	return Zahl;
	
}

int zylinder() {
	float r = 3.231;
	float h = 5.32;
	float pi = 3.14159265358979323846;
	float V, A;
	V = pi * (2 * r) * h;
	A = 2 * pi * r * (r + h);
	std::cout << "Das Volumen betraegt " << V << " kubikcm und" << " Die Oberflaeche betraegt " << A << " quadratcm";
	return 0;
}

int factorial(int Zahl) {
	//int Zahl = 5;
	long factor = 1;
	for (int i = 1; i <= Zahl; i++) {
		factor *= i;
	}
	return factor;
}

int gcd(int x, int y) {
	//int x = 0;
	//int y = 0;

	assert(x > y || x != 0 && y != 0); // x darf nicht kleiner als y sein
	//assert(x == 0 && y == 0);
	if (x == 0) {
		return y;
		y %= x;
		if (y == 0) {
			return x;
			x %= y;
		}
	}
}

TEST_CASE("describe_gcd", "[gcd]") {
	//REQUIRE(gcd(2, 4) == 2);
	//REQUIRE(gcd(9, 6) == 3);
	//REQUIRE(gcd(3, 7) == 1);
	//REQUIRE(factorial(5) == 100);

}


int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
	  //std::cout << is_prime();
	  //std::cout << "Quersumme ist " << checksum();
	//std::cout << "Die Summe der Zahlen von 1 bis 1000, die durch 3 oder durch 5 teilbar sind, betraegt " << sum_multiples();
	//std::cout << fract();
	//std::cout << zylinder();
	//std::cout << "Die Fakultaet der Zahl betraegt " << factorial();
	//std::cout << "Der groe�te gemeinsame Teiler betraegt " << gcd();
}
