//
// Created by moham on 04/04/2025.
//

#ifndef TEILA_H
#define TEILA_H

class A
{

private:
    int *_nptr = nullptr;
    int *_aptr = nullptr;

public:
    explicit A(int wert);
    ~A();

    void print();
};



#endif //TEILA_H
