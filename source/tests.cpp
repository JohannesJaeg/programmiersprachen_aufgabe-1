#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int is_prime(int Zahl) {
	int zaehler = 0;
	int i;
	if (Zahl == 2) {
		return Zahl;
		return true;
		exit;
	}
	else if (Zahl < 2 || Zahl % 2 == 0) {
		return false;
		
	}
	else {
		for (i = 2; i < Zahl;i++) {
			if (Zahl % i == 0) {
				zaehler++;
			}
		}
		if (zaehler > 1) {
			return false;
		}
		else {
			return true;
		}
	}

}

TEST_CASE("describe_is_prime", "[is_prime]") {
	REQUIRE(is_prime(29) == true);
	REQUIRE(is_prime(5) == true);
	REQUIRE(is_prime(14) == false);
}

int checksum(int Zahl) {
	int Quersumme = 0;
	while (Zahl > 0) {
		Quersumme += Zahl % 10;
		Zahl /= 10;
	}
	return Quersumme;
}

TEST_CASE("describe_checksum", "[checksum]") {
	REQUIRE(checksum(119933) == 26);
}

int sum_multiples(int Zahl) {
	int Summe = 0;
	int i = 1;
	while (i <= Zahl) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			Summe = Summe + i;
		}
		i += 1;
	}
	return Summe;
}

TEST_CASE("describe_sum_multiples", "[sum_multiples]") {
	REQUIRE(sum_multiples(1000) == 234168);
}

int fract(float Zahl) {
	float intZahl, fractZahl;
	fractZahl = modf(Zahl, &intZahl);
	return fractZahl;
	
}

TEST_CASE("describe_fract", "[fract]") {
	//REQUIRE(fract(3.2) == 0.2);
}

int zylinder_v(float r, float h) {
	float pi = 3.14;
	float V;
	V = pi * (2 * r) * h;
	return V;
}

TEST_CASE("describe_zylinder_v", "[zylinder_v]") {
	REQUIRE(zylinder_v(3.2, 5.2) == 104);
}

int zylinder_a(float r, float h) {
	float pi = 3.14;
	float A;
	A = 2 * pi * r * (r + h);
	return A;
}

TEST_CASE("describe_zylinder_a", "[zylinder_a]") {
	REQUIRE(zylinder_a(3.2, 5.3) == 170);	
}
int factorial(int Zahl) {
	long factor = 1;
	for (int i = 1; i <= Zahl; i++) {
		factor *= i;
	}
	return factor;
}

TEST_CASE("describe_factorial", "[factorial]") {
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(2) == 2);
}

int gcd(int x, int y) {
	if (y == 0)
		return x;
	return gcd(y, x % y);
}

TEST_CASE("describe_gcd", "[gcd]") {
	REQUIRE(gcd(2, 4) == 2);
	REQUIRE(gcd(9, 6) == 3);
	REQUIRE(gcd(3, 7) == 1);
}


int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
