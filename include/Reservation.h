#pragma once
#include <string>
#include "Customer.h"
#include "Flight.h"

using namespace std;

class Reservation {
private:
    int reservationID;
    Customer customer;
    Flight* flight;
    string reservationDate;
    double totalAmount;

public:
    Reservation(int id, const Customer& customer, Flight* flight, const string& date);

    void calculateTotalAmount();
    void getDetails() const;
};