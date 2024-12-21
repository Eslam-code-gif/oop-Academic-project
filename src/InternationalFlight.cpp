#include "InternationalFlight.h"

InternationalFlight::InternationalFlight(int id, string orgn, string dest, string date, int seats, double price, bool visa)
: Flight(id, orgn, dest, date, seats, price), visaRequired(visa)
{
}

void InternationalFlight::getDetails()
{
    
    Flight::getDetails();
    cout <<" visaRequired : " <<visaRequired<< endl;

}

void InternationalFlight::abs()
{
}