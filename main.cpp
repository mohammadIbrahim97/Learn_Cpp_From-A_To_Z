#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <fstream>

#include "labor1.h"

using namespace std;

int main(int argc, char *__argv[]) {

    for (int i = 1; i < argc; i++) {
        cout << "Argument" << i << __argv[i] << std::endl;
    }

    // Anforderung 2
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
    // Anforderung 8
    person thePerson;
    readperson(thePerson);
    displayperson(thePerson);
    std::vector<person> personsVector = {thePerson, thePerson, thePerson};
    for (int i = 0; i < personsVector.size(); i++)
    {
        std::cout << i << std::endl;
    }
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


    fstream myfile;
    myfile.open("data.txt", ios::out);
    if (myfile.is_open()) {
        myfile << "Bernd\n";
        myfile << "Bernd\n";
        myfile << "22.10.1975\n";
        myfile << "Sina\n";
        myfile << "Hansen\n";
        myfile << "10.02.2001\n";
        myfile << "Gerda\n";
        myfile << "Schmidt\n";
        myfile << "04.05.1954\n";
        myfile << "Max\n";
        myfile << "Mustermann\n";
        myfile << "31.04.1902\n";
        myfile.close();
    } else {
        cout << "Unable to open file";
    }
    myfile.open("data.txt", ios::in);
    if (myfile.is_open()) {
        string line;
        while (getline(myfile, line)) {
            cout << line << '\n';
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }


    return 0;
}
