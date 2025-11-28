
//Создай иерархию :
//
//Employee(имя, зарплата)
//Manager(команда)
//Developer(язык программирования)
//Переопредели метод printInfo() для каждого.

#include <windows.h>
#include <algorithm>
#include <iostream>
using namespace std;

class Employee 
{
public:
    string name;
    int zp;
    
    virtual void Print_info()
    {
        cout << name << " Получает: "<< zp << endl;
    }

    Employee(string name_1, int zp_1) 
    {
        name = name_1;
        zp = zp_1;

        cout << "Конструктор создан!1 " << endl;
    }
};

class Manager : public Employee 
{
public:
    int comand;

    void Print_info() override
    {
        cout << "Менеджер: " << name << zp << endl <<" Колличество человек в команде: " << comand << endl;
    
    }

    Manager(string name_1, int zp_1, int comand_1) : Employee(name_1,zp_1)
    {
        comand = comand_1;

        cout << "Конструктор создан!2" << endl;
    }


};

class Developer : Employee 
{
public:
    string language_programm;

    void Print_info() override 
    {
        cout << "Developer: " << name << zp << " Язык программирования: " << language_programm << endl;
    
    }

    Developer(string name_1, int zp_1,string language_programm_1) : Employee(name_1, zp_1) 
    {
        language_programm = language_programm_1;

        cout << "Конструктор создан!3" << endl;
    
    }
};




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    locale::global(locale(""));

    Employee e1 = Employee("Ben, ", 175000);
    Manager e2 = Manager("Sara, ", 140000, 7);
    Developer e3 = Developer("DOn, ", 1800000, " C#");

    e1.Print_info();
    e2.Print_info();
    e3.Print_info();
}

