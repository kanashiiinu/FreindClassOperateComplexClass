#ifndef SMALL_H
#define SMALL_H
#include <string>
#include <unordered_map>
#include <iostream>


class Big;
class Small
{
 public:
  Small();
  void print();
  void set_parent(Big *parent);
 public:
  std::unordered_map<std::string, int> &get_hash_map();
 private:
  Big *p = nullptr;
};

#endif // SMALL_H
