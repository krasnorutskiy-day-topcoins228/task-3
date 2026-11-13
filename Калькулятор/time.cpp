#include <iostream>

int main()
{
	int number1;
	std::cout << "enter a minute: ";
	std::cin >> number1;
	int hours = number1 / 60;
	int minutes = number1 % 60;
	std::cout << "time: " << hours << " hours and " << minutes << " minutes" << std::endl;
	return 0;
}