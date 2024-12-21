#pragma once
#include <iostream>
#include <string>
using namespace std;
class Flight
{
private:
    /* data */
    int flightID;
    string origin;
    string destination;
    string flightDate;
    int seatsAvailable;
    double ticketPrice;

public:
    Flight(int id, string orgn,string dest,string date,int seats,double price);
    virtual void abs()=0;
    virtual void getDetails();
    double getTicketPrice();
    virtual ~Flight() = default;

};



/* 
1. Class: Flight (Abstract Class) 
! • Attributes: 
o flightID: A unique identifier for the flight (type int). 
o origin: The origin of the flight (type string). 
o destination: The destination of the flight (type string). 
o flightDate: The date of the flight (type string). 
o seatsAvailable: The number of available seats (type int). 
o ticketPrice: The price of the ticket (type double). 
• Methods: 
o getDetails(): Virtual method to display the flight details (to be overridden by subclasses).
cout<<"flightid: "<<flightID
        << " orign: "<<orign
        <<" destination: "<<destination
        <<" seatAvailable: "<<seatsAvailable
        <<" ticketPrice: "<<endl;

        Flight(int id, string orgn,string dest,string date,int seats,double price):
        flightID(id),orign(orgn),destination(dest),flightDate(date),seatsAvailable(seats),ticketPrice(price)
    {

    }
*/