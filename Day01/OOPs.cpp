#include <bits/stdc++.h>
using namespace std;

class Car
{
    public:
    string brand;
    string model;
    int year;
    Car(string b, string m, int y){
        brand = b;
        model = m;
        year = y;
    }
    void displayInfo(){
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main(){
    Car car1("Toyota", "Camry", 2020);
    Car car2("Honda", "Civic", 2019);

    Car* car3 = new Car("Ford", "Mustang", 2021);

    car1.displayInfo();
    car2.displayInfo();
    car3->displayInfo();
    delete car3; // free the allocated memory
    return 0;
}