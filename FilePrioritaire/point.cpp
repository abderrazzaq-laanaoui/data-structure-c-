#include "point.hpp"

Point::Point()
{
    x = 0;
    y = 0;
}
Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Point::getX() const{
    return this->x;
}
int Point::getY() const{
    return this->y;
}

  std::ostream& operator<<(std::ostream& out,  const Point& p){
      out << "(" << p.getX() <<","<< p.getY()<< ") ";
      return out;
  }
