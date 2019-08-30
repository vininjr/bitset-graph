/* vim: set sw=4 sts=4 et foldmethod=syntax : */

#include "bit_graph.h"

#include <algorithm>
#include <numeric>

#include <ctime>
#include <iostream>
#include <iomanip>

template<unsigned size_>
void test_bit_set(){
    FixedBitSet<size_> ca, cb;
    ca.set_up_to(10);
    cb.set_up_to(10);
    if (ca.test(3))
        std::cout << "Yes" <<  std::endl;
    else 
        std::cout << "No" <<  std::endl;

}

template<unsigned size_>
void test_bit_graph(){
    FixedBitGraph<size_> bit_graph;
    bit_graph.resize(2);

}

int main(){

    test_bit_set<8>();
    test_bit_graph<8>();

    return 0;
}
