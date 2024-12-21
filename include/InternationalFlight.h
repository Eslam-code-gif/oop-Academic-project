/*
3. Subclass: InternationalFlight (inherits from Flight) 
• Attributes: 
o visaRequired: Whether the flight requires a visa (type bool). 
• Methods: 
o Constructor: Initializes flightID, origin, destination, flightDate, seatsAvailable, ticketPrice, and adds 
visaRequired for international flights. 
o getDetails(): Displays the details of the international flight with the visa requirement.
*/
#include "Flight.h"
class InternationalFlight : public Flight
{
private:
    /* data */
    bool visaRequired;
public:
    InternationalFlight(int id, string orgn,string dest,string date,int seats,double price,bool visa);
        void getDetails();

    void abs();
};
