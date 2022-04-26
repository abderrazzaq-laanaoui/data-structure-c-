#ifndef _POINT_H_
#define _POINT_H_
#include <ostream>
class Point
{
private:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    int getX() const;
    int getY() const;
};

 std::ostream& operator<<(std::ostream& out,  const Point& p);

 #endif //_POINT_H_