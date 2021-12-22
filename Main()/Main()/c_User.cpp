#include "c_User.h"

c_User::c_User()
{
	this->age = 0;
	this->id = 0;
	this->name = "";
	this->surname = "";
}

c_User::c_User(string name, string surname, int age)
{
	this->age = age;
	this->id = 0;
	this->name = name;
	this->surname = surname;
}

long c_User::getId()
{
	return this->id;
}

int c_User::getAge()
{
	return this->age;
}

string c_User::getName()
{
	return string(this->name);
}

string c_User::getSurname()
{
	return string(this->surname);
}

void c_User::setAge(int age)
{
	this->age = age;
}

void c_User::setName(string name)
{
	this->name = name;
}

void c_User::setSurName(string surname)
{
	this->surname = surname;
}
