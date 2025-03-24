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
    string firstName;
    string lastName;
    int age;

};

void printPerson(struct person p);
#endif //LABOR1_H
