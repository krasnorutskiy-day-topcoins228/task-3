#include <iostream>

int main()
{
	int number1, number2;
    std::cout << "enter two numbers: ";
	std::cin >> number1 >> number2;
	int sum = number1 + number2;
	int difference = number1 - number2;
	int  product = number1 * number2;
	std::cout << "sum: " << sum << std::endl;
	std::cout << "difference: " << difference << std::endl;
	std::cout << "product: " << product << std::endl;
	return 0;

}

