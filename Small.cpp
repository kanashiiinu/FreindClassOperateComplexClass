#include "Small.h"
#include "Big.h"

Small::Small()
{
  std::cout << "small";
}

void Small::set_parent(Big *parent)
{
  p = parent;
}

void Small::print()
{
  p->i = -1;
  p->s = "operate Big's data in Small";
  std::cout << "small fun, but big call"
            << "\n"
            << p->i
            << "\n"
            << p->s
            << "\n" ;
}


std::unordered_map<std::string, int> &Small::get_hash_map()
{
  return p->h;
}
