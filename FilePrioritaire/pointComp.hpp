#include "point.hpp"

#ifndef _POINT_COMP_H_
#define _POINt_COMP_H_
class IsOnLeft { // a left-right comparator
public:
bool operator()(const Point l, const Point r) const {
    return l.getX() < r.getX();
}};

class IsBelow { // a left-right comparator
public:
bool operator()(const Point l, const Point r) const {
    return l.getY() < r.getY();
}};
#endif //_POINt_COMP_H_

