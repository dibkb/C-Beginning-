#include <iostream>
namespace first {
int x = 36;
}
namespace second {
double x = 36.36;
}
int main() {
	// std::cout << "This is my first line of code in C++"<<'\n';
	// std::cout << "This is my second line of code in C++"<<'\n';
	// int x;
	// x = 25;
	// int y = 3;
	// double sum = x + y;
	// std::cout<<"The sum of x and y is "<<sum;
	// const double PI = 3.14;
	// double radius = 3;
	// double area = PI * radius * radius;
	// std::cout<< "Area of the circle with radius 3cm is " << area << " sq.
	// cm";
	using namespace second;
	std::cout << "Standard x " << x;
	return 0;
}