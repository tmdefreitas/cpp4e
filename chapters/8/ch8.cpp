// Chapter 8 - Structures Unions, and Enumerations

//enum class is an enum where the enumerators are within the scope of the enum, no implicit conversions to other types

//Structures can be initialized with {} notation:
struct Address {
  const char * name;
  int number;
  char state[2];
}

Address jd = {
  "Jim Dandy",
  61,
  {'N', 'J'}
};

//-> operator:
// p->m is equivalent to (*p).m

//Structs can be passed by reference:
void print_addr2(const Address& r) {
  cout << r.name << '\n';
}

//8.2.3
//A struct is simply a class where the members are public by default. Structs can have member functions

//8.2.6 - Plain Old Data
// A struct is POD when it can be safely manipulated as just data, e.g. memcpy'd.
// POD's have a standard layout type, trivially copyable type, and have trivial default constructor

//Things which make things non-POD:
// - Non-static member
// - Virtual functions, virtual bases
// - member that is a reference
// is_pod<T> can determine this for you

//8.3 Unions
/* A union  is a struct in which all members are allocated at the same address.
sizeof(Union) == sizeof(largest-member)

Unions are not really helpful...
*/

//8.4.1
//Enum class used to scope enumerators
enum class Traffic {red, yellow, green};
enum Color {blue, green};

int i = blue; //Legal
int x = Traffic:red; //illegal, no implicit conversions
