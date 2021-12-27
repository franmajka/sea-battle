#pragma once

#include <memory>
#include <vector>
#include <unordered_map>

#include "BoardGenerator.hpp"
#include "Cell.hpp"
#include "Ship.hpp"

namespace Board {
  class Board {
  public:
    Board(BoardGeneratorPtr boardGenerator);

  private:
    std::vector<std::vector<CellPtr>> matrix_;
    std::unordered_map<CellPtr, ShipPtr> cellBelongingness_;

    size_t shipsLeft_;
  };
}
