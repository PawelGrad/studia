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

//    int tab[5];
//    for (int i = 0; i < 5; i++) {
//        cin >> tab[i];
//    }

//    for (int i : tab) {
//        cout << i << endl;
//    }

    int tabSize;
    cin >> tabSize;
    int *arr = new int(tabSize);
    for (int i = 0; i < tabSize - 1; i++) {
        cin >> arr[i];
    }

    return 0;
}


//1) napisz program sprawdzajacy czy z danych odcinkow da sie utworzyc trojkat

//2) Znajdz miejsca zerowe funkcji y=ax^2+bx+c

