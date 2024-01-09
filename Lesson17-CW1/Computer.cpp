#include "Computer.h"

Computer::Computer(string name, float frequency, int ozu, bool dvd, float cost)
{
    this->name = name;
    this->frequency = frequency;
    this->ozu = ozu;
    this->dvd = dvd;
    this->cost = cost;
}

int Computer::getOzu() const
{
    return ozu;
}

void Computer::show() const
{
    cout << "Name: " << name << endl;
    cout << "Frequency: " << frequency << "GHz" << endl;
    cout << "Ozu: " << ozu << "GB" << endl;
    cout << "DVD: " << dvd << endl;
    cout << "Cost: " << cost << "UAH" << endl;
}
