#include <iostream>
using namespace std;

class Person {
public:
  Person(){};
  Person(string name, int age) {};

  friend ostream & operator<<(ostream& out, const Person& p);
  friend istream & operator>>(istream& in, Person& p);

private:
  string name;
  int age;
};

ostream & operator<<(ostream& out, const Person& p) {
  out << p.name << ", age " << p.age;
  return out;
}

istream & operator>>(istream& in, Person& p) {
  cout << "Name?: ";
  in >> p.name;
  cout << "Age?: ";
  in >> p.age;
  return in;
}


int main() {
  Person p;
  cin >> p;
  cout << p << endl;

}
