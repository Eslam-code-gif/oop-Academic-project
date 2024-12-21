#include "DomesticFlight.h"

DomesticFlight::DomesticFlight(int id, string orgn, string dest, string date, int seats, double price, double extra) : Flight(id, orgn, dest, date, seats, price), extraCharge(extra)
{
}

void DomesticFlight::getDetails()
{
    Flight::getDetails();
    cout << " extraCharge: " << extraCharge << endl;
}

void DomesticFlight::abs()
{
}
