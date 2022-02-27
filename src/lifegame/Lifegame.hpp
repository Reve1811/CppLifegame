/**
 * @file Lifegame.hpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-02-27
 *
 * @copyright Copyright 2022 Reve1811
 *
 */
#ifndef SRC_LIFEGAME_LIFEGAME_HPP_
#define SRC_LIFEGAME_LIFEGAME_HPP_

#include <vector>

class LifeGame {
 public:
  LifeGame();
  LifeGame(int columnSize, int rowSize);
  ~LifeGame();

  void execute();

 private:
  int colmunSize = 0;
  int rowSize = 0;
  std::vector<std::vector<bool>> dataArray;

  void printResult();
};

#endif  // SRC_LIFEGAME_LIFEGAME_HPP_
