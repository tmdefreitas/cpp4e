// Ch. 11 - Select Operations

//11.2 Free Store
// free store == the heap == dynamic memory
//C++ implementation does not guarantee the presence of a garbace collector
//Good strategy to avoid "naked new"

//Can overload new operator to allocate space other than the free store.
//Use nothrow in this overload to avoid throwing exceptions when allocation fails.


//Lambda expressions

void print_modulo(const vector<int>& v, ostream& os, int m) {
  for_each(begin(v), end(v),
    [&os,m](int x) {if (x%m==0) os << x << '\n';}
  );
}
