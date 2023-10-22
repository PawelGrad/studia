#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Ile masz lat?" << endl;
    cin >> age;
    cout << "Juz wiem! Masz " << age << " lat!" << endl;

    age >= 18 ? cout << "Jestes pelnoletni!" : cout << "Nie jestes pelnoletni!";

//    if (age >= 18) {
//        cout << "Jestes pelnoletni!" << endl;
//    } else {
//        cout << "Nie jestes pelnoletni!" << endl;
//    }

    return 0;
}
