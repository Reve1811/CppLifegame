// Copyright 2022 Reve1811

#include <array>
#include <iostream>
#include "lifegame/Lifegame.hpp"

int main(int, char**) {
  LifeGame lg = LifeGame(5, 5);
  lg.execute();
}
