/**
 * @file Lifegame.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-02-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Lifegame.hpp"

#include <iostream>

LifeGame::LifeGame() {
  colmunSize = 5;
  rowSize = 5;

  std::vector<std::vector<bool>> vect(5, std::vector<bool>(5));
  dataArray = vect;
}

LifeGame::LifeGame(int column, int row) {
  colmunSize = column;
  rowSize = row;

  std::vector<std::vector<bool>> vect(rowSize, std::vector<bool>(colmunSize));
  dataArray = vect;
}

LifeGame::~LifeGame() {
  std::cout << "destruct LifeGame" << std::endl;
}

void LifeGame::execute() { printResult(); }

void LifeGame::printResult() {
  for (int i = 0; i < dataArray.size(); i++) {
    for (int j = 0; j < dataArray[i].size(); j++) {
      if (dataArray[i][j]) {
        std::cout << "■ ";
      } else {
        std::cout << "□ ";
      }
    }
    std::cout << std::endl;
  }
}
