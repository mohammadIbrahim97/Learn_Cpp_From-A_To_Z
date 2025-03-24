//
// Created by Mohammad on 18/03/2025.
//

#include "labor1.h"
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

void printPerson(struct person p)
{
    cout << p.firstName << " " << p.lastName << endl;

}
