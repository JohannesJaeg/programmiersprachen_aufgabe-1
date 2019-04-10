#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int gcd(int a, int b) {
	return 1;
}
TEST_CASE("describe_gcd", "[gcd]") {
	REQUIRE(gcd(2, 4) == 2);
	REQUIRE(gcd(9, 6) == 3);
	REQUIRE(gcd(3, 7) == 1);
}

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
};

int checksum() {
	int Zahl = 122;
	int Quersumme = 0;
	while (Zahl > 0) {
		Quersumme += Zahl % 10;
		Zahl /= 10;
	}
	return Quersumme;
};

int main(int argc, char* argv[])
{
  //return Catch::Session().run(argc, argv);
	//std::cout << is_prime();
	std::cout << "Quersumme ist " << checksum();
}
