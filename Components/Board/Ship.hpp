#pragma once

#include <memory>
#include <vector>

#include "Cell.hpp"

namespace Board {
  class Ship {
  public:
    Ship(std::vector<CellPtr>&& cells) : cells_(std::move(cells)) {}

    bool isDestroyed() { return !cells_.size(); }
  private:
    std::vector<CellPtr> cells_;
  };

  using ShipPtr = std::shared_ptr<Ship>;
}
