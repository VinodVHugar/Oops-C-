#include <iostream>
#include <string>
using namespace std;

class Flight {
protected:
    string origin;
    string destination;
    double fare;
    string date_of_travel;
    bool foodDrinks;

public:
    Flight(string origin, string destination, string date_of_travel,bool foodDrinks)
        : origin(origin), destination(destination), date_of_travel(date_of_travel), foodDrinks(foodDrinks) {}

    virtual double calculateFare() = 0;
};

class Business : public Flight {
public:
    Business(string origin,string destination,string date_of_travel, bool foodDrinks)
        : Flight(origin, destination, date_of_travel ,foodDrinks) {}

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
        else if ((origin == "USA" && destination == "Singapore") || (origin == "Singapore" && destination == "USA"))
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
            totalFare += 50.0; // Additional charge for food and drinks in business class
        }
        totalFare += totalFare * 0.19; // Add 19% tax
        return totalFare;
    }
};

class Economy : public Flight {
public:
    Economy(string origin, string destination,string date_of_travel, bool foodDrinks)
        : Flight(origin, destination, date_of_travel, foodDrinks) {}

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
        else if ((origin == "USA" && destination == "Singapore") || (origin == "Singapore" && destination == "USA"))
            fare = 900.0;
        else if ((origin == "Australia" && destination == "UAE") || (origin == "UAE" && destination == "Australia"))
            fare = 1400.0;
        else if ((origin == "Australia" && destination == "Singapore") || (origin == "Singapore" && destination == "Australia"))
            fare = 1000.0;
        else if ((origin == "UAE" && destination == "Singapore") || (origin == "Singapore" && destination == "UAE"))
            fare = 800.0;
        else
            fare = 0.0; // Invalid route

        double totalFare = fare;
        if (foodDrinks) {
            totalFare += 25.0; // Additional charge for food and drinks in economy class
        }
        totalFare += totalFare * 0.19; // Add 19% tax
        return totalFare;
    }
};

template <class T>
void bookFlight(string origin, string destination, string date_of_travel, bool foodDrinks) {
    T flight(origin, destination, date_of_travel, foodDrinks);
    double totalFare = flight.calculateFare();
    cout << "Total fare for the flight from "<<origin<<" to "<<destination<<" is "<<totalFare << endl;
}

int main() {
    cout<<"************* Welcome to ABC Airlines *************\n"<<endl<<endl;
    string origin, destination, date_of_travel;
    bool foodDrinks;



    try {
         cout << "Enter origin: ";
         cin >> origin;
        if (origin == "India" || origin == "USA" || origin == "Australia" || origin == "UAE" || origin == "Singapore") {
            cout << "Enter destination: ";
            cin >> destination;
            if (destination == "India" || destination == "USA" || destination == "Australia" || destination == "UAE" || destination == "Singapore") {
                cout<<"Enter Date of Travel: ";
                cin>>date_of_travel;
                cout << "Do you want food/drinks (1 for Yes, 0 for No): ";
                cin >> foodDrinks;
                if (origin != destination) {
                    cout << "Select class: (1 for Business, 2 for Economy): ";
                    int classChoice;
                    cin >> classChoice;

                    if (classChoice == 1) {
                        bookFlight<Business>(origin, destination, date_of_travel, foodDrinks);
                    } else if (classChoice == 2) {
                        bookFlight<Economy>(origin, destination, date_of_travel, foodDrinks);
                    } else {
                        throw "Invalid class choice.";
                    }
                } else {
                    throw "Origin and destination cannot be the same.";
                }
            } else {
                throw "Invalid destination.";
            }
        } else {
            throw "Invalid origin.";
        }
    } catch (const char* msg) {
        cout << "An error occurred: " << msg << endl;
    }
    cout<<endl<<"For Compile Time Instance:"<<endl;
    // Create two instances
    bookFlight<Business>("Singapore", "UAE", "18-07-2023", true);
    bookFlight<Economy>("USA", "Australia", "22-07-2023", false);

    cout<<endl<<"Array of instances:"<<endl;
    // Create an array of instances
    int ARRAY_SIZE = 4;
    Flight* flights[ARRAY_SIZE];

    flights[0] = new Business("India", "Singapore", "11-07-2023", true);
    flights[1] = new Economy("USA", "Australia", "15-08-2023", false);
    flights[2] = new Business("UAE", "Singapore", "17-09-2023", true);
    flights[3] = new Economy("India", "Australia", "22-10-2023", false);

    // Access and use the instances in the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        double totalFare = flights[i]->calculateFare();
        cout << "Total fare for flight " << i+1 << ": " << totalFare << endl;
    }

    // Clean up memory
    for (int i = 0; i < ARRAY_SIZE; i++) {
        delete flights[i];
    }

    return 0;
}
