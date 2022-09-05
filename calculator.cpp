#include <iostream>
int main() {
	char op;
	bool correctInput = true;
	double numberOne;
	double numberTwo;
	double result;
	std::cout << "--------- C++ Calculator ---------"
			  << "\n";
	std::cout << "Enter your operation'+' '-' '*' '/' ";
	std::cin >> op;
	std::cout << "Enter your first number ";
	std::cin >> numberOne;
	std::cout << "Enter your second number ";
	std::cin >> numberTwo;
	switch (op) {
	case '+':
		result = numberOne + numberTwo;
		break;
	case '-':
		result = numberOne - numberTwo;
		break;
	case '*':
		result = numberOne * numberTwo;
		break;
	case '/':
		result = numberOne / numberTwo;
		break;
	default:
		correctInput = false;
	}
	// Prompt the user if entered incorrect operations
	// Display result
	if (correctInput) {
		std::cout << numberOne << "" << op << numberTwo << "is " << result;
	} else {
		std::cout << "Please enter between '+' '-' '*' '/'";
	}
	return 0;
}