// Given the lenth and the width of the retcangle
// The program computes the perimeter and the areas of the triangle

#include <ios>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void set()
{
    cout << fixed << showpoint;
    cout << setprecision(2);
}
int main()
{
    double length(6), width(4), area, perimete;
    cout << "The Program to computes for the Area and the permiter of Triangle\n";
    perimete = 2 * (length + width);
    area = length * width;
    set();
    cout << "The area == " << area << " The perimeter is :: " << perimete << endl;
    string data = "Amone Patick";
    string tempo = {};
    if (data.length() >= 10)
    {
        int i(0);
        while(i < 10)
        {
            tempo.push_back(data[i]);
            i++;
        }
       tempo.push_back('.');
    }
    cout << "|" << setw(10) << tempo  << "|" << endl;
    

}