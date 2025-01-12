// THIS IS COMMENT IGNORE BY COMPILER
// sorry for this code are very weird becouse i'm 14 years :)


#include <iostream> // Import iostream
int main() {
  int zeroone = {}; //0-1 variable
  std::cout << "Welcome To Simple Calculator!" << std::endl;
  while (true) {
  std::cout << "Type 1 to continue or type 0 to exit: ";
  std::cin >> zeroone;
  if (zeroone == 0 ) break;  
    int x = {}; // variable x
    int y = {}; // variable y
    std::cout << "Enter First Number: ";
    std::cin >> x;
    std::cout << "Enter Second Number: ";
    std::cin >> y;
    std::cout << std::endl;
    int z = x*y; // change star* if you want another operation like devision 
    std::cout << std::endl;
    std::cout << "The Result is: " << z << std::endl; // result output
    } 

  return 0;
  }
