#pragma once
#include "c_User.h";
#include<fstream>
class c_Users
{
	int size;
	c_User* mas;
public:
	c_Users();
	void Add(c_User& user);
	void Save();
};

