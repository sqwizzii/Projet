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

    cout << "������ �����, ����, ������, ������, �������, ���������, ������ ������� (1-���, 0-�): ";
    cin >> object1.Brand >> object1.color >> object1.width >> object1.height >> object1.length >> object1.power >> object1.water_vapour;

    cout << "������ ������, ������ ����������� �� ����� ����������: ";
    cin >> object1.temperature.high >> object1.temperature.low >> object1.temperature.freeze;

    cout << "������ �������� ������: ";
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

    cout << "������ �����, ����, ������, ������, �������, ���������, ������ ������� (1-���, 0-�): ";
    cin >> object1.Brand >> object1.color >> object1.width >> object1.height >> object1.length >> object1.power >> object1.water_vapour;

    cout << "������ ������, ������ ����������� �� ����� ����������: ";
    cin >> object1.temperature.high >> object1.temperature.low >> object1.temperature.freeze;

    cout << "������ �������� ������: ";
    cin >> object1.speed_of_work;

    cout << "1-�����\n2-����\n3-������\n4-������\n5-�������\n6-���������\n7-�������� ������\n8-������ �������(1-���, 0-�)\n"
        << object1.Brand << endl << object1.color << endl << object1.width << " �����" << endl
        << object1.height << " �����" << endl << object1.length << " �����" << endl
        << object1.power << " ���" << endl << object1.speed_of_work << " ��/�" << endl;

    if (object1.water_vapour)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    cout << "�����������:1-������\n2-������\n3-����������\n" << object1.temperature.high << " *C" << endl
        << object1.temperature.low << " *C" << endl << object1.temperature.freeze << " *C" << endl;

    return 0;
}
