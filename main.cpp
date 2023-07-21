#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>



long nextBigger(long n) {
  
  std::string value = std::to_string(n);
  std::next_permutation(value.begin(), value.end());
  long new_n = std::stol(value);
  return new_n > n ? new_n: -1l;
}

int main() {

  std::cout << nextBigger(211)<<std::endl;
  assert(nextBigger(12) == 21);
  assert(nextBigger(21) == -1);
  std::cout << "tests passed\n";
  return 0;
}
