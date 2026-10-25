#include "types.hpp"

struct Order {
  lob::OrderId _id;
  lob::Price _price;
  lob::Quantity _quantity;

  Order *_next;
  Order *_prev;

  lob::Side _side;
  lob::OrderType _order_type;

  Order(lob::OrderId id, lob::Price price, lob::Quantity quantity,
        lob::Side side, lob::OrderType orderType)
      : _id(id), _price(price), _quantity(quantity), _next(nullptr),
        _prev(nullptr), _side(side), _order_type(orderType) {}

  
};