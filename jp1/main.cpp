#include <iostream>
#include <string>

using namespace std;

void print(string msg) {
    cout << msg << endl;
}

int main()
{
//    int age;
//    cout << "Ile masz lat?" << endl;
//    cin >> age;
//    cout << "Juz wiem! Masz " << age << " lat!" << endl;

//    age >= 18 ? cout << "Jestes pelnoletni!" : cout << "Nie jestes pelnoletni!";

//    if (age >= 18) {
//        cout << "Jestes pelnoletni!" << endl;
//    } else {
//        cout << "Nie jestes pelnoletni!" << endl;
//    }


    float temp;
    cout << "Podaj temperature: ";
    cin >> temp;

    if (temp > 40) {
        print("Skrajnie goroco");
    }
    if (temp > 35 && temp <= 40) {
        print("Upal");
    }
    if (temp > 25 && temp <= 35) {
        print("Goroco");
    }
    if (temp > 18 && temp <= 25) {
        print("Komfortowo");
    }
    if (temp > 10 && temp <= 18) {
        print("Chlodno");
    }
    if (temp > 0 && temp <= 10) {
        print("Zimno");
    }
    if (temp > -10 && temp <= 0) {
        print("Bardzo zimno");
    }
    if (temp > -20 && temp <= -10) {
        print("Mroz");
    }
    if (temp <= -20) {
        print("Silny mroz");
    }

    int option;
    cin >> option;

    switch(option) {
        case 1:
            cout << "Opcja 1:";
            break;
        case 2:
            cout << "Opcja 2:";
            break;
        case 3:
            cout << "Opcja 3:";
            break;
        case 4:
            cout << "Opcja 4:";
            break;
        default:
            cout << "Nie ma!";
            break;
    }

    return 0;
}

//1) napisz program sprawdzajacy czy z danych odcinkow da sie utworzyc trojkat

//2) Znajdz miejsca zerowe funkcji y=ax^2+bx+c

//3 Przelicznik walut na switch. kursy jako sta³e gbp/usd/eur


