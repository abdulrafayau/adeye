#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brandName;
    int manufacturingYear;

public:
    void setDetails(string carBrand, int carYear) {
        brandName = carBrand;
        manufacturingYear = carYear;
    }

    void displayDetails() {
        cout << "Brand Name: " << brandName << endl;
        cout << "Year: " << manufacturingYear << endl;
    }
};

int main() {
    Car myCar;
    string inputBrand;
    int inputYear;

    cout << "Enter car brand name: ";
    getline(cin, inputBrand);

    cout << "Enter manufacturing year: ";
    cin >> inputYear;

    myCar.setDetails(inputBrand, inputYear);
    myCar.displayDetails();

    return 0;
}