int main() {
  //Pointer to a character
  char * pc;
  *pc = 'c';
  //Array of 10 integers
  int[10] a = {0,1,2,3,4,5,6,7,8,9};
  //pointer to an array of character strings
  char[] * pac = {"abc", "def"};
  //pointer to a pointer to a character
  char** ppc = &pc;
  //constant integers
  const int ci = 10;
  //pointer to constant integer
  int const * pci = &ci;
  //constant pointer to an integer
  int * const cpi = nullptr;
}
