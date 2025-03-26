//
// Created by Mohammad on 18/03/2025.
//

#include "labor1.h"

#include <chrono>
#include <iostream>
#include <string>
#include <cmath>

const double pi = std::acos(-1);

using namespace std;

int mathefunction(int param1, int param2) {
    int res = pow(param1, param2);
    return  res;
}

float sinfunction() {
    float resul;
    resul = sin(pi / 6);
    return resul;
}

int CallByReference(int *numPtr)
{
    (*numPtr) ++;
    return *numPtr;
}

int HexadecimalFormat(int *Hexa)
{
    cout << "Geben Sie eine Ganzezahl an...";
    cin >> *Hexa;
    cout << hex<< uppercase <<*Hexa;
}

void readperson( person &p)
{
    std:: cout << "Enter the first and Last name: ";
    std:: cin >> p.firstName;
    std:: cin  >> p.lastName;
    std:: cout << "Enter Births date e.g.(TT.MM.JAHR): ";
    std:: cin >> p.birthDate;
    std:: string string_birthyear {p.birthDate.substr(6,4)};
    int int_birthyear {stoi(string_birthyear)};
    p.struct_years = {getCurrentYear()-int_birthyear};

    std:: string string_birthmonth {p.birthDate.substr(3,2)};
    int int_birthmonth {stoi(string_birthmonth)};
    p.struct_months = {getCurrentMonth()};

    std:: string string_birthday {p.birthDate.substr(0,2)};
    p.struct_days = {getCurrentDay()};
    p.struct_hours = {getCurrentHour()};
    p.struct_minutes = {getCurrentMinute()};
    p.struct_seconds = {getCurrentSecond()};

}
void displayperson( person &p)
{
    cout << "First name & last name: " << p.firstName<<" " << p.lastName << std::endl;
    cout << "Birth date: " << p.birthDate << std::endl;
    // cout << readperson << std::endl;
    // cout << "person in years: "<<p.struct_years << std::endl;
    // cout << "person in months: "<<p.struct_months << std::endl;
    // cout << "person in days: "<<p.struct_days << std::endl;
    cout << p.firstName <<" "<< p.lastName <<" was born since: " << p.struct_years<<" Years "<<p.struct_months<< " months "<<p.struct_days << " days "<<p.struct_hours<<" hours "<<p.struct_minutes<< " minuts "<<p.struct_seconds << " Seconds ago."<< endl;



}

int getCurrentYear()
{
    auto start = std::chrono::high_resolution_clock::now();
    // std::time_t time = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    std:: time_t time= std::chrono::system_clock::to_time_t(start);
    std:: tm* localTime = std::localtime(&time);
    int currentyear =localTime->tm_year + 1900;

    return currentyear;
}

int getCurrentMonth()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(start);
    std::tm* localTime = std::localtime(&time);
    int currentmonth = localTime->tm_mon + 1;
    return currentmonth;
}


int getCurrentDay()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(start);
    std::tm* localTime = std::localtime(&time);
    int currentday = localTime->tm_mday;
    return currentday;
}

int getCurrentHour()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(start);
    std::tm* localTime = std::localtime(&time);
    int currenthour = localTime->tm_hour;
    return currenthour;
}
int getCurrentMinute()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(start);
    std::tm* localTime = std::localtime(&time);
    int currentminute = localTime->tm_min;
    return currentminute;
}
int getCurrentSecond()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(start);
    std::tm* localTime = std::localtime(&time);
    int currentsecond = localTime->tm_sec;
    return currentsecond;
}