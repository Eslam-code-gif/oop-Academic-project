#include "Flight.h"
class DomesticFlight : public Flight
{
private:
    /* data */
    double extraCharge;
public:
    DomesticFlight(int id, string orgn,string dest,string date,int seats,double price,double extra);
    void getDetails();
    void  abs();
};



/*
2. Subclass: DomesticFlight (inherits from Flight) 
• Attributes: 
o extraCharge: Additional charge for domestic flights (type double). 
• Methods: 
o Constructor: Initializes flightID, origin, destination, flightDate, seatsAvailable, ticketPrice, and adds 
extraCharge for domestic flights. 
o getDetails(): Displays the details of the domestic flight along with the additional charge. 

*/