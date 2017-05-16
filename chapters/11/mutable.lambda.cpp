#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void algo(vector<int>& v) {
  int count = v.size();
  //Generate a list of decreasing integers, in a very non-obvious way.
  //count is changed in between function calls, like a static variable
  std::generate(v.begin(), v.end(),
    [count]()mutable{return --count;}
  );
}

int main(){
  vector<int> v(10);
  algo(v);
  for (int i : v)
     cout << i << '\n';
}
