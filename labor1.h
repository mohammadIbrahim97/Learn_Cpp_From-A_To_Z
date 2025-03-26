//
// Created by moham on 18/03/2025.
//

#ifndef LABOR1_H
#define LABOR1_H
#include <string>

using namespace std;
int mathefunction(int a, int b);
float sinfunction();
int CallByReference(int* numPtr);
int HexadecimalFormat(int* Hexa);
struct person
{
    std::string firstName;
    std::string lastName;
    std::string birthDate;
    int struct_years;
    int struct_months;
    int struct_days;
    int struct_hours;
    int struct_minutes;
    int struct_seconds;
};

void readperson(person &p);
void displayperson(person &p);
int getCurrentYear();
int getCurrentMonth();
int getCurrentDay();
int getCurrentHour();
int getCurrentMinute();
int getCurrentSecond();


#endif //LABOR1_H
