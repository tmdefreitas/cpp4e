//Ch. 14 - Namespaces
namespace Text_lib {
  class Shape {};
  class Line {};
  class Word {};
}

namespace Graph_lib {
  class Shape {};
  class Line {};
}

Text_lib::Shape s();

//using Declarations
using std::string; //"string" means "std::string"

//using Directives
using namespace std; // make every name from std accessible

//Can shorten namespaces by assigning a new one:
namespace American_Telephone_and_Telegraph {

}
namespace ATT = American_Telephone_and_Telegraph;

//Can compose namespaces to simplify interfaces, e.g.:
namespace His_string {
  class String {};
  String operator+(const String&, const String&);
}

namespace Her_vector {
  template<typename T>
    class Vector {};
}

namespace My_lib {
  using namespace His_string;
  using namespace Her_vector;
  void my_fct(String&)
}

My_lib::String s; //My_lib::His_string::String

//Unnamed namespaces
namespace {

}

//Equivalent to
namespace $$$ {

}
using namespace $$$;
