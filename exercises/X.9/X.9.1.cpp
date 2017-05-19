#include <iostream>

using std::cout;
using std::endl;


struct small {
  long double ld;
  long l;
  double d;
  int i;
  char c;
  bool b;
};

struct large {
  bool b;
  long double ld;
  char c;
  double d;
  int i;
  long l;

};

int main() {
  cout << "Sizeof small: " << sizeof(small) << endl;
  cout << "Sizeof large: " << sizeof(large) << endl;
}
