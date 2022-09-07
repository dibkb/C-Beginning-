#include <iostream>
int main(){
  int age;
  std::cout<<"Enter your age !";
  std::cin>> age;
  // ternary operator
  std::string passMessage = "Welcome to Sin City";
  std::string failMessage = "You are not elligible for Sin City";
  age >=18 ? std::cout<<passMessage : std::cout<<failMessage;
  return 0;
}