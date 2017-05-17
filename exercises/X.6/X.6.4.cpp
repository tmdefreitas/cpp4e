#include <iostream>
#include <string>
#include <random>
#include <cmath>
using namespace std;

class Norm_double {
public:
  Norm_double(double mean, double stddev): dist(mean, stddev){}
  int operator()() {return dist(re);}
private:
  default_random_engine re;
  normal_distribution<double> dist;
};


int main() {
  long r;
  Norm_double rnd {14.0, 5.0};
  vector<long> histogram(30);
  for (int i=0; i<1000; ++i) {
    r = lround(rnd());
    if (r >= 0 && r <= 29) {
      ++histogram[r];
    }
  }

  for (int i = 0; i!=histogram.size(); ++i) {
    cout << i << '\t';
    for (int j=0; j!=histogram[i]; ++j) cout << '*';
    cout << endl;
  }

}
