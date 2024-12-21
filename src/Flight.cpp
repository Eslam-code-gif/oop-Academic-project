#include "Flight.h"

Flight::Flight(int id, string orgn, string dest, string date, int seats, double price) : flightID(id), origin(orgn), destination(dest), flightDate(date), seatsAvailable(seats), ticketPrice(price)
{
}

void Flight::getDetails()
{
   cout << "Flight Details:\n"
         << " - Flight ID: " << flightID << "\n"
         << " - Origin: " << origin << "\n"
         << " - Destination: " << destination << "\n"
         << " - Flight Date: " << flightDate << "\n"
         << " - Seats Available: " << seatsAvailable << "\n"
         << " - Ticket Price: $" << ticketPrice << "\n";
}

double Flight::getTicketPrice()
{
    return ticketPrice;
}
