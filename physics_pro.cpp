#include <iostream>
#include <cmath>
using namespace std;

void calculateVelocity() {
    double u, a, t;
    cout << "\n--- Final Velocity Calculator (v = u + at) ---" << endl;
    cout << "Enter initial velocity (u) in m/s: "; cin >> u;
    cout << "Enter acceleration (a) in m/s^2: "; cin >> a;
    cout << "Enter time (t) in seconds: "; cin >> t;
    cout << "Final Velocity (v) is: " << (u + (a * t)) << " m/s" << endl;
}

int main() {
    int choice;
    cout << "Superior College Physics Lab v2.0" << endl;
    cout << "1. Calculate Force\n2. Calculate Velocity\nSelect Option: ";
    cin >> choice;

    if(choice == 2) calculateVelocity();
    else cout << "Feature coming soon for Superior College student project!" << endl;

    return 0;
}
