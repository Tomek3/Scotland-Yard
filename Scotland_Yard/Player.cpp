
#Include "Player.H"

Player::Gracz();
Button * Player::MoveBus()
{
	--BusTicket;
};
Button * Player::MoveTaxi()
{
	--TaxiTicket;
};
Button * Player::MoveUdg()
{
	--UndegroundTicket;
};

Button * Player::GetLocation()
{
return Lokacja;
};