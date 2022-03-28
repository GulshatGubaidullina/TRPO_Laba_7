#include <iostream>
#include <vector>
#include <Windows.h>
#include <iomanip>
#include <iostream>
#include <string>
//using namespace std::basic_istream;

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

	os << "Фамилия" << "\t" << emp.surname << "\n" << "Имя" << "\t" << emp.name << "\n" << "Отчество" << "\t" << emp.patronymic << "\n" << "Пол" << "\t" << emp.gender << "\n" << "Возраст" << "\t" << emp.age << endl;
	cout << "Семейное положение(состоите в браке?)" << "\t" << emp.maritalStatus << "\n" << "Наличие детей" << "\t" << emp.havingChildren << "\n" << "Должность" << "\t" << emp.position << "Ученая степень" << "\t" << emp.academicDegree << endl;
	return os;
}


int main()
{

	setlocale(LC_ALL, "ru");
	vector<CEmployee> listOfEmployees;
choice:
	cout << "Что хотите сделать?\n1 - Добавить сведения о сотруднике\n2 - Посмотреть список всех сотрудников\n3 - Редактировать\n4 - Удалить\n5 - Выйти" << endl;
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
		cin >> emp.position;
		//getline(cin, emp.position, '.');
		SetConsoleCP(866);
		cout << "Введите ученую степень-";
		SetConsoleCP(1251);
		cin >> emp.academicDegree;
		//getline(cin, emp.academicDegree, '.');
		SetConsoleCP(866);
		listOfEmployees.push_back(emp);
		goto choice;
	}
	case 2:
	{
		if (listOfEmployees.size() > 0)
		{
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].surname << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].name << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].patronymic << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].gender << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].age << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].maritalStatus << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].havingChildren << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].position << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].academicDegree << "\t";
			}
			cout << endl;
			/*cout << "Список всех сотрудников:";
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << "Сотрудник №" << i+1<< endl;
				cout << listOfEmployees[i];
			}
			cout << endl;*/
		}
		else
			cout << "Список пуст" << endl;
		goto choice;
	}
	case 3:
	{
		cout << endl;
		if (listOfEmployees.size() > 0)
		{
			cout << "Список всех сотрудников:";
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << "Сотрудник №" << i + 1 << endl;
				cout << listOfEmployees[i];
			}
			cout << endl;
			/*for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].surname << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].name << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].patronymic << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].gender << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].age << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].maritalStatus << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].havingChildren << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].position << "\t";
			}
			cout << endl;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{
				cout << listOfEmployees[i].academicDegree << "\t";
			}
			cout << endl;*/
			/*cout << "Список всех сотрудников:";
			cout << endl;
			cout << listOfEmployees;
			for (int i = 0; i < listOfEmployees.size(); i++)
			{

				cout << "Сотрудник №" << i + 1 << endl;
				cout << listOfEmployees[i];
			}
			cout << endl;*/
		}
		else
			cout << "Список пуст" << endl;
		cout << endl;
		cout << "Выберите номер сотрудника, сведения о котором хотите изменить -";
		int number;
		cin >> number;
		number = number - 1;
		cout << listOfEmployees[number];
		cout << endl;
		choiseChange:
		cout << "Выберете, что хотите изменить:\n1 - Фамилию\n2 - Имя\n3 - Отчество\n4 - Пол\n5 - Возраст\n6 - Семейный статус\n7 - Количество детей\n8 - Должность\n9 - Ученую степень\n10 - Выйти \nВведите порядковый номер - ";
		int elementToBeChanged;
		cin >> elementToBeChanged;
		switch (elementToBeChanged)
		{
		case 1:
		{
			cout << endl;
			cout << "Введите изменение - ";
			SetConsoleCP(1251);
			cin >> listOfEmployees[number].surname;
			SetConsoleCP(866);
			goto choiseChange;
		}
		case 2:
		{
			cout << endl;
			cout << "Введите изменение - ";
			SetConsoleCP(1251);
			cin >> listOfEmployees[number].name;
			SetConsoleCP(866);
			goto choiseChange;
		}
		case 3:
		{
			cout << endl;
			cout << "Введите изменение - ";
			SetConsoleCP(1251);
			cin >> listOfEmployees[number].patronymic;
			SetConsoleCP(866);
			goto choiseChange;
		}
		case 4:
		{
			cout << endl;
			cout << "Введите изменение - ";
			SetConsoleCP(1251);
			cin >> listOfEmployees[number].gender;
			SetConsoleCP(866);
			goto choiseChange;
		}
		case 5:
		{
			cout << endl;
			cout << "Введите изменение - ";
			cin >> listOfEmployees[number].age;
			goto choiseChange;
		}
		case 6:
		{
			cout << endl;
			cout << "Введите изменение - ";
			SetConsoleCP(1251);
			cin >> listOfEmployees[number].maritalStatus;
			SetConsoleCP(866);
			goto choiseChange;
		}
		case 7:
		{
			cout << "Введите изменение - ";
			cin >> listOfEmployees[number].havingChildren;
			goto choiseChange;
		}
		case 8:
		{
			cout << endl;
			cout << "Введите изменение - ";
			SetConsoleCP(1251);
			getline(cin, listOfEmployees[number].position, '.');
			SetConsoleCP(866);
			goto choiseChange;
		}
		case 9:
		{
			cout << endl;
			cout << "Введите изменение - ";
			SetConsoleCP(1251);
			getline(cin, listOfEmployees[number].academicDegree, '.');
			SetConsoleCP(866);
			goto choiseChange;
		}
		case 10:
		{
			break;
		}
		default:
			break;
		}
		goto choice;;
	}
	case 4:
	{
		cout << endl;
		cout << "Что хотите сделать?\n1 - Удалить всех сотрудников\n2 - Удалить определенного сотрудника ";
		int choiceDelete;
		cin >> choiceDelete;
		switch (choiceDelete)
		{
		case 1:
		{
			cout << "Точно хотите удалить?\n Введите 1, если хотите, иначе 0";
			int a;
			cin >> a;
			if (((int)a) > 0) {
				listOfEmployees.clear();
			}
			break;
		}
		case 2:
		{
			cout << "Точно хотите удалить?\n Введите 1, если хотите, иначе 0 - ";
			int a;
			cin >> a;
			if (((int)a) > 0)
			{
				cout << endl;
				cout << "Выберите номер сотрудника, которого хотите удалить -";
				int number;
				cin >> number;
				number = number - 1;
				cout << listOfEmployees[number];
				listOfEmployees.erase(listOfEmployees.begin() + number);
			}
			
			break;
		}
		default:
			break;
		}
		goto choice;;
	}
	case 5:
	{
		break;
	}
	default:
		break;
	}


}
