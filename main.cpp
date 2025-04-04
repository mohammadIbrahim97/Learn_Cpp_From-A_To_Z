#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <fstream>
#include <vector>
#include <stdexcept> // Für Exception Handling

#include "labor1.h"

using namespace std;

int main(int argc, char* argv[]) {


    // Anforderung 1: argv in vector speichern + Ausgabe mit for-Schleife
    std::vector<std::string> arguments;
    for (int i = 1; i < argc; ++i) {
        arguments.push_back(argv[i]);
    }

    for (const auto& arg : arguments) {
        std::cout << "Argument: " << arg << std::endl;
    }

    // Anforderung 2: string → double
    double piValue = stod("3.14159");
    std::cout << "Anforderung 2: double = " << piValue << std::endl;

    // Anforderung 4: transzendente Funktion
    float sinRes = sinfunction();
    std::cout << "Anforderung 4 (sin(pi/6)): " << sinRes << std::endl;

    // Anforderung 5: Cast von double → int
    int intPi = static_cast<int>(piValue);
    std::cout << "Anforderung 5 (int von pi): " << intPi << std::endl;

    // Anforderung 6: Call-by-Reference
    int value {5};  // Anforderung 19
    std::cout << "CallByReference vor Aufruf: " << value << std::endl;
    std::cout << "CallByReference nach Aufruf: " << CallByReference(&value) << std::endl;

    // Anforderung 7: Hexadezimalformat
    int hexa {0};  // Anforderung 19
    HexadecimalFormat(&hexa);

    // Anforderung 8: eigene Struktur
    person thePerson;
    readperson(thePerson);
    displayperson(thePerson);

    // Anforderung 14: Ausgabe des Alters in Text
    printAgeInText(thePerson);

    // Anforderung 9: Vektor von Personen
    std::vector<person> personsVector = {thePerson, thePerson};

    // Anforderung 15: range-based loop + Anforderung 17
    for (const auto& p : personsVector) {
        displayperson(p);
    }

    // Anforderung 18: auto-Rückgabewert
    std::cout << "Anzahl Personen im Vektor: " << getPersonCount(personsVector) << std::endl;

    // Anforderung 10, 11, 12: Datei lesen mit Exception und argv
    if (argc >= 2) {
        std::ifstream inputFile(argv[1]);  // Datei aus argv[1]

        try {
            if (!inputFile.is_open()) {
                throw std::runtime_error("Fehler beim Öffnen der Datei.");
            }

            std::string line;
            while (std::getline(inputFile, line)) {
                std::cout << "Dateizeile: " << line << std::endl;
            }

            inputFile.close();
        } catch (const std::exception& e) {
            std::cerr << "Exception gefangen: " << e.what() << std::endl;
        }
    } else {
        std::cerr << "Bitte geben Sie den Dateinamen als argv[1] an!" << std::endl;
    }

    /*
    fstream myfile;
    myfile.open("data.txt", ios::out);
    if (myfile.is_open()) {
        myfile << "Beispielinhalt\n";
        myfile.close();
    }
    */

    return 0;
}
