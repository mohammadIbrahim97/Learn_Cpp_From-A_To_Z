#include "labor1.h"

#include <chrono>
#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <vector>
#include <ctime>
#include <sstream>

const double pi = std::acos(-1);

using namespace std;

// Anforderung 4
int mathefunction(int param1, int param2) {
    int res = pow(param1, param2);
    return res;
}

// Anforderung 3
float sinfunction() {
    float resul;
    resul = sin(pi / 6);
    return resul;
}

// Anforderung 6, 20
int CallByReference(int* numPtr) {
    (*numPtr)++;
    return *numPtr;
}

// Anforderung 7
int HexadecimalFormat(int* Hexa) {
    cout << "Geben Sie eine Ganzzahl ein: ";
    cin >> *Hexa;
    cout << "Hexadezimal: " << hex << uppercase << *Hexa << endl;
    return *Hexa;
}

// Anforderung 18
auto getPersonCount(const std::vector<person>& persons) -> size_t {
    return persons.size();
}

// Anforderung 8, 13

void readperson(person &p)
{
    std::cout << "Enter the first and Last name: ";
    std::cin >> p.firstName >> p.lastName;
    std::cout << "Enter Birth date (TT.MM.JJJJ): ";
    std::cin >> p.birthDate;

    std::tm birth_tm = {};
    std::istringstream ss(p.birthDate);
    ss >> std::get_time(&birth_tm, "%d.%m.%Y");
    if (ss.fail()) {
        std::cerr << "Ungültiges Datumsformat!" << std::endl;
        return;
    }

    auto birth_time = std::chrono::system_clock::from_time_t(std::mktime(&birth_tm));
    auto now = std::chrono::system_clock::now();
    auto duration = now - birth_time;

    auto total_seconds = std::chrono::duration_cast<std::chrono::seconds>(duration).count();
    auto total_minutes = total_seconds / 60;
    auto total_hours = total_minutes / 60;
    auto total_days = total_hours / 24;
    auto total_years = total_days / 365;  // grob

    p.struct_years = static_cast<int>(total_years);
    p.struct_days = static_cast<int>(total_days % 365);
    p.struct_hours = static_cast<int>(total_hours % 24);
    p.struct_minutes = static_cast<int>(total_minutes % 60);
    p.struct_seconds = static_cast<int>(total_seconds % 60);
}


// Anforderung 9, 14, 15
void displayperson(const person &p) {
    cout << "Name: " << p.firstName << " " << p.lastName << endl;
    cout << "Geburtsdatum: " << p.birthDate << endl;
    cout << "Alter: " << p.struct_years << " Jahre, "
         << p.struct_months << " Monate, "
         << p.struct_days << " Tage." << endl;
}

// Anforderung 14
std::string numberToGermanText(int number) {
    static const std::array<std::string, 20> units{
        "null", "eins", "zwei", "drei", "vier", "fünf", "sechs",
        "sieben", "acht", "neun", "zehn", "elf", "zwölf", "dreizehn",
        "vierzehn", "fünfzehn", "sechzehn", "siebzehn", "achtzehn", "neunzehn"
    };

    static const std::array<std::string, 10> tens{
        "", "", "zwanzig", "dreißig", "vierzig", "fünfzig", "sechzig",
        "siebzig", "achtzig", "neunzig"
    };

    if (number < 20) {
        return units[number];
    } else {
        int unit = number % 10;
        int ten = number / 10;
        if (unit == 0) return tens[ten];
        return units[unit] + "und" + tens[ten];
    }
}

void printAgeInText(const person& p) {
    std::cout << p.firstName << " ist " << numberToGermanText(p.struct_years)
              << " Jahre alt!" << std::endl;
}

// Anforderungen 13 (chrono)
int getCurrentYear() {
    auto now = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(now);
    std::tm* local = std::localtime(&t);
    return local->tm_year + 1900;
}
int getCurrentMonth() {
    auto now = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(now);
    std::tm* local = std::localtime(&t);
    return local->tm_mon + 1;
}
int getCurrentDay() {
    auto now = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(now);
    std::tm* local = std::localtime(&t);
    return local->tm_mday;
}
int getCurrentHour() {
    auto now = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(now);
    std::tm* local = std::localtime(&t);
    return local->tm_hour;
}
int getCurrentMinute() {
    auto now = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(now);
    std::tm* local = std::localtime(&t);
    return local->tm_min;
}
int getCurrentSecond() {
    auto now = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(now);
    std::tm* local = std::localtime(&t);
    return local->tm_sec;
}
