#include "order.hpp"
#include <cstdlib>
struct memoryPool {
  Order *head_order;

  memoryPool(int32_t size) {
    head_order = (Order *)malloc(sizeof(Order) * size);
    
  }
};