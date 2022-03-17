#include <iostream>
#include <vector>
#include <Windows.h>
#include<iomanip>
using namespace std;

class CEmployee
{
	public:
	string surname;
	string name;
	string patronymic;
	string gender;
	string age;
	string maritalStatus;
	string havingChildren;
	string position;
	string academicDegree;

	
};

ostream& operator<<(ostream& os, const CEmployee& emp)
{
	os << "Фамилия" << setw(20) << emp.surname << "\n" << "Имя" << setw(20) << emp.name << "\n" << "Отчество" << setw(20) << emp.patronymic << "\n" << "Пол" << setw(20) << emp.gender << "\n" << "Возраст" << setw(20) << emp.age << endl;
	cout << "Семейное положение(состоите в браке?)" << setw(20) << emp.maritalStatus << "\n" << "Наличие детей" << setw(20) << emp.havingChildren << "\n" << "Должность" << setw(20) << emp.position << "\n" << "Ученая степень" << setw(20) << emp.academicDegree << endl;
	return os;
}


int main()
{
	setlocale(LC_ALL, "ru");
	vector<CEmployee> listOfEmployees;
choice:
	cout << "Что хотите сделать?\n1 - Добавить сведения о сотруднике\n2 - Посмотреть список всех сотрудников\n3 - Выйти" << endl;
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		CEmployee emp;
		cout << "Введите фамилию- ";
		SetConsoleCP(1251);
		cin >> emp.surname;
		SetConsoleCP(866);
		cout << "Введите имя-";
		SetConsoleCP(1251);
		cin >> emp.name;
		SetConsoleCP(866);
		cout << "Введите отчество-";
		SetConsoleCP(1251);
		cin>> emp.patronymic;
		SetConsoleCP(866);
		cout << "Введите пол(обозначения: женщина - ж, мужчина - м)-";
		SetConsoleCP(1251);
		cin >> emp.gender;
		SetConsoleCP(866);
		cout << "Введите возраст(сколько полных лет)- ";
		cin >> emp.age;
		cout << "Введите семейный статус(состоите в браке? (Обозначения: да, нет))-";
		SetConsoleCP(1251);
		cin >> emp.maritalStatus;
		SetConsoleCP(866);
		cout << "Введите количество детей(если их нет, введите 0)-";
		cin >> emp.havingChildren;
		cout << "Введите должность-";
		SetConsoleCP(1251);
		cin>> emp.position;
		SetConsoleCP(866);
		cout << "Введите ученую степень-";
		SetConsoleCP(1251);
		cin >> emp.academicDegree;
		SetConsoleCP(866);
		listOfEmployees.push_back(emp);
		goto choice;
	}
	case 2:
	{
		if (listOfEmployees.size() > 0)
		{
			cout << "Список всех сотрудников:";
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << "Сотрудник №" << i+1<< endl;
				cout << listOfEmployees[i];
			}
			cout << endl;
		}
		else
			cout << "Список пуст" << endl;
		goto choice;
	}
	case 3:
	{
		break;
	}
	default:
		break;
	}


}
