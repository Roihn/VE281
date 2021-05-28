#ifndef VE281P1_SORT_HPP
#define VE281P1_SORT_HPP

#include <vector>
#include <iostream>
#include <functional>

template<typename T, typename Compare = std::less<T> >
void bubble_sort(std::vector<T> &vector, Compare comp = Compare()) {
    std::cout << "Size = " << std::endl;
    std::cout << "Size = " << vector.size() << std::endl;
    for (size_t i = vector.size()-2; i >= 0; i--) {
        for (size_t j = 0; j <= i; j++) {
            if (comp(vector[j],vector[j+1])) {
                std::swap(vector[j], vector[j+1]);
            }
        }
    }
}

// template<typename T, typename Compare = std::less<T> >
// void insertion_sort(std::vector<T> &vector, Compare comp = Compare()) {
//     for (size_t i = vector.size()-2; i >= 0; i--) {
//         for (size_t j = 0; j <= i; j++) {
//             if (comp(vector[j],vector[j+1])) {
//                 std::swap(vector[j], vector[j+1]);
//             }
//         }
//     }
// }

// template<typename T, typename Compare = std::less<T> >
// void selection_sort(std::vector<T> &vector, Compare comp = Compare()) {
//     for (size_t i = vector.size()-2; i >= 0; i--) {
//         for (size_t j = 0; j <= i; j++) {
//             if (comp(vector[j],vector[j+1])) {
//                 std::swap(vector[j], vector[j+1]);
//             }
//         }
//     }    // TODO: implement
// }

// template<typename T, typename Compare = std::less<T> >
// void merge_sort(std::vector<T> &vector, Compare comp = Compare()) {
//     for (size_t i = vector.size()-2; i >= 0; i--) {
//         for (size_t j = 0; j <= i; j++) {
//             if (comp(vector[j],vector[j+1])) {
//                 std::swap(vector[j], vector[j+1]);
//             }
//         }
//     }   // TODO: implement
// }

// template<typename T, typename Compare = std::less<T> >
// void quick_sort_extra(std::vector<T> &vector, Compare comp = Compare()) {
//     for (size_t i = vector.size()-2; i >= 0; i--) {
//         for (size_t j = 0; j <= i; j++) {
//             if (comp(vector[j],vector[j+1])) {
//                 std::swap(vector[j], vector[j+1]);
//             }
//         }
//     }    // TODO: implement
// }

// template<typename T, typename Compare = std::less<T> >
// void quick_sort_inplace(std::vector<T> &vector, Compare comp = Compare()) {
//     for (size_t i = vector.size()-2; i >= 0; i--) {
//         for (size_t j = 0; j <= i; j++) {
//             if (comp(vector[j],vector[j+1])) {
//                 std::swap(vector[j], vector[j+1]);
//             }
//         }
//     }    // TODO: implement
// }


#endif //VE281P1_SORT_HPP
