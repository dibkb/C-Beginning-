#include <iostream>
int main(){
  int age;
  std::cout<<"Enter your age !";
  std::cin>> age;
  if (age>=18){
    std::cout<<"Welcome to Sin City !";
  }
  else {
    std::cout<< "You are not elligible";
  }
  return 0;
}