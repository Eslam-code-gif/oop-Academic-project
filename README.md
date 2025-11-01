# ✈️ Flight Reservation System

This project is a simple flight reservation management system written in C++. It utilizes Object-Oriented Programming (OOP) concepts to manage different types of flights (Domestic and International), customers, and reservations.

## 🌟 Key Features

* **Polymorphic Structure:** Uses an abstract `Flight` class as a base, with specialized subclasses (`DomesticFlight` and `InternationalFlight`) that inherit from it and override its functionality.
* **Separation of Concerns:** Clear division of responsibilities among the classes:
    * `Admin`: For adding and managing flights and customers.
    * `Customer`: For managing their own bookings.
    * `Reservation`: For linking a customer to a specific flight.
* **Data Management:** Uses `std::vector` to manage lists of flights, customers, and reservations.

---

## 🏛️ Class Structure

This diagram illustrates the basic relationships between the classes in the project.



### 1. `Flight` (Abstract Base Class)

* **Description:** The base class representing any flight. It cannot be instantiated directly.
* **Attributes:** `flightID`, `origin`, `destination`, `flightDate`, `seatsAvailable`, `ticketPrice`.
* **Key Methods:**
    * `getDetails()`: A virtual method to display flight details.
    * `getTicketPrice()`: Returns the ticket price.
    * `abs()`: A pure virtual function that makes this class abstract.

### 2. `DomesticFlight` (Subclass)

* **Inherits from:** `Flight`
* **Description:** Represents a domestic flight.
* **Additional Attributes:** `extraCharge` (additional fee).
* **Overridden Methods:**
    * `getDetails()`: Displays all base flight details plus the extra charge.

### 3. `InternationalFlight` (Subclass)

* **Inherits from:** `Flight`
* **Description:** Represents an international flight.
* **Additional Attributes:** `visaRequired` (boolean).
* **Overridden Methods:**
    * `getDetails()`: Displays all base flight details plus the visa requirement.

### 4. `Customer`

* **Description:** Represents the customer making the bookings.
* **Attributes:** `customerID`, `name`, `address`, `phone`, `vector<Flight*> bookedFlights`.
* **Key Methods:**
    * `bookFlight(Flight* flight)`: Adds a flight to the customer's list of booked flights.
    * `cancelReservation(Flight* flight)`: Removes a flight from the booked list.
    * `getDetails()`: Displays the customer's profile and their list of booked flights.

### 5. `Admin`

* **Description:** Represents the system administrator.
* **Attributes:** `adminID`, `name`.
* **Key Methods:** (These methods take vectors by reference `&` to modify the main data)
    * `addFlight(vector<Flight*>& flights, ...)`
    * `addCustomer(vector<Customer>& customers, ...)`
    * `viewAllCustomers(const vector<Customer>& ...)`
    * `viewAllFlights(const vector<Flight*>& ...)`
    * `viewAllReservations(const vector<Reservation>& ...)`

### 6. `Reservation`

* **Description:** Represents a single booking, linking a `Customer` and a `Flight`.
* **Attributes:** `reservationID`, `Customer customer`, `Flight* flight`, `reservationDate`, `totalAmount`.
* **Key Methods:**
    * `calculateTotalAmount()`: Calculates the total cost (currently just pulls the flight's ticket price).
    * `getDetails()`: Displays full reservation details (customer info and flight info).

---

## 🚀 Key Concepts Demonstrated

* **Inheritance:** `DomesticFlight` and `InternationalFlight` inherit common properties and methods from `Flight`.
* **Polymorphism:** In `main.cpp`, `DomesticFlight` and `InternationalFlight` objects are stored in a `vector<Flight*>`. When `flight->getDetails()` is called, the correct (domestic or international) version of the method is executed at runtime.
* **Abstraction:** The `Flight` class is abstract, hiding complexity and providing a common interface for handling all flight types.

---

## ⚙️ How to Compile & Run

To compile this project, you will need to compile all `.cpp` files together. You can use the following command in your terminal:

```bash
g++ main.cpp Flight.cpp DomesticFlight.cpp InternationalFlight.cpp Customer.cpp Admin.cpp Reservation.cpp -o FlightSystem
