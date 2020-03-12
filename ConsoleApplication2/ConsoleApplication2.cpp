#include <iostream>
using namespace std;

struct tovar
{
    int Value;
    double Price;
    int YearOfManufacture;
    char Manufacturer[50];
};

void task1()
{
    const int N = 2;
    tovar kolvo[N];

    for (int i = 0; i < N; i++)
    {
        cout << "\nВведите кол-во товара на складе: ";
        cin >> kolvo[i].Value;
        cout << "\nВведите цену товара: ";
        cin >> kolvo[i].Price;
        cout << "\nВведите год производства товара: ";
        cin >> kolvo[i].YearOfManufacture;
        cout << "\nВведите название компании производителя: ";
        cin.ignore(cin.rdbuf()->in_avail());
        cin.getline(kolvo[i].Manufacturer, 50);
    }

    int theMost = 0;
    for (int i = 0; i < N; i++)
    {
        if (kolvo[i].Value > kolvo[theMost].Value)
            theMost = i;
    }
    cout << "\nБольше всего товара с количеством: " << kolvo[theMost].Value;
    cout << "\nЕго цена: " << kolvo[theMost].Price;
    cout << "\nЕго год производства: " << kolvo[theMost].YearOfManufacture;
    cout << "\nЕго производитель: " << kolvo[theMost].Manufacturer;
}

struct workers
{
    char Surname[56];
    char Name[32];
    char Patronymic[32];
    char Position[40];
    char Gender[7];
    int Date;
};

void task2()
{
    const int N = 2;
    workers num[N];

    for (int i = 0; i < N; i++)
    {
        cout << "\nВведите Фамилию: ";
        cin.ignore(std::cin.rdbuf()->in_avail());
        cin.getline(num[i].Surname, 56);
        cout << "\nВведите Имя: ";
        cin.ignore(std::cin.rdbuf()->in_avail());
        cin.getline(num[i].Name, 32);
        cout << "\nВведите Отчество: ";
        cin.ignore(std::cin.rdbuf()->in_avail());
        cin.getline(num[i].Patronymic, 32);
        cout << "\nВведите Должность: ";
        cin.ignore(std::cin.rdbuf()->in_avail());
        cin.getline(num[i].Position, 32);
        cout << "\nВведите Пол: ";
        cin >> num[i].Gender, 7;
        cout << "\nВведите Дату начала работы: ";
        cin >> num[i].Date;
    }
    cout << "\n\nСотрудники со стажем более 10 лет: " << endl;
    for (int i = 0; i < N; i++)
    {
        if (num[i].Date <= 2010)
        {
            cout << "\nФамилия: " << num[i].Surname << endl;
            cout << "\nИмя: " << num[i].Name << endl;
            cout << "\nОтчество: " << num[i].Patronymic << endl;
            cout << "\nДолжность: " << num[i].Position << endl;
            cout << "\nПол: " << num[i].Gender << endl;
            cout << "\nДата начала работы: " << num[i].Date << endl;
        }
    }
}

int main()
{
    int task;
    setlocale(0, "");
    cout << "Выберите номер задания (доступны : 1, 2): ";
    cin >> task;
    switch (task)
    {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    }
}
