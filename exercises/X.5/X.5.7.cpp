#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v{5, 9, -1, 200, 0};
  for (auto i = v.begin(); i != v.end(); ++i)
    cout << *i << ' ';
}
