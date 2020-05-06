// Inthernet_shop_PC_and_laptops.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

#pragma warning(disable : 4996)
    
using namespace  std;   
int gl_counter;

void menu_first_level();
void admin(); 
void menu_second_lavel_admin();
void manager();
void menu_second_lavel_manager();
void user();
void menu_second_lavel_user();

void case_1();
void case_2();
void case_3();
void case_4();
void case_5();
void case_6();
void case_7();
void case_8();
void case_9();
void case_10();

void move_admin();


struct neasted 
{
    char price[6] = {};
    char request[5] = {};
};

struct list
{
    char type[10] = {};
    char processor[15] = {};
    char video_card[15] = {};
    char ram[6] = {};
    neasted helper;
};
list database[50];
size_t counter =0;

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
    /*case 4:
         case_1();
        break;
        */
    default:
        system("cls");
        cout << "---Работа программы успешно завершена---" << endl;
    }
    
}

void admin() {
    system("cls");
    char first[10];
    char second[100];
    FILE* adminka_ptr;
    adminka_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Admin_data.txt", "r");

    fscanf(adminka_ptr, "%s", first); // Получили логин в First 
    fscanf(adminka_ptr, "%s", second); // Получли пароль в Second
    fclose(adminka_ptr); // Закрывает файл txt
    
    char chec_pass[100];
    cout << "---Введите пароль---" << endl;
    cin >> chec_pass;

    if (strcmp(second, chec_pass) == 0)
    {
        system("cls");
        cout << "Добро пожаловать " << first << "!" << endl << endl;
        cout << "---Выберите действие---" << endl<<endl;
        menu_second_lavel_admin();
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
void menu_second_lavel_admin() 
{
    cout << "1.  Просмотр и редактирование базы данных" << endl;
    cout << "2.  Добавление новых сборок ПК и лэптопов." << endl;
    cout << "3.  Удаление определённой модели." << endl;
    cout << "4.  Редактирование существующей базы данных." << endl;
    cout << "6.  Отсортировать по наиболее продаваемым." << endl;
    cout << "7.  Отсортировать по наиболее дорогим." << endl;
    cout << "8.  Отсортировать по наиболее дешовым." << endl;
    cout << "9.  Добавление новых менеджеров." << endl;
    cout << "10. Изменение пароля и логина у пользователей." <<endl;
    cout << "11. Смена учётной записи."<< endl;
    int y;
    cin >> y;

    switch (y)
    {
    case 1:
        system("cls");
        case_1();
        break;
    case 2:
        system("cls");
        case_2();
        break;
    case 3:
        
        break;
    case 4:

        break;
    case 5:

        break;
    case 6:

        break;
    case 7:

        break;
    case 8:

        break;
    case 9:

        break;
    case 10:
        
        break;
    case 11:
        system("cls");
        main();
        break;
    }
}

void manager() {
    system("cls");
    char first_m[10];
    char second_m[100];
    FILE* manag_ptr;
    manag_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Manager_data.txt", "r");

    fscanf(manag_ptr, "%s", first_m); // Получили логин в First_m
    fscanf(manag_ptr, "%s", second_m); // Получли пароль в Second_m
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
void menu_second_lavel_manager()
{
}

void user() 
{
}
void menu_second_lavel_user()
 {
 }

void case_1() {
   
    
    FILE* base_ptr;
    base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "r");

    cout << setw(3) << setfill(' ') << left << '№' << " "
        << setw(8) << setfill(' ') << left << "Тип" << " "
        << setw(17) << setfill(' ') << left << "Процессор" << " "
        << setw(10) << setfill(' ') << left << "Видеокарта" << " "
        << setw(5) << setfill(' ') << left << "Память" << " "
        << setw(5) << setfill(' ') << right << "Цена" << " "
        << setw(8) << setfill(' ') << right << "KPI" << endl << endl;

    //for (int i = 1; i <=3; i++)
    while (!feof(base_ptr))
 
    {
        fscanf(base_ptr, "%s", database[counter].type);
        fscanf(base_ptr, "%s", database[counter].processor);
        fscanf(base_ptr, "%s", database[counter].video_card);
        fscanf(base_ptr, "%s", database[counter].ram);
        fscanf(base_ptr, "%s", database[counter].helper.price);
        fscanf(base_ptr, "%s", database[counter].helper.request);
       
        cout << setw(3) << setfill(' ') << left << counter << " "
                 << setw(8)  << setfill(' ')<<left <<database[counter].type              << " "
                 << setw(17)<< setfill(' ')<<left << database[counter].processor    << " "
                 << setw(10)<< setfill(' ')<<left << database[counter].video_card  << " "
                 << setw(5) << setfill(' ') <<left << database[counter].ram               << " "
                 << setw(7) << setfill(' ') <<right<< database[counter].helper.price << " "
                 << setw(5) << setfill(' ') <<right<< database[counter].helper.request << endl;
        counter++;
      
    }
  fclose(base_ptr);
    
    cout << endl << "---Все модели отображены---" << endl << endl;
    cout << "1. Возврат в основное меню." << endl;
    cout << "2. Удаление модели." << endl << endl;
    int f;
    cin >> f;
    switch (f)
    {
    case 1:
        system("cls");
        move_admin();
        break;
    case 2:
        cout << "---Введите номер позиции которую хотите удалить---" << endl;
        size_t del_idx;
        cin >> del_idx;
        cout << "---Позиция № " << del_idx << "была успешно удалена---" << endl;
        for (size_t i=del_idx+1;i<counter;++i)
        {
            database[i - 1] = database[i];
            
        }
        --counter;
        FILE* base_ptr;
        base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "w");
        for (size_t i = 0; i <counter ; ++i)
        {
            fprintf(base_ptr, "\n %s %s %s %s %s %s", database[i].type, database[i].processor, database[i].video_card, 
                database[i].ram, database[i].helper.price, database[i].helper.request );
        }

        fclose(base_ptr);
    }
}
void case_2() {
    char q[20], w[20], e[20], r[20], t[8], y[2];
    setlocale(LC_ALL, "Russian");
    FILE* base_ptr;
    base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "a");
    cout<<"Тип: " ;
    cin >> q;
    cout<<"Процессор: ";
    cin >> w;
    cout<<"Видеокарта: ";
    cin >> e;
    cout<<"Память: ";
    cin >> r;
    cout<<"Цена: ";
    cin >> t;
    cout<<"KPI: ";
    cin >> y;
    fprintf(base_ptr, "\n %s %s %s %s %s %s", q, w, e, r, t, y);
    fclose(base_ptr);
    system("cls");
    cout << "---База данных успешно пополнена---" << endl << endl;
    cout << "1. Добавить ещё одну модель" << endl;
    cout << "2. Вернуться в основное меню" << endl;
    int asw;
    cin >> asw;
    switch (asw)
    {
    case 1:
        system("cls");
        case_2();
        break;
    case 2:
        system("cls");
        move_admin();
        break;
    }
}
void case_3() {
    



}
void move_admin()
{
    menu_second_lavel_admin();
}