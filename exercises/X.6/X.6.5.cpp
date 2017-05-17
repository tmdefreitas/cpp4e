#include <regex>
#include <fstream>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;

const string fn = "decimals.txt";

int main() {

  std::regex decimals_regex("\\d+(\\.\\d\\d*)?");

  ifstream ifs (fn);

  string file_text((istreambuf_iterator<char>(ifs)),
                    istreambuf_iterator<char>());

  regex_iterator<string::iterator> ri (file_text.begin(), file_text.end(), decimals_regex);
  regex_iterator<string::iterator> rend;

  while(ri!=rend) {
    cout << ri->str() << endl;
    ++ri;
  }

}
