#include <iostream>
using namespace std;

int main()
{
    int id;
    cout << "Enter your last 3 digits of your student id: ";
    cin >> id;


    if (((id % 6) + 1) == 1) {
        cout << "3D Fan Blade";
    }
    else if (((id % 6) + 1) == 2) {
        cout << "3D Bulb with Filament";
    }
    else if (((id % 6) + 1) == 3) {
        cout << "3D Chair";
    }
    else if (((id % 6) + 1) == 4) {
        cout << "3D DNA Strand";
    }
    else if (((id % 6) + 1) == 5) {
        cout << "3D CPU Fan";
    }
    else if (((id % 6) + 1) == 6) {
        cout << "3D USB Plug";
    }
    else {
        cout << "Invalid ID";
    }

    return 0;
}