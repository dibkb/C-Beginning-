#include <iostream>
#include <vector>
using text_t = std::string;
using float_t = double;
using num_t = int;
int main(){
  // const text_t name = "Yo Yo";
  // float_t age = 34.5;
  // std::cout<<"My name is "<<name <<"\n" << "And my age is "<<age <<" years";
  text_t name;
  num_t age;
  std::cout<< "What is your name ? ";
  std::getline(std::cin>> std::ws,name);
  std::cout<< "What is your age ? ";
  std::cin >> age;
  std::cout<< "HELLO "<< name <<"\n" << "You are "<< age << " years old.";
  return 0;
}