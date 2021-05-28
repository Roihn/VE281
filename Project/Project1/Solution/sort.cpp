#include "sort.hpp"
#include <iostream>


int main(){
    std::vector<int> A;
    for (int i = 10; i>0; i--) {
        A.push_back(i);
    }
    for (auto item: A) {
        std::cout << item << ' ';
    }
    std::cout << "ok\n";
    bubble_sort<int, std::less<int>>(A, std::less<int>());
    // std::cout << "ok\n";
    for (auto item: A) {
        std::cout << item << ' ';
    }
    std::cout << std::endl;
    return 0;
}
