#Ifndef GRACZ_H
#Define GRACZ_H

class Player
{
Public:
Gracz();
Button * MoveBus();
Button * MoveTaxi();
Button * MoveUdg();
Virtual Button * Show();
Button * GetLocation();

Private:
int BusTicket;
int TaxiTicket
int UndegroundTicket;
Button * Lokacja;
}

#endif