#include "Reservation.h"
#include <iostream>

using namespace std;

Reservation::Reservation(int id, const Customer& customer, Flight* flight, const string& date)
    : reservationID(id), customer(customer), flight(flight), reservationDate(date), totalAmount(0.0) {}

void Reservation::calculateTotalAmount() {
    if (flight != nullptr) {
        totalAmount = flight->getTicketPrice();
        cout << "Total amount calculated: " << totalAmount << endl;
    } else {
        cout << "Invalid flight for calculation." << endl;
    }
}

void Reservation::getDetails() const {
    cout << "Reservation ID: " << reservationID << endl
         << "Reservation Date: " << reservationDate << endl
         << "Total Amount: " << totalAmount << endl;
    cout << "Customer Details:" << endl;
    customer.getDetails();
    cout << "Flight Details:" << endl;
    if (flight != nullptr) {
        flight->getDetails();
    } else {
        cout << "No flight information available." << endl;
    }
}
