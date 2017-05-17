#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
  string fname = "integers.txt";
  ifstream is {fname};

  vector<int> v (istream_iterator<int>{is}, {});

  cout << v.size() << endl;

}
