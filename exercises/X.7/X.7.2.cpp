#include <iostream>
using namespace std;

int main(){
  char c = 255;
  int i = c;

  if (i == 255) {
    cout << "unsigned";
  } else if (i == -1){
    cout << "signed";
  }
}
