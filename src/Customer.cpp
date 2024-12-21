#include "Customer.h"
Customer::Customer(int id, const string &name, const string &address, const string &phone)
    : customerID(id), name(name), address(address), phone(phone) {}

void Customer::bookFlight(Flight *flight)
{
    if (flight != nullptr)
    {
        bookedFlights.push_back(flight);
        cout << "Flight booked successfully!" << endl;
    }
    else
    {
        cout << "Invalid flight." << endl;
    }
}
void Customer::cancelReservation(Flight *flight)
{
    auto it = find(bookedFlights.begin(), bookedFlights.end(), flight);
    if (it != bookedFlights.end())
    {
        bookedFlights.erase(it);
        cout << "Reservation cancelled successfully!" << endl;
    }
    else
    {
        cout << "Flight not found in your bookings." << endl;
    }
}

void Customer::getDetails() const
{
    cout << "Customer ID: " << customerID << endl
         << "Name: " << name << endl
         << "Address: " << address << endl
         << "Phone: " << phone << endl
         << "Booked Flights: " << bookedFlights.size() << endl;
    for (const auto &flight : bookedFlights)
    {
        flight->getDetails();
    }
}