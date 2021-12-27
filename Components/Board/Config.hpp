#pragma once

#include <cstddef>
#include <unordered_map>

namespace Board {
  struct Config {
    // Dimensions of the board
    size_t dim;

    // Determines how many ships of certain size on the board
    std::unordered_map<size_t, size_t> shipTypeToQuantity;

    size_t shipsQuantity() const {
      size_t totalQuantity = 0;
      for (const auto& [shipType, quantity] : shipTypeToQuantity) {
        totalQuantity += quantity;
      }

      return totalQuantity;
    }
  };
}
