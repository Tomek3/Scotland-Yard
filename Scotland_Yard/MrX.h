#Ifndef PAN_X_H
#Define PAN_X_H


#Include "Player.H"

class MrX:public Gracz
{
Public:
Button * Show();
Button * MoveBlack();
Button * MoveDouble();

Private:
Int BlackTicket;
Int DoubleTicket;
}

#endif