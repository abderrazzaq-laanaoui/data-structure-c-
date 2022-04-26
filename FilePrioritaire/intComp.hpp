#ifndef _INT_COMP_H_
#define _INT_COMP_H_
class isLess { // a left-right comparator
public:
 bool operator()(const int l, const int r) 
{
    return l < r;
}
};
#endif //INT_COMP_H_

