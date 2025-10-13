/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "include/as1.hpp"
#include <iostream>

using namespace homework;

// int main() { 
//     int one = 1;
//     int* a = &one;

//     int three = 3;
//     int* b = &three;

//     int five = 5;
//     int* c = &five;

//     std::cout << a;
//   homework::swap_ptr(a, b, c);
//     std::cout << b;

// }

int main() {
    homework::UniqueData val(5);
    std::cout << val.get();

    val.set(3);
    std::cout << val.get();

    return 0;
}

