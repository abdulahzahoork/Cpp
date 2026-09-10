// Vehicle → Car → SportsCar

// Objective
// Design a vehicle hierarchy.

// Class Structure

// Vehicle
// Data Members
// brand
// model
// Functions
// displayVehicle()

// Car
// Data Members
// fuelType
// seatingCapacity
// Functions
// displayCar()

// SportsCar
// Data Members
// topSpeed
// turboMode (ON/OFF)
// Functions
// displaySportsCar()

// Requirements
// Input sports car details.
// Display complete specifications.



#include <iostream>
#include <string>

using namespace std;

class Vehicle{
    private: 
        string brand;
        string model;
    public: 
        Vehicle(string brand, string model): brand(brand), model(model) {}

        string getBrand() const {
            return brand;
        }

        string getModel() const {
            return model;
        }

        virtual void display() const {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
        }
};

class Car : public Vehicle {
    private: 
        string fuelType;
        int seatingCapacity;
    public: 
        Car(string brand, string model, string fuelType, int seatingCapacity) :  Vehicle(brand, model), fuelType(fuelType), seatingCapacity(seatingCapacity) {}

        string getFuelType() const {
            return fuelType;
        }

        int getSeatingCapacity() const {
            return seatingCapacity;
        }

        void display() const override {
            Vehicle::display();
            cout << "Fuel Type: " << fuelType << endl;
            cout << "Seating Capacity: " << seatingCapacity << endl;
        }
};


class SportsCar : public Car{
    private: 
        int topSpeed;
        bool turboMode;
    public: 
        SportsCar(string brand, string model, string fuelType, int seatingCapacity, int topSpeed, bool turboMode) : Car(brand, model, fuelType, seatingCapacity), topSpeed(topSpeed), turboMode(turboMode) {}

        int getTopSpeed() const {
            return topSpeed;
        }

        bool getTurboMode() const {
            return turboMode;
        }

        void display() const override {
            Car :: display();
            cout << "Top Speed: " << topSpeed << endl;
            cout << "Turbo Mode: " << ((turboMode)? "ON": "OFF") << endl;
        }
};

int main() {
    string brand, model, fuelType;
    int seatingCapacity, topSpeed;
    bool turboMode;

    cout << "Enter brand name: ";
    getline(cin, brand);

    cout << "Enter model: ";
    getline(cin, model);

    cout << "Enter fuelType: ";
    getline(cin, fuelType);

    cout << "Enter seating capacity: ";
    cin >> seatingCapacity;
    cin.ignore();

    cout << "Enter Turbo Mode (1/0): ";
    cin >> turboMode;

    cout << "Enter Top speed: ";
    cin >> topSpeed;
    cin.ignore();

    SportsCar s (brand, model, fuelType, seatingCapacity, topSpeed, turboMode);

    s.display();

    return 0;
}