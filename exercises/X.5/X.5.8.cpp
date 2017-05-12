#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<string> v{"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};
  for (auto i = v.begin(); i != v.end(); ++i)
    cout << *i << ' ';
}
