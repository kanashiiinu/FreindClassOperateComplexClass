#include "Big.h"
#include <QDebug>
Big::Big(): Small()
{
  qDebug() << "B";
  this->set_parent(this);
}
