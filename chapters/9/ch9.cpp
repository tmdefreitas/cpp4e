// Ch. 9 - Statements
/* Declarations are legal anywhere, initializers can always be used. */

//9.4.1 - enum class cannot be impliticly converted to bool, so no if(enum class)
//9.4.2 - Switch labels bust be constexpr of integral or enum type, and can't be repeated
//9.4.2 - When a switch statment is meant for every possible value of an enum, don't use default


//9.5.1 - range-for
int sum(vector<int>& v) {
  int s = 0;

  for (int x : v) {
    s+=x;
  }
  return s;

}
// Roughly equivalent to the following. Note that the range bust have a begin() and end()
int sum2(vector<int>& v) {
  int s = 0;
  for(auto p = begin(v); p!=end(v); ++p)
    s+=*p;
  return s;
}

//You can also modify the elements by using a reference instead of the value
void incr(vector<int>& v) {
  for (int&x : v)
    ++x;
}

//Using a reference in the above way can improve performance by avoiding copying the value
