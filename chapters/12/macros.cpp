#include <iostream>
using namespace std;

#define print_macro(x) cout << #x << ": " << x << endl;

int main() {
  print_macro(__cplusplus);
  print_macro(__DATE__);
  print_macro(__TIME__);
  print_macro(__FILE__);
  print_macro(__LINE__);
  print_macro(__func__);
  print_macro(__STDC_HOSTED__);
}
