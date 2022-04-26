// #ifndef _PRIORITY_QUEUE_H_
// #define _PRIORITY_QUEUE_H_
#include <list>    
template <typename E, typename Comp>
class PriorityQueue
{
    private:
        std::list<E> data;
        Comp compare;

    public:
        PriorityQueue();
        void push(E element);
        void pop();
        E top() const;
        int size() const;
        bool isEmpty() const;
};
// #endif //_PRIORITY_QUEUE_H_
