#include <iostream>
double mile_to_km(double);

int main()
{
	std::cout << "Enter a mile: ";
	double mile = 0.0;
	std::cin >> mile;
	std::cout << "Your entered miles are " << mile_to_km(mile) << " km";
}

double mile_to_km(double km)
{
	return km * 1.6;
}
