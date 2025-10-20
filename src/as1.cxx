#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int* c) { 
    int extra = *a;
    // ptr a should get the value of ptr b
    *a = *b;
    // ptr b should get the value of ptr c
    *b = *c ;
    // ptr c should get the value of ptr a
    *c = extra;
    return;
}


UniqueData::UniqueData(int value){
  data_ = std::make_unique<int>(value);
}

int UniqueData::get() const {
  return *data_;
}

void UniqueData::set(int value){
  *data_ = value;
  return;
}

}; // namespace homework
