#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void print_sleep_for(string msg, int seconds) {
  while (seconds > 0) {
    cout << msg << flush;
    this_thread::sleep_for(chrono::seconds(1));
    --seconds;
  }
}

int main() {
  thread t1 (print_sleep_for, "hello\n", 10);
  thread t2 (print_sleep_for,"world!\n", 10);

  t1.join();
  t2.join();
}
