//==============================================================================
///
/// @file
/// @brief Программа для робота Карела и стартовая функция
///
//==============================================================================


#include "karel.h"


//==============================================================================
/// Программа для робота Карела
///
void KarelProgram() {
/// @todo Добавить программу для Карела
    Move();
    Move();
    TurnLeft();
    TurnLeft();
    TurnLeft();
    Move();
    TurnLeft();
    Move();
    PickBeeper();
}


//==============================================================================
/// Стартовая функция
///
int main() {
    LoadWorld("worlds/collect_newspaper.w");
    KarelProgram();
    Finish();
    return 0;
}