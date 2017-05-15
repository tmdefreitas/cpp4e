#include <iostream>
using namespace std;

int main() {
  string s = "abcdefghijklmnopqrstuvwxyz0123456789";
  cout << "c\tint\thex" << endl;
  cout << "---------------" << endl;
  for (char& c : s) {
    int ic = (int ) c;

    cout << c << "\t" << std::dec << ic << "\t";
    cout << std::hex << ic << endl;
  }
}
