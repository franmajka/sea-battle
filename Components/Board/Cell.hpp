#pragma once

#include <memory>

namespace Board {
  class Cell {
  public:
    Cell() {}

  private:

  };

  using CellPtr = std::shared_ptr<Cell>;
}
