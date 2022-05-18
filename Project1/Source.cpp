#include<iostream>
#include<string>
using namespace std;

class Human {
public:
	void SetAge(int Age) {
		this->Age = Age;
	}
	int GetAge() {
		return Age;
	}
	void SetName(string Name) {
		this->Name = Name;
	}
	string GetName()const {
		return Name;
	}
	void SetSurname(string Surname) {
		this->Surname = Surname;
	}
	string GetSurname() {
		return Surname;
	}
	void SetPatronamic(string Patronamic) {
		this->Patronamic = Patronamic;
	}
	string GetPatronamic() {
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
	string name,surname,patronamic,spec;
	int age,group;
	system("chcp 1251>nul");
	Human first;
	first.SetName("иван");
	Student stud;

	//stud.Stud();
	cout << "Введите возраст: ";
	cin >> age;
	first.SetAge(age);
	cout << "Введите имя: ";
	cin.ignore();
	getline(cin, name);
	first.SetName(name);
	cout << "Введите Фамилию: ";
	getline(cin, surname);
	first.SetSurname(surname);
	cout << "Введите отчество: ";
	getline(cin, patronamic);
	first.SetPatronamic(patronamic);
	//system("cls");
	cout << "Полное имя: "<<first.Fullname();
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