//
// Created by moham on 04/04/2025.
//

#include "TeilA.h"
#include <iostream>
#include <string>


A::A(int wert)
{
    _nptr = new int(wert);

    _aptr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        _aptr[i] = 42;
    }

    std::cout << "Constructor A called " <<*_nptr << std::endl;
}
A::~A()
{
   if (nullptr != _nptr)
   {
       std::cout << "Class A destructor " << *_nptr << std::endl;
   }
    else
    {
        std::cout<< "Class A destructor nullptr" << std::endl;
    }

    delete _nptr;
    delete[] _aptr;


    _nptr = nullptr;
    _aptr = nullptr;
}
