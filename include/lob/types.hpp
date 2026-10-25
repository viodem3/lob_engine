#pragma ones
#include <cstdint>
namespace lob {
using Price = std::uint32_t;
using Quantity = std::uint32_t;
using OrderId = std::uint64_t;

enum class Side : int8_t { Sell, Buy };

enum class OrderType : int8_t { Limit, Market };

} // namespace lob