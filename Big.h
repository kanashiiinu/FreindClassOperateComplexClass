#ifndef BIG_H
#define BIG_H

#include "Small.h"
#include <string>
#include <unordered_map>
#include <iostream>

class Big : public Small
{
 public:
  friend class Small;
  Big();
 private:
  int i = 0;
  std::string s;
  std::unordered_map<std::string, int> h;
};

#endif // BIG_H
