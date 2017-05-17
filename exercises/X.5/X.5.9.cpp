#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string fname = "integers.txt";
  ofstream os {fname};
  for (int i=0; i < 150; ++i) {
    os << i << endl;
  }
}
