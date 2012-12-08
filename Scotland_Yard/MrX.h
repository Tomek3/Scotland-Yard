#Ifndef PAN_X_H
#Define PAN_X_H


#Include "Player.H"

class MrX : public Player
{
Public:
Button * Show();
Button * MoveBlack();
Button * MoveDouble();

Private:
int BlackTicket;
int DoubleTicket;
}

#endif