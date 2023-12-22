#include "../include/Bishop.hpp"

/**@brief Método construtor do Bispo
*/

Bishop::Bishop(bool isWhite, int position_X, int position_Y)
{
  this->name = PieceName::Bishop;
  this->isWhite = isWhite;
  this->position_X = position_X;
  this->position_Y = position_Y;
  isAlive = true;
  PieceValue = 3;
}

Bishop::~Bishop()
{
}

/**@brief Função que valida se o movimento do Bispo é possível
*/

bool Bishop::IsMovementPossible(int FinalPosition_X, int FinalPosition_Y)
{
  if(FinalPosition_X >= 0 && FinalPosition_Y >= 0 && FinalPosition_X < 8 && FinalPosition_Y < 8 && isAlive) //alive check and movement check
  {
    int movement_x = abs(FinalPosition_X - position_X);
    int movement_y = abs(FinalPosition_Y - position_Y);

    if(movement_x == movement_y && movement_x > 0) //verufication
    {
      return true;
    }
  }

  return false;
}
