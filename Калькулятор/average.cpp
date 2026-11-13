#include <iostream>
int main()
{
	int a, b, c;
	std::cout << "enter three numbers: ";
	std::cin >> a >> b >> c;
	std::cout << (a + b + c) / 3 << std::endl;    
	std::cout << (a + b + c) / 3.0 << std::endl;  
	return 0;
}