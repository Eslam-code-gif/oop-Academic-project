#pragma once
#include <bits/stdc++.h>
#include "Flight.h"
using namespace std;
class Customer {
private:
    int customerID;
    string name;
    string address;
    string phone;
    vector<Flight*> bookedFlights;

public:
    Customer(int id, const string& name, const string& address, const string& phone);

    void bookFlight(Flight* flight);
    void cancelReservation(Flight* flight);
    void getDetails() const;
};
