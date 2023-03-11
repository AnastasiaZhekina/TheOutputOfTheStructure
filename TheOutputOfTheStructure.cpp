#include <iostream>
#include <string>
#include <windows.h>no
using namespace std;

struct address {
    string city;
    string street;
    int house;
    int apartment;
    int index;
};
void foo( address adss);

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    address adss;
    
    cin >> adss.city >> adss.street >> adss.house >> adss.apartment >> adss.index;

    foo(adss);
}

void foo(address adss) {
    cout << "Город: " << adss.city << endl <<
        "Улица: " << adss.street << endl <<
        "Номер дома: " << adss.house << endl <<
        "Номер квартиры " << adss.apartment << endl <<
        "Индекс " << adss.index << endl;
};