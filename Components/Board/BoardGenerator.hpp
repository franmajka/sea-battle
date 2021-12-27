#pragma once

#include <vector>
#include <memory>

#include "Config.hpp"
#include "Cell.hpp"

namespace Board {
  // Strategy pattern implementation https://refactoring.guru/ru/design-patterns/strategy
  class BoardGenerator {
  public:
    BoardGenerator(Config config) : config_(config) {}

    virtual std::vector<std::vector<CellPtr>> generateBoard();

  private:
    Config config_;
  };

  using BoardGeneratorPtr = std::shared_ptr<BoardGenerator>;
}
