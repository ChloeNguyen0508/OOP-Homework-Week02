/* Author: Nguyễn Huỳnh Minh Tuyết
    ID: 24110144
    Project: Build a simple system to manage different types of vehicles in a transportation company.
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string brand;        // hãng xe
    string model;        // mẫu xe
    int releaseYear;     // năm sản xuất
    string color;        // màu xe
    double maxSpeed;     // tốc độ tối đa
    double currentSpeed; // tốc độ hiện tại
    double price;        // giá xe
    string fuelType;     // loại nhiên liệu (xăng, dầu, điện, hybrid)

public:
    // Constructor
    Vehicle(string b, string m, int r, string c,
        double ms, double cs, double p, string f) {
        brand = b;
        model = m;
        releaseYear = r;
        color = c;
        price = p;
        fuelType = f;

		// được hỗ trợ thêm test case so sánh bởi Chat GPT

        // Kiểm tra tốc độ tối đa
        if (ms <= 0) {
            // gán tốc độ tối đa mặc định là 200 km/h
            maxSpeed = 200;
        }
        else {
            maxSpeed = ms;
        }

        // Kiểm tra tốc độ hiện tại
        if (cs > maxSpeed) {
            // gán tốc độ hiện tại bằng tốc độ tối đa nếu vượt quá
            currentSpeed = maxSpeed;
        }
        else if (cs < 0) {
            // gán tốc độ hiện tại là 0 nếu nhập số âm
            currentSpeed = 0;
        }
        else {
            currentSpeed = cs;
        }
    }

    // Setters
    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    void setReleaseYear(int r) { releaseYear = r; }
    void setColor(string c) { color = c; }
    void setMaxSpeed(double ms) { maxSpeed = ms; }
    void setPrice(double p) { price = p; }
    void setCurrentSpeed(double cs) { currentSpeed = cs; }
    void setFuelType(string f) { fuelType = f; }

    // Getters
    string getBrand() { return brand; }
    string getModel() { return model; }
    int getReleaseYear() const { return releaseYear; } // được hỗ trợ sửa sai bởi Chat GPT
    string getColor() { return color; }
    double getMaxSpeed() { return maxSpeed; }
    double getPrice() { return price; }
    double getCurrentSpeed() { return currentSpeed; }
    string getFuelType() { return fuelType; }

    // Hiển thị thông tin xe
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Release Year: " << releaseYear << endl;
        cout << "Color: " << color << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Current Speed: " << currentSpeed << " km/h" << endl;
        cout << "Price: $" << price << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }

    // Tăng tốc
    void accelerate(double increase) {
        if (currentSpeed >= maxSpeed) {
            cout << "The vehicle has reached its maximum speed. No further acceleration is possible!\n";
        }
        else if (currentSpeed + increase > maxSpeed) {
            cout << "Cannot accelerate. Speed would exceed max speed!" << endl;
        }
        else {
            currentSpeed += increase;
            cout << "Accelerated by " << increase
                << " km/h. New speed: " << currentSpeed << " km/h" << endl;
        }
    }
};

int main() {
    // Tạo đối tượng Vehicle
    Vehicle vehicle1("Toyota", "Camry", 2020, "White", 210, 140, 24000, "Gasoline");
    Vehicle vehicle2("Honda", "Civic", 2019, "Black", 200, 85, 22000, "Gasoline");
    Vehicle vehicle3("Ford", "Mustang", 2021, "Red", 0, 20, 35000, "Gasoline");

    // Hiển thị thông tin xe 1
    vehicle1.displayInfo();
    vehicle1.accelerate(90);
    cout << endl;

    // Hiển thị thông tin xe 2
    vehicle2.displayInfo();
    vehicle2.accelerate(50);
    cout << endl;

    // Hiển thị thông tin xe 3 
    // trường hợp có maxSpeed = 0
    vehicle3.displayInfo();
    vehicle3.accelerate(50);

    // Cho phép người dùng nhập thêm một xe mới
    cout << "\n Enter new car \n";
    string userBrand, userModel, userColor, userFuelType;
    int userReleaseYear;
    double userMaxSpeed, userCurrentSpeed, userPrice;

    cout << "Enter car brand: ";
    getline(cin, userBrand);
    cout << "Enter car model: ";
    getline(cin, userModel);
    cout << "Enter year of manufacture: ";
    cin >> userReleaseYear;
    cin.ignore(); // clear buffer
    cout << "Enter car color: ";
    getline(cin, userColor);
    cout << "Enter maximum speed (km/h): ";
    cin >> userMaxSpeed;
    cout << "Enter current speed (km/h): ";
    cin >> userCurrentSpeed;
    cout << "Enter car price ($): ";
    cin >> userPrice;
    cin.ignore();
    cout << "Enter fuel type: ";
    getline(cin, userFuelType);

    // Create vehicle object from user input
    Vehicle userVehicle(userBrand, userModel, userReleaseYear, userColor, userMaxSpeed, userCurrentSpeed, userPrice, userFuelType);

    // Call method on entered vehicle
    cout << "\nVehicle information entered\n";
    userVehicle.displayInfo();
    userVehicle.accelerate(50);

    return 0;
}
