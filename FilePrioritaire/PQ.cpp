// implement the fucntion of PQ.hpp
#include "PQ.hpp"
#include <iterator>

using  std::list;
using  std::iterator;

template <typename E, typename Comp>
PriorityQueue<E, Comp>::PriorityQueue()
{
    this->data = std::list<E>(); 
}
template <typename E, typename Comp>
void PriorityQueue<E, Comp>::push(E element)
{ 
    Comp c;
    typename list<E>::iterator i = data.begin();
    if( c(*i , element)  ){
        data.push_front(element);
        return;
    }
    if(data.size() == 1)
    {
        data.push_back(element);
        return;
    }

    for(; next(i) != data.end();i++){
        if(c(*(next(i,1)) , element)){
            data.insert(i,element);
            return;
        }
    }
    data.push_back(element);   
}

template <typename E, typename Comp>
void PriorityQueue<E, Comp>::pop()
{
    return  data.pop_front(); // O(1) 

}

template <typename E, typename Comp>
E PriorityQueue<E, Comp>::top() const
{
    return this->data.front(); // O(1)
}

template <typename E, typename Comp>
int PriorityQueue<E, Comp>::size() const
{
    return this->data.size(); // O(1) / O(n)
}

template <typename E, typename Comp>
bool PriorityQueue<E, Comp>::isEmpty() const
{
    return this->data.empty(); // O(1)
}