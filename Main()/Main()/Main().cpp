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
    cout << "Введите имя: ";
    cin >> name;
    cout << "Введите фамилию: ";
    cin >> surname;
    cout << "Введите возраст: ";
    cin >> age;
    c_User* user = new c_User(name, surname, age);
    c_Users users;
    users.Add(*user);
    users.Save();
 
    do
    {
       
        system("cls");
        cout << "\tМеню\n";
        cout << "1 - Добавить пользователя\n";
        cout << "2 - Сохранить всю информацию о пользователях в файл\n";
        cout << "3 - Вывод информации о пользователях\n";
        cout << "0 - Выход\n";
        cout << "Сделайте свой выбор: ";
        cin >> vibor;
       
        switch (vibor)
        {
        case 1:
            system("cls");
            cout << "Введите имя: ";
            cin >> name;
            cout << "Введите фамилию: ";
            cin >> surname;
            cout << "Введите возраст: ";
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
    
