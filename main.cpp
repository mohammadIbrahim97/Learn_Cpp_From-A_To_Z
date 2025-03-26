#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include "labor1.h"

using namespace std;

int main(int argc, char *__argv[]) {

    for (int i = 1; i < argc; i++) {
        cout << "Argument" << i << __argv[i] << std::endl;
    }

   /*
    * // Anforderung 2
    const char s1[5] {"3.14"};
    // Anforderung 3
    // NOT including <xstring> OR <string> in the same file cause the identifier "stod" is undefined error
    cout  <<"Anforderung 2: "<< stod(s1) << endl;
    // Anforderung 3
    cout <<"Anforderung 3: "<< sinfunction()<< endl;
    // Anforderung 4
    cout <<"Anforderung 4: "<<mathefunction(2, 3) << endl;
    // Anforderung 5

    // Anforderung 6
    int value {5};
    cout << "CallByReference before: " << value << endl;
    cout << "CallByReference After : " << CallByReference(&value) << endl;
    int Hexa;
    cout << "HexadecimalFormat: " << HexadecimalFormat(&Hexa) << endl;
    --------*/
    // Anforderung 8
    person thePerson;
    readperson(thePerson);
    displayperson(thePerson);

    // int year = getCurrentYear();
    // cout << year << endl;
    // int month = getCurrentMonth();
    // cout << month << endl;
    // int day = getCurrentDay();
    // cout << day << endl;
    // int hour = getCurrentHour();
    // cout << hour << endl;
    // int minute = getCurrentMinute();
    // cout << minute << endl;
    // int second = getCurrentSecond();
    // cout << second << endl;




    return 0;
}
