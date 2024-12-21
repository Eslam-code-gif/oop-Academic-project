#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(int id, const string& name) : adminID(id), name(name) {}

void Admin::addFlight(vector<Flight*>& flights, Flight* flight) {
    if (flight != nullptr) {
        flights.push_back(flight);
        cout << "Flight added successfully!" << endl;
    } else {
        cout << "Invalid flight." << endl;
    }
}

void Admin::addCustomer(vector<Customer>& customers, const Customer& customer) {
    customers.push_back(customer);
    cout << "Customer added successfully!" << endl;
}

void Admin::viewAllCustomers(const vector<Customer>& customers) const {
    cout << "List of Customers:" << endl;
    for (const auto& customer : customers) {
        customer.getDetails();
        cout << "-------------------" << endl;
    }
}

void Admin::viewAllFlights(const vector<Flight*>& flights) const {
    cout << "List of Flights:" << endl;
    for (const auto& flight : flights) {
        if (flight != nullptr) {
            flight->getDetails();
        }
        cout << "-------------------" << endl;
    }
}

void Admin::viewAllReservations(const vector<Reservation>& reservations) const {
    cout << "List of Reservations:" << endl;
    for (const auto& reservation : reservations) {
        reservation.getDetails();
        cout << "-------------------" << endl;
    }
}
