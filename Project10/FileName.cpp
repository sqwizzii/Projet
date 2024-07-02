#1
#include <iostream>
#include <Windows.h>
using namespace std;

struct Temperature
{
    float high;
    float low;
    float freeze;
};

struct Machine
{
    char Brand[100];
    char color[100];
    int width;
    int length;
    int height;
    int power;
    int speed_of_work;
    bool water_vapour;  
    Temperature temperature;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    return 0;
}
#2
#include <iostream>
#include <Windows.h>
using namespace std;

struct Temperature
{
    float high;
    float low;
    float freeze;
};

struct Machine
{
    char Brand[100];
    char color[100];
    int width;
    int length;
    int height;
    int power;
    int speed_of_work;
    bool water_vapour;  
    Temperature temperature;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Machine object1;

    cout << "Введіть Бренд, Колір, Ширину, Висоту, Довжину, Потужність, Парова система (1-так, 0-ні): ";
    cin >> object1.Brand >> object1.color >> object1.width >> object1.height >> object1.length >> object1.power >> object1.water_vapour;

    cout << "Введіть Високу, Низьку температуру та Точку замерзання: ";
    cin >> object1.temperature.high >> object1.temperature.low >> object1.temperature.freeze;

    cout << "Введіть Швидкість роботи: ";
    cin >> object1.speed_of_work;

    return 0;
}
#3
#include <iostream>
#include <Windows.h>
using namespace std;

struct Temperature
{
    float high;
    float low;
    float freeze;
};

struct Machine
{
    char Brand[100];
    char color[100];
    int width;
    int length;
    int height;
    int power;
    int speed_of_work;
    bool water_vapour;  
    Temperature temperature;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Machine object1;

    cout << "Введіть Бренд, Колір, Ширину, Висоту, Довжину, Потужність, Парова система (1-так, 0-ні): ";
    cin >> object1.Brand >> object1.color >> object1.width >> object1.height >> object1.length >> object1.power >> object1.water_vapour;

    cout << "Введіть Високу, Низьку температуру та Точку замерзання: ";
    cin >> object1.temperature.high >> object1.temperature.low >> object1.temperature.freeze;

    cout << "Введіть Швидкість роботи: ";
    cin >> object1.speed_of_work;

    cout << "1-Бренд\n2-колір\n3-ширина\n4-висота\n5-довжина\n6-потужність\n7-швидкість роботи\n8-парова система(1-так, 0-ні)\n"
        << object1.Brand << endl << object1.color << endl << object1.width << " метри" << endl
        << object1.height << " метри" << endl << object1.length << " метри" << endl
        << object1.power << " кВт" << endl << object1.speed_of_work << " об/с" << endl;

    if (object1.water_vapour)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    cout << "температура:1-висока\n2-низька\n3-замерзання\n" << object1.temperature.high << " *C" << endl
        << object1.temperature.low << " *C" << endl << object1.temperature.freeze << " *C" << endl;

    return 0;
}
