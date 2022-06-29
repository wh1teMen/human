#include<iostream>
#include<string>
using namespace std;

class Human {
public:
	void SetAge(int Age) {

		this->Age = Age;
		if (this->Age < 1) {
			throw invalid_argument("Ошибка!!!!! Age < 1");
		}
	}
	int GetAge()const noexcept {
		
		return Age;
	}
	void SetName(string Name) {
		this->Name = Name;
		if (Name.size() <= 2) {
			throw exception("ошибка мало символов для имени!!!!");
		}
	}
	string GetName()const noexcept{
		return Name;
	}
	void SetSurname(string Surname) {
		this->Surname = Surname;
		if (Surname.size() <= 2) {
			throw exception("ошибка мало символов для фамилии!!!!");
		}
	}
	string GetSurname()const noexcept  {
		return Surname;
	}
	void SetPatronamic(string Patronamic) {
		this->Patronamic = Patronamic;
		if (Patronamic.size() <= 2) {
			throw exception("ошибка мало символов для отчества!!!!");
		}

	}
	string GetPatronamic()const noexcept {
		return Patronamic;
	}
	string Fullname() {
		string str;
		
		str = Surname + " " + Name + " " + Patronamic + "\n";
		
		return str;
	}

private:
	int Age;
	string Name;
	string Surname;
	string Patronamic;

};
class Student {
public:
	void setPerson(Human person) {
		

	}
	string SetNameStud() {
		return nameStudent.GetName();
		
	}
	void SetGroup(int group) {
		Group = group;
	}
	int GetGroup() {
		return Group;
	}
	void SetSpecialization(string specialization) {
		Specialization = specialization;
	}
	string GetSpecialization() {
		return Specialization;
	}


private:
	Human nameStudent;
	string name;
	int Group;
	string Specialization;


};
class Flat {
public:


private:


};



int main() {


	string name, surname, patronamic, spec;
	int age, group;
	system("chcp 1251>nul");
	Human first;
	first.SetName("иван");
	Student stud;

	//stud.Stud();
	cout << "Введите возраст: ";
	cin >> age;
	try {
		first.SetAge(age);
	}
	catch (exception& ex) {
		std::cerr << ex.what();
	}
	//catch (...) { std::cerr << "indefined exeption"; }
	//first.SetAge(age);
	cout << "\nВведите имя: ";
	cin.ignore();
	getline(cin, name);
	try {
		first.SetName(name);
	}
	catch (exception& ex) {
		std::cerr << ex.what();
	}
	cout << "\nВведите Фамилию: ";
	getline(cin, surname);
	try {
		first.SetSurname(surname);
	}
	catch (exception& ex) {
		std::cerr << ex.what();
	}

	cout << "\nВведите отчество: ";
	getline(cin, patronamic);
	try {
		first.SetPatronamic(patronamic);
	}
	catch (exception& ex) {
		std::cerr << ex.what();
	}






	//system("cls");
	
	cout << "\nПолное имя: " << first.Fullname();
	cout << "Возраст: " << first.GetAge();
	//system("cls");
	Student firstStudent;
	cout << "\nВведите специальность: ";
	getline(cin, spec);
	firstStudent.SetSpecialization(spec);
	cout << "Введите номер группы: ";
	cin >> group;
	firstStudent.SetGroup(group);
	cout << endl;
	//system("cls");
	cout << "специальность: " << firstStudent.GetSpecialization() << "\n";
	cout << "группа: " << firstStudent.GetGroup();
	cout<<"name: "<<first.GetName();
	firstStudent.SetNameStud();
	
	
	




	system("pause>nul");
	return 0;
}