#include <iostream>
#include "c_User.h";
#include "c_Users.h";
#include<string>
int main()
{
    setlocale(0, "");
    int vibor;
    string name;
    string surname;
    int age;
    cout << "������� ���: ";
    cin >> name;
    cout << "������� �������: ";
    cin >> surname;
    cout << "������� �������: ";
    cin >> age;
    c_User* user = new c_User(name, surname, age);
    c_Users users;
    users.Add(*user);
    users.Save();
 
    do
    {
       
        system("cls");
        cout << "\t����\n";
        cout << "1 - �������� ������������\n";
        cout << "2 - ��������� ��� ���������� � ������������� � ����\n";
        cout << "3 - ����� ���������� � �������������\n";
        cout << "0 - �����\n";
        cout << "�������� ���� �����: ";
        cin >> vibor;
       
        switch (vibor)
        {
        case 1:
            system("cls");
            cout << "������� ���: ";
            cin >> name;
            cout << "������� �������: ";
            cin >> surname;
            cout << "������� �������: ";
            cin >> age;
            user->setName(name);
            user->setSurName(surname);
            user->setAge(age);
            users.Add(*user);
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            users.Save();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            cout << user;
            system("pause");
            system("cls");
            break;
       
        }

    } while (vibor != 0);

}
    
