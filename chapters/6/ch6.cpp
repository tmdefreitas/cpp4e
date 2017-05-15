#include <iostream>
using namespace std;


//6.2 Types
void boolean_types () {
  bool b1 = true;
  bool b2 = false;
}

//Pointers cn be implicitly converted to bool, non-null pointers are true, nullptr is false
void ptr_to_bool(int * p){
  bool b = p;
  bool b2 {p!=nullptr};

  if (p) { //Equivalent to p!=nullptr
    cout << "p is nullptr";
  }
}

//Character types
void char_types() {
  char c = 'a';
  signed char sc = 'b';
  unsigned char uc = 0;

  //For holding largest possible char in locale
  wchar_t  wc = '\u0444';

  //Chars for 16 & 32 bits
  char16_t utf16c;
  char32_t utf32c;
}

//Whether char is signed or unsigned is implementation dependent
void char_sign(){
  char c = 255;
  int i = c; //i could be 255 or -1
}

//Integer Types
void integer_types(){
  int i = 0;
  unsigned int ui = 0;
  signed int si = -1;

  //Sizes
  short sh = 2;
  long l = 10000;
  long long ll = 1000000;

  //Decimal, octal and hex literals
  int d {63};
  int d2 = {077}; //octal
  int d3 = 0x3f;

}


int main() {

}
