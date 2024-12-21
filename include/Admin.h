#include <bits/stdc++.h>
#include "Flight.h"
#include "Customer.h"
#include "Reservation.h"

using namespace std;

class Admin {
private:
    int adminID;
    string name;

public:
    Admin(int id, const string& name);

    void addFlight(vector<Flight*>& flights, Flight* flight);
    void addCustomer(vector<Customer>& customers, const Customer& customer);
    void viewAllCustomers(const vector<Customer>& customers) const;
    void viewAllFlights(const vector<Flight*>& flights) const;
    void viewAllReservations(const vector<Reservation>& reservations) const;
};