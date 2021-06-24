#include <iostream>
#include <vector>
#include "Heap.h"
#include "Only_for_testing.h"

int main()
{
    std::vector<int> myvector = { 9, 8, 7, 1, 11, 12, 4 };

    Heap max_heap;

    for (const auto item : myvector)
    {
        max_heap.insert(item);
    }

 
    max_heap.print();

    std::cout << std::endl;

    max_heap.pop();

    max_heap.print();

    std::cout << " Root: " << max_heap.top() << std::endl;

    Heap max_heap2;

    std::cout << "Is max_heap2 empty? " << max_heap2.is_empty() << std::endl;

    std::cout << "First element of the max heap: " << max_heap[0] << std::endl;

    return 0;
}

