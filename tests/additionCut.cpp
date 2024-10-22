#include<parenthesisMatch.h>
#include<iostream>
#include<stdlib.h>
#include<string>
#include<sstream>

#define ASSERT(var1, var2) if(var1 != var2) { std::cerr << var1 << var2 << "\n"; exit(-1); }

int main() {
  for(int i = 0; i < 2048; ++i) {
    for(int j = 0; j < 2048; ++j) {
      std::string sum = "";
      std::string var1 = "";
      std::string var2 = "";
      std::ostringstream os{""};
      os.clear();
      os << i;
      var1 = os.str("");
      os.clear();
      os << j;
      var2 = os.str("");
      os.clear();
      os << i + j;
      sum = os.str("");
      ASSERT(sum, additionCut(var1 + "+" + var2))
    }
  }
  return 0;
}
