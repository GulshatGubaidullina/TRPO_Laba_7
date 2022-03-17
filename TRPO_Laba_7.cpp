#include <iostream>
#include <vector>

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
	os << emp.surname << "\n" << emp.name << "\n" << emp.patronymic << "\n" << emp.gender << "\n" << emp.age << "\n" << emp.maritalStatus << "\n" << emp.havingChildren << "\n" << emp.position << "\n" << emp.academicDegree << endl;
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
		cin >> emp.surname;
		cout << "Введите имя-";
		cin >> emp.name;
		cout << "Введите отчество-";
		cin>> emp.patronymic;
		cout << "Введите пол(обозначения: женщина - ж, мужчина - м)-";
		cin >> emp.gender;
		cout << "Введите возраст(сколько полных лет)- ";
		cin >> emp.age;
		cout << "Введите семейный статус(состоите в браке? (Обозначения: да, нет))-";
		cin >> emp.maritalStatus;
		cout << "Введите количество детей(если их нет, введите 0)-";
		cin >> emp.havingChildren;
		cout << "Введите должность-";
		cin>> emp.position;
		cout << "Введите ученую степень-";
		cin >> emp.academicDegree;
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
				cout << "Сотрудник №" << listOfEmployees[i];
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
