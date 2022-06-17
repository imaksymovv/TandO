#include <iostream>

int main()
{
	int a = 2;
	int b = 3;
	int c, result;
	std::cout << "enter the number of your operand(& = 1, ^ = 2, | = 3, ~ = 4):" << std::endl;
	std::cin >> c;
	if (c == 1) {
		result = a & b;
		std::cout << "Result = "<< result << std::endl;
	}
	else if(c == 2){
		result = a ^ b;
		std::cout << "Result = " << result << std::endl;
	}
	else if (c == 3) {
		result = a | b;
		std::cout << "Result = " << result << std::endl;
	}
	else if (c == 4) {
		result = ~(a + b);
		std::cout << "Result = " << result << std::endl;
	}

	return 0;
}

