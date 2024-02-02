/* Question 01 */

#include <iostream>
#include <string>
using namespace std;

// Base class Car
class Car
{
protected:
   string name;
   string model;
   int year;

public:
   void setdata(string name, string model, int year)
   {
      this->name = name;
      this->model = model;
      this->year = year;
   }

   virtual void getdata()
   {
      cout << "Car Information: " << endl
           << year << " " << name << " " << model << endl;
   }
};

// Derived class for ElectricCar
class ElectricCar : public Car
{
private:
   double batteryCapacity;

public:
   void setBatteryCapacity(int batteryCapacity)
   {
      this->batteryCapacity = batteryCapacity;
   }

   void getdata() override
   {
      Car::getdata();
      cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
   }
};

// Derived class for GasCar
class GasCar : public Car
{
private:
   double fuelEfficiency;

public:
   void setFuelEfficiency(int fuelEfficiency)
   {
      this->fuelEfficiency = fuelEfficiency;
   }

   void getdata() override
   {
      Car::getdata();
      cout << "Fuel Efficiency: " << fuelEfficiency << " MPG" << endl;
   }
};

int main()
{
   string CarType;
   cout << "Enter car type (Electric/Gas): ";
   cin >> CarType;

   if (CarType == "Electric")           // For Electric Cars
   {
      string name, model;
      int Year;
      double BatteryCapacity;
      ElectricCar Car;

      cout << "Enter Name: ";
      cin >> name;
      cout << "Enter model: ";
      cin >> model;
      cout << "Enter year: ";
      cin >> Year;
      cout << "Enter battery capacity (kWh): ";
      cin >> BatteryCapacity;

      Car.setdata(name, model, Year);
      Car.setBatteryCapacity(BatteryCapacity);
      Car.getdata();
   }
   else if (CarType == "Gas")            // For Gas Cars
   {
      string name, model;
      int year;
      double fuelEfficiency;
      GasCar Car;

      cout << "Enter Name: ";
      cin >> name;
      cout << "Enter model: ";
      cin >> model;
      cout << "Enter year: ";
      cin >> year;
      cout << "Enter fuel efficiency (MPG): ";
      cin >> fuelEfficiency;

      Car.setdata(name, model, year);
      Car.setFuelEfficiency(fuelEfficiency);
      Car.getdata();
   }
   else
   {
      cout << "Invalid Entry!" << endl;
   }
   return 0;
}
