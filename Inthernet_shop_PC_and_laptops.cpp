// Inthernet_shop_PC_and_laptops.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
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


struct neasted 
{
    char price[6];
    char request[5];
};

struct list
{
    char type[10];
    char processor[15];
    char video_card[15];
    char ram[6];
    neasted helper;
};

int main()
{
    setlocale(LC_ALL, "Russian");

    menu_first_level();
    
    return 0;
}

void menu_first_level() {

    cout << "---���� � �������---" << endl << endl;;
    cout << "1. ������������� (��������� ������ � �����)" << endl;
    cout << "2. �������� (��������� ������ � �����)" << endl;
    cout << "3. ������������" << endl;
    cout << "4. ����� (������� ����� �������)" << endl;
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
        cout << "---������ ��������� ������� ���������---" << endl;
    }
    
}

void admin() {
    system("cls");
    char first[6];
    char second[100];
    FILE* adminka_ptr;
    adminka_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Admin_data.txt", "r");

    fgets(first, 6, adminka_ptr); // �������� ����� � First 
    fgets(second, 6, adminka_ptr); // ������� ������ � Second
    fclose(adminka_ptr); // ��������� ���� txt
    
    char chec_pass[100];
    cout << "---������� ������---" << endl;
    cin >> chec_pass;

    if (strcmp(second, chec_pass) == 0)
    {
        system("cls");
        cout << "����� ���������� " << first << "!" << endl << endl;
        cout << "---�������� ��������---" << endl<<endl;
        menu_second_lavel_admin();
    }
    else
    {
        system("cls");
        cout << "---�������� ������---" << endl << endl;
        system("pause");
        system("cls");
        menu_first_level();
    }
}
void menu_second_lavel_admin() 
{
    cout << "1. �������� ���� ������ � �������." << endl;
    cout << "2. ���������� ����� ������ �� � ��������." << endl;
    cout << "3. �������������� ������������ ���� ������." << endl;
    cout << "4. �������� ������������ ��������� ���� ������." << endl;
    cout << "5. ����� ������ �� ��������� �����." << endl;
    cout << "6. ������������� �� �������� �����������." << endl;
    cout << "7. ������������� �� �������� �������." << endl;
    cout << "8. ������������� �� �������� �������." << endl;
    cout << "9. ���������� ����� ����������." << endl;
    cout << "10. ��������� ������ � ������ � �������������." <<endl;
    cout << "11. ����� ������� ������."<< endl;
    int y;
    cin >> y;

    switch (y)
    {
    case 1:
        system("cls");
        case_1();
        break;
    case 2:
        
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
    char first_m[6];
    char second_m[100];
    FILE* manag_ptr;
    manag_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Manager_data.txt", "r");

    fgets(first_m, 6, manag_ptr); // �������� ����� � First_m
    fgets(second_m, 6, manag_ptr); // ������� ������ � Second_m
    fclose(manag_ptr); // ��������� ���� txt

    char chec_pass_m[100];
    cout << "---������� ������---" << endl;
    cin >> chec_pass_m;

    if (strcmp(second_m, chec_pass_m) == 0)
    {
        system("cls");
        cout << "����� ���������� " << first_m << "!" << endl << endl;
        cout << "---�������� ��������---" << endl;
    }
    else
    {
        system("cls");
        cout << "---�������� ������---" << endl << endl;
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
    int counter=0;
    list database[50];
    FILE* base_ptr;
    base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "r");

    cout << setw(8) << setfill(' ') << left << "���" << " "
        << setw(17) << setfill(' ') << left << "���������" << " "
        << setw(10) << setfill(' ') << left << "����������" << " "
        << setw(5) << setfill(' ') << left << "������" << " "
        << setw(5) << setfill(' ') << right << "����" << " "
        << setw(8) << setfill(' ') << right << "KPI" << endl << endl;

    for (int i = 1; i <= 3; i++)
    {
        fscanf(base_ptr, "%s", database[counter].type);
        fscanf(base_ptr, "%s", database[counter].processor);
        fscanf(base_ptr, "%s", database[counter].video_card);
        fscanf(base_ptr, "%s", database[counter].ram);
        fscanf(base_ptr, "%s", database[counter].helper.price);
        fscanf(base_ptr, "%s", database[counter].helper.request);
       
        cout << setw(8)  << setfill(' ')<<left <<database[counter].type              << " "
                 << setw(17)<< setfill(' ')<<left << database[counter].processor    << " "
                 << setw(10)<< setfill(' ')<<left << database[counter].video_card  << " "
                 << setw(5) << setfill(' ') <<left << database[counter].ram               << " "
                 << setw(7) << setfill(' ') <<right<< database[counter].helper.price << " "
                 << setw(5) << setfill(' ') <<right<< database[counter].helper.request << endl;
        counter++;
    }
    fclose(base_ptr);
}