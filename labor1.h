#ifndef LABOR1_H
#define LABOR1_H

#include <string>
#include <vector>

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

// Anforderungen 3, 6, 20, 21, 22
int mathefunction(int a, int b);
float sinfunction();
int CallByReference(int* numPtr);
int HexadecimalFormat(int* Hexa);

void readperson(person &p);
void displayperson(const person &p);
int getCurrentYear();
int getCurrentMonth();
int getCurrentDay();
int getCurrentHour();
int getCurrentMinute();
int getCurrentSecond();

auto getPersonCount(const std::vector<person>& persons) -> size_t;
std::string numberToGermanText(int number);
void printAgeInText(const person& p);

#endif //LABOR1_H
