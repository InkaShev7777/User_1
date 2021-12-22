#include "c_Users.h"

c_Users::c_Users()
{
	this->size = 0;
	this->mas = new c_User[this->size];
}

void c_Users::Add(c_User& user)
{
	c_User* new_mas = new c_User[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		new_mas[i] = this->mas[i];
	}
	user.setId(size);
	new_mas[this->size] = user;
	delete[](mas);
	this->mas = new_mas;
	this->size++;
}

void c_Users::Save()
{
	ofstream of;
	of.open("file.txt");
	if (!of.is_open())
	{
		cout << "Error!!!\n";
	}
	else
	{
		of << this->size<<"\n";
		for (int i = 0; i < this->size; i++)
		{
			of << mas[i] << "\n";
		}
		cout << "Запись успешна!!!\n";
	}
	of.close();
}
