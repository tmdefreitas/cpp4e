#include <iostream>
#include <chrono>
using namespace std;

long sum_slowly(long n) {
  long i = 0;
  while (i != n) {
    i += 1;
  }
  return i;
}

int main() {
  auto t0 = chrono::high_resolution_clock::now();
  sum_slowly(10000000);
  auto t1 = chrono::high_resolution_clock::now();
  cout << chrono::duration_cast<chrono::milliseconds>(t1-t0).count() << "msec\n";
}
