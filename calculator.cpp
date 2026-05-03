#include <iostream>
using namespace std;

int main() {
    double mass, acceleration, force;
    cout << "--- Superior College Physics Calculator ---" << endl;
    cout << "Enter mass (kg): ";
    cin >> mass;
    cout << "Enter acceleration (m/s^2): ";
    cin >> acceleration;
    
    force = mass * acceleration;
    cout << "The calculated Force (Newton) is: " << force << endl;
    
    return 0;
}
