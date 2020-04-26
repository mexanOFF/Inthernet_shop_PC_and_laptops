// Inthernet_shop_PC_and_laptops.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#pragma warning(disable : 4996)
    
using namespace  std;   

void menu_first_level();
void admin(); 
void manager();
void user();

int main()
{
    setlocale(LC_ALL, "Russian");

    menu_first_level();
    
    return 0;
}

void menu_first_level() {

    cout << "---Вход в систему---" << endl << endl;;
    cout << "1. Администратор (требуется пароль и логин)" << endl;
    cout << "2. Менеджер (требуется пароль и логин)" << endl;
    cout << "3. Пользователь" << endl;
    cout << "4. Выход (нажмите любую клавишу)" << endl;
    int x;
    cin >> x;

    switch (x)
    {
    case 1:
        admin();
        break;
    case 2:
        manager();
        break;
    case 3:
        user();
        break;
    default:
        system("cls");
        cout << "---Работа программы успешно завершена---" << endl;
    }
    /* system("cls");
    cout << "Вы действительно хотите выйти?" << endl;
   */

   /*if (true)
   {

   };  */

}
void admin() {
    system("cls");
    char first[6];
    char second[100];
    FILE* adminka_ptr;
    adminka_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Admin_data.txt", "r");

    fgets(first, 6, adminka_ptr); // Получили логин в First 
    fgets(second, 6, adminka_ptr); // Получли пароль в Second
    fclose(adminka_ptr); // Закрывает файл txt
    
    char chec_pass[100];
    cout << "---Введите пароль---" << endl;
    cin >> chec_pass;

    if (strcmp(second, chec_pass) == 0)
    {
        system("cls");
        cout << "Добро пожаловать " << first << "!" << endl << endl;
        cout << "---Выберите действие---" << endl;
    }
    else
    {
        system("cls");
        cout << "---Неверный пароль---" << endl << endl;
        system("pause");
        system("cls");
        menu_first_level();
    }
}
void manager() {
    system("cls");
    char first_m[6];
    char second_m[100];
    FILE* manag_ptr;
    manag_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Manager_data.txt", "r");

    fgets(first_m, 6, manag_ptr); // Получили логин в First_m
    fgets(second_m, 6, manag_ptr); // Получли пароль в Second_m
    fclose(manag_ptr); // Закрывает файл txt

    char chec_pass_m[100];
    cout << "---Введите пароль---" << endl;
    cin >> chec_pass_m;

    if (strcmp(second_m, chec_pass_m) == 0)
    {
        system("cls");
        cout << "Добро пожаловать " << first_m << "!" << endl << endl;
        cout << "---Выберите действие---" << endl;
    }
    else
    {
        system("cls");
        cout << "---Неверный пароль---" << endl << endl;
        system("pause");
        system("cls");
        menu_first_level();
    }
}
 void user()
 {
    system("cls");
    cout << "Добро пожаловать! Вы вошли как пользователь. " << endl;
}
