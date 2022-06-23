#include <iostream>

int main()
{
	int a = 2;
	int b = 3;
	int c, result;
	std::cout << "enter your operands" << std::endl;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

		result = a & b;
		std::cout << "a & b = "<< result << std::endl;

		result = a ^ b;
		std::cout << "a ^ b = " << result << std::endl;
	
		result = a | b;
		std::cout << "a | b = " << result << std::endl;
	
		result = ~(a + b);
		std::cout << "~(a + b) = " << result << std::endl;

	return 0;
}

