#include "Big.h"
#include <iostream>

int main(int argc, char *argv[])
{
  Big b;
  b.print();
  auto &hash_map = b.get_hash_map();
  hash_map["ee"] = 1;
  std::cout << hash_map.at("ee");
  return 0;
}
