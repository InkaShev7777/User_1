#pragma once
#include<string>
#include<iostream>
using namespace std;
class c_User
{
protected:
	long id;
	string name;
	string surname;
	int age;
public:
	c_User();
	c_User(string, string, int);
	friend ostream& operator<<(ostream& out, c_User& user)
	{
		
		out << "Name: " << user.name << "\tSurname: " << user.surname << "\tAge: " << user.age << "\tID: " << user.id << "\n";
		return out;
	}
	long getId();
	int getAge();
	string getName();
	string getSurname();
	void setAge(int);
	void setName(string);
	void setSurName(string);
};

