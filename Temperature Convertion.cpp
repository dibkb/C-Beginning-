#include <iostream>
// Kelvin - Celcius
double kelvinToCelcius(double inputTemp) {
	return inputTemp - 273.15;
}
double celciusToKelvin(double inputTemp) {
	return inputTemp + 273.15;
}
// Kelvin - Fahrenheit
double kelvinToFahrenheit(double inputTemp) {
	return (inputTemp - 273.15) * 9.0 / 5.0 + 32;
}
double fahrenheitToKelvin(double inputTemp) {
	return (inputTemp - 32) * 5.0 / 9.0 + 273.15;
}
// Celcius - Fahrenheit
double celciusToFahrenheit(double inputTemp) {
	return inputTemp * 9.0 / 5.0 + 32;
}
double fahrenheitToCelcius(double inputTemp) {
	return 5.0 / 9.0 * (inputTemp - 32);
}
int main() {
	double inputTemp;
	double tempConvert;
	char tempConvertUnit;
	char inputTempUnit;
	std::cout
		<< "--------- Welcome to Temperature Converstion Centre ---------\n";
	std::cout << " C - Celcius \n";
	std::cout << " F - Fahrenheit \n";
	std::cout << " K - Kelvin \n";
	std::cout << " Enter the unit you want to convert to ";
	std::cin >> tempConvertUnit;
	std::cout << "Enter your input unit ('C' or 'K' or 'F') ";
	std::cin >> inputTempUnit;
	if (inputTempUnit != 'C' && inputTempUnit != 'K' && inputTempUnit != 'F') {
		std::cout << "Enter valid character ";
		return 0;
	}
	std::cout << "Enter your temperature in " << inputTempUnit << " ";
	std::cin >> inputTemp;
	switch (tempConvertUnit) {
	// Convert to Celcius
	case 'C':
		if (inputTempUnit == 'C') {
			tempConvert = inputTemp;
		} else if (inputTempUnit == 'F') {
			tempConvert = fahrenheitToCelcius(inputTemp);
		} else if (inputTempUnit == 'K') {
			tempConvert = kelvinToCelcius(inputTemp);
		}
		break;
	// Convert to Fahrenheit
	case 'F':
		if (inputTempUnit == 'F') {
			tempConvert = inputTemp;
		} else if (inputTempUnit == 'C') {
			tempConvert = celciusToFahrenheit(inputTemp);
		} else if (inputTempUnit == 'K') {
			tempConvert = kelvinToFahrenheit(inputTemp);
		}
		break;
	// Convert to Kelvin
	case 'K':
		if (inputTempUnit == 'K') {
			tempConvert = inputTemp;
		} else if (inputTempUnit == 'C') {
			tempConvert = celciusToKelvin(inputTemp);
		} else if (inputTempUnit == 'F') {
			tempConvert = fahrenheitToKelvin(inputTemp);
		}
		break;
	}
	std::cout << inputTemp << " " << inputTempUnit << " is ";
	std::cout << tempConvert << " " << inputTempUnit;
	return 0;
}