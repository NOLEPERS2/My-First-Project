#include <iostream>

using namespace std;

int main() {
  int number1 = {};
  int number2 = {};
  cout << "Number 1: ";
  cin >> number1;
  cout << "Number 2: ";
  cin >> number2;
  int result = number1 + number2; //ubah "+" kalau mau jadi perkalian pembagian dan sebagainya
  cout << "Result: " << result << endl;
  return 0;
}
