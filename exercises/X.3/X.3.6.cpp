#include <iostream>
using namespace std;

int main() {
  bool abool;
  char achar;
  int anint;
  double adouble;
  string astring;

  cout << "Enter a bool:";
  cin >> abool;
  cout << "Enter a char:";
  cin >> achar;
  cout << "Enter an int:";
  cin >> anint;
  cout << "Enter a double:";
  cin >> adouble;
  cout << "Enter a string:";
  cin >> astring;

  cout << abool << "," << achar << "," << anint << "," << adouble << "," << astring;
}
