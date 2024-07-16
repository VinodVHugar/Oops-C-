#include <iostream>
#include <string>
using namespace std;

class Flight {
protected:
    string origin;
    string destination;
    double fare;
    bool foodDrinks;

public:
    Flight(string origin, string destination, bool foodDrinks)
        : origin(origin), destination(destination), foodDrinks(foodDrinks) {}

    virtual double calculateFare() = 0;
};

class Business : public Flight {
public:
    Business(string origin, string destination, bool foodDrinks)
        : Flight(origin, destination, foodDrinks) {}

    double calculateFare() override {
        // Set fare based on the origin and destination
        if ((origin == "India" && destination == "USA") || (origin == "USA" && destination == "India"))
            fare = 2000.0;
        else if ((origin == "India" && destination == "Australia") || (origin == "Australia" && destination == "India"))
            fare = 1500.0;
        else if ((origin == "India" && destination == "UAE") || (origin == "UAE" && destination == "India"))
            fare = 1000.0;
        else if ((origin == "India" && destination == "Singapore") || (origin == "Singapore" && destination == "India"))
            fare = 900.0;
        else if ((origin == "USA" && destination == "Australia") || (origin == "Australia" && destination == "USA"))
            fare = 3000.0;
        else if ((origin == "USA" && destination == "UAE") || (origin == "UAE" && destination == "USA"))
            fare = 1100.0;
        else if ((origin == "USA" and destination == "Singapore") || (origin == "Singapore" && destination == "USA"))
            fare = 1300.0;
        else if ((origin == "Australia" && destination == "UAE") || (origin == "UAE" && destination == "Australia"))
            fare = 1800.0;
        else if ((origin == "Australia" && destination == "Singapore") || (origin == "Singapore" && destination == "Australia"))
            fare = 1400.0;
        else if ((origin == "UAE" && destination == "Singapore") || (origin == "Singapore" && destination == "UAE"))
            fare = 1200.0;
        else
            fare = 0.0; // Invalid route

        double totalFare = fare + 500.0;
        if (foodDrinks) {
            totalFare += 50.0; // Additional charge for food/drinks in business class
        }
        totalFare += totalFare * 0.19; // Add 19% tax
        return totalFare;
    }
};

class Economy : public Flight {
public:
    Economy(string origin, string destination, bool foodDrinks)
        : Flight(origin, destination, foodDrinks) {}

    double calculateFare() override {
        // Set fare based on the origin and destination
        if ((origin == "India" && destination == "USA") || (origin == "USA" && destination == "India"))
            fare = 1600.0;
        else if ((origin == "India" && destination == "Australia") || (origin == "Australia" && destination == "India"))
            fare = 1100.0;
        else if ((origin == "India" && destination == "UAE") || (origin == "UAE" && destination == "India"))
            fare = 600.0;
        else if ((origin == "India" && destination == "Singapore") || (origin == "Singapore" && destination == "India"))
            fare = 500.0;
        else if ((origin == "USA" && destination == "Australia") || (origin == "Australia" && destination == "USA"))
            fare = 2600.0;
        else if ((origin == "USA" && destination == "UAE") || (origin == "UAE" && destination == "USA"))
            fare = 700.0;
        else if ((origin == "USA" and destination == "Singapore") || (origin == "Singapore" && destination == "USA"))
            fare = 900.0;
        else if ((origin == "Australia" && destination == "UAE") || (origin == "UAE" && destination == "Australia"))
            fare = 1400.0;
        else if ((origin == "Australia" && destination == "Singapore") || (origin == "Singapore" and destination == "Australia"))
            fare = 1000.0;
        else if ((origin == "UAE" && destination == "Singapore") || (origin == "Singapore" && destination == "UAE"))
            fare = 800.0;
        else
            fare = 0.0; // Invalid route

        double totalFare = fare;
        if (foodDrinks) {
            totalFare += 25.0; // Additional charge for food/drinks in economy class
        }
        totalFare += totalFare * 0.19; // Add 19% tax
        return totalFare;
    }
};

template <class T>
void bookFlight(string origin, string destination, bool foodDrinks) {
    T flight(origin, destination, foodDrinks);
    double totalFare = flight.calculateFare();
    cout << "Total fare for the flight from " << origin << " to " << destination << " is " << totalFare << endl;
}

int main() {
    cout << "************* Welcome to ABC Airlines *************\n" << endl;
    string origin, destination;
    bool foodDrinks;

    try {
        cout << "Enter origin: ";
        cin >> origin;
        cout << "Enter destination: ";
        cin >> destination;
        cout << "Do you want food/drinks (1 for Yes, 0 for No): ";
        cin >> foodDrinks;

        if ((origin == "India" || origin == "USA" || origin == "Australia" || origin == "UAE" || origin == "Singapore") &&
            (destination == "USA" || destination == "India" || destination == "Australia" || destination == "UAE" || destination == "Singapore")) {
            cout << "Select class: (1 for Business, 2 for Economy): ";
            int classChoice;
            cin >> classChoice;

            if (classChoice == 1) {
                bookFlight<Business>(origin, destination, foodDrinks);
            } else if (classChoice == 2) {
                bookFlight<Economy>(origin, destination, foodDrinks);
            } else {
                throw "Invalid class choice.";
            }
        } else {
            throw "Invalid route.";
        }
    } catch (const char* msg) {
        cout << "An error occurred: " << msg << endl;
    }

    return 0;
}
