#include <iostream>
using namespace std;
// Sizeof common types
int main(){
  cout << "Sizeof common types" << endl << "------------" << endl;
  cout << "char:\t" << sizeof(char) << endl;
  cout << "short:\t" << sizeof(short) << endl;
  cout << "int:\t" << sizeof(int) << endl;
  cout << "long:\t" << sizeof(long) << endl;
  cout << "long long:\t" << sizeof(long long) << endl;
  cout << "int *:\t" << sizeof(int*) << endl;
  cout << "long *:\t" << sizeof(long*) << endl;
  cout << "void *:\t" << sizeof(void *) << endl;

}
