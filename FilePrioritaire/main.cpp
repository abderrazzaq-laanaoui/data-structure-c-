#include <iostream>
#include "PQ.cpp"
#include "intComp.hpp"
#include "point.hpp"
#include "pointComp.hpp"
int main(int argc, char const *argv[])
{
    // INTEGAR PRIORITY QUEUE
   PriorityQueue<int,isLess> intPQ;
   intPQ.push(121);
   intPQ.push(12);
   intPQ.push(200);
   intPQ.push(9);

   std::cout << "Size: " << intPQ.size() << " | TOP: " << intPQ.top() << std::endl;

   intPQ.pop();
   std::cout << "Size: " << intPQ.size() << " | TOP: " << intPQ.top() << std::endl;
   intPQ.pop();
   std::cout << "Size: " << intPQ.size() << " | TOP: " << intPQ.top() << std::endl;
   intPQ.pop();
   std::cout << "Size: " << intPQ.size() << " | TOP: " << intPQ.top() << std::endl;
   intPQ.pop();

   if(intPQ.isEmpty())
    std::cout << "integar PQ is empty" << std::endl;
   
   // POINT PRIORITY QUEUE
    PriorityQueue<Point,IsOnLeft> pointPQ;
    Point p1, p2(1,12), p3(23,4), p4(6,1);

    pointPQ.push(p1);
    pointPQ.push(p2);
    pointPQ.push(p3);
    pointPQ.push(p4);

    std::cout << "Size: " << pointPQ.size() << " | TOP: " << pointPQ.top() << std::endl;
    pointPQ.pop();
    std::cout << "Size: " << pointPQ.size() << " | TOP: " << pointPQ.top() << std::endl;
    pointPQ.pop();
    
    if(!intPQ.isEmpty())
    std::cout << "integar PQ is not empty" << std::endl;
    
    return 0;
}
