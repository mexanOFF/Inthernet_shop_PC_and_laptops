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
#pragma warning(disable : E0266)
using namespace  std;   
int gl_counter;

void menu_first_level();
void admin(); 
void menu_second_lavel_admin();
void manager();
void menu_second_lavel_manager();
void user();
void case_1();
void case_2();
void case_3();
void move_admin();
void case_1_mng();

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

char first[10];
char second[100];
char first_m[10];
char second_m[100];

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
    cin >> x; //����������� ���������������� ����
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
     case 4:
         system("cls");
         cout << "---������ ��������� ������� ���������---" << endl;
                 break;
            default:
        system("cls");
        cout << "---������ ��������� ������� ���������---" << endl;
    }
    
}
void admin() {
    system("cls");
        FILE* adminka_ptr; //����������� �� ����
    adminka_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Admin_data.txt", "r");
        fscanf(adminka_ptr, "%s", first); // �������� ����� � First 
    fscanf(adminka_ptr, "%s", second); // ������� ������ � Second
    fclose(adminka_ptr); // ��������� ���� txt
        char chec_pass[100];
    cout << "---������� ������---" << endl;
    cin >> chec_pass; // ������ �����
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
    cout << "1. �������� � �������������� ���� ������" << endl;
    cout << "2. ���������� ������ � ���� ������." << endl;
    cout << "3. ��������� ������ � ������ � �������������." <<endl;
    cout << "4. ����� ������� ������."<< endl;
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
        case_3();
        break;
    case 4:
        system("cls");
        main();
        break;
    }
}
void manager() {
    system("cls");
    FILE* manag_ptr; // ��������� �� ����
    manag_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Manager_data.txt", "r");
    fscanf(manag_ptr, "%s", first_m); // �������� ����� � First_m
    fscanf(manag_ptr, "%s", second_m); // ������� ������ � Second_m
    fclose(manag_ptr); // ��������� ���� txt
    char chec_pass_m[100];
    cout << "---������� ������---" << endl;
    cin >> chec_pass_m;
    if (strcmp(second_m, chec_pass_m) == 0)
    {
        system("cls");
        cout << "����� ���������� " << first_m << "!" << endl << endl;
        cout << "---�������� ��������---" << endl;
        menu_second_lavel_manager();
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
    cout << "1. �������� � �������������� ���� ������" << endl;
    cout << "2. ���������� ������ � ���� ������." << endl;
    cout << "3. ����� ������� ������." << endl;
    int r;
    cin >> r;
    switch (r)
    {
    case 1:
        case_1_mng();
        break;
    case 2:
        case_2();
        break;
    case 3:
        menu_first_level();
        break;
    default:
        system("cls");
        menu_second_lavel_manager();
    }
}
void user() 
{
    system("cls");
    FILE* base_ptr;
    base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "r");

    cout << setw(3) << setfill(' ') << left << '�' << " "
        << setw(8) << setfill(' ') << left << "���" << " "
        << setw(17) << setfill(' ') << left << "���������" << " "
        << setw(10) << setfill(' ') << left << "����������" << " "
        << setw(5) << setfill(' ') << left << "������" << " "
        << setw(5) << setfill(' ') << right << "����" << " "
        << setw(8) << setfill(' ') << right << "KPI" << endl << endl;

    while (!feof(base_ptr)) // ���� � ����� ���-�� ���� - �������

    {
        fscanf(base_ptr, "%s", database[counter].type);
        fscanf(base_ptr, "%s", database[counter].processor);
        fscanf(base_ptr, "%s", database[counter].video_card);
        fscanf(base_ptr, "%s", database[counter].ram);
        fscanf(base_ptr, "%s", database[counter].helper.price);
        fscanf(base_ptr, "%s", database[counter].helper.request);

        cout << setw(3) << setfill(' ') << left << counter << " "
            << setw(8) << setfill(' ') << left << database[counter].type << " "
            << setw(17) << setfill(' ') << left << database[counter].processor << " "
            << setw(10) << setfill(' ') << left << database[counter].video_card << " "
            << setw(5) << setfill(' ') << left << database[counter].ram << " "
            << setw(7) << setfill(' ') << right << database[counter].helper.price << " "
            << setw(5) << setfill(' ') << right << database[counter].helper.request << endl;
        counter++; // �������
    }
    counter = 0; // �������� �������
    cout << endl << "��� ������ ������� ����������" << endl<<endl;
    cout << "1. ����� ������������" << endl;
    int x;
    cin >> x;
    if (x) {
        system("cls");
        menu_first_level();
    }
}
void case_1() {

    FILE* base_ptr;
    base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "r");

    cout << setw(3) << setfill(' ') << left << '�' << " "
        << setw(8) << setfill(' ') << left << "���" << " "
        << setw(17) << setfill(' ') << left << "���������" << " "
        << setw(10) << setfill(' ') << left << "����������" << " "
        << setw(5) << setfill(' ') << left << "������" << " "
        << setw(5) << setfill(' ') << right << "����" << " "
        << setw(8) << setfill(' ') << right << "KPI" << endl << endl;

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
    
    cout << endl << "---��� ������ ����������---" << endl << endl;
    cout << "1. ������� � �������� ����." << endl;
    cout << "2. �������� ������." << endl;
    cout << "3. �������������� ���������� ������." << endl;
    int f;
    cin >> f;
    switch (f)
    {
    case 1:
        system("cls");
        counter = 0;
        move_admin();
        break;
    case 2:
        cout << "---������� ����� ������� ������� ������ �������---" << endl;
        size_t del_idx;
        cin >> del_idx;
      
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
        system("cls");
        cout << "---������� �" << del_idx << " ���� ������� �������---" << endl << endl;
        counter = 0;
        menu_second_lavel_admin();
        break;
    case 3:
        cout << "---������� ����� ������� ������� ������ ���������������---" << endl;
        size_t edt_ind;
        cin >> edt_ind;
        system("cls");
        cout << "---�������������� ������ �" << edt_ind << " ������� ����������������---" << endl << endl;
        cout << "�������� �������� ��� ��������������" <<endl<< endl << "1. ���" << endl << "2. ���������" << endl << "3. ����������" << endl
        << "4. ����������� ������" << endl << "5. ����" << endl << "6. KPI" << endl << endl;
        size_t edt_prm;
        cin >> edt_prm;
        switch (edt_prm)
        {
        case 1:
            cout << "������� ��� ����������" << endl;
            char inp_1[15];
            cin >> inp_1;
            strcpy(database[edt_ind].type, inp_1);
            break;
        case 2:
            cout << "������� ���������" << endl;
            char inp_2[15];
            cin >> inp_2;
            strcpy(database[edt_ind].processor, inp_2);
            break;
        case 3:
            cout << "������� ����������" << endl;
            char inp_3[15];
            cin >> inp_3;
            break;
        case 4:
            cout << "������� ����� ����������� ������" << endl;
            char inp_4[15];
            cin >> inp_4;
            strcpy(database[edt_ind].ram, inp_4);
            break;
        case 5:
            cout << "������� ����" << endl;
            char inp_5[15];
            cin >> inp_5;
            strcpy(database[edt_ind].helper.price, inp_5);
            break;
        case 6:
            cout << "������� ����" << endl;
            char inp_6[15];
            cin >> inp_6;
            strcpy(database[edt_ind].helper.request, inp_6);
            break;
        }
        FILE* base_ptr_2;
        base_ptr_2 = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "w");
        for (size_t i = 0; i < counter; ++i)
        {
            fprintf(base_ptr_2, "\n %s %s %s %s %s %s", database[i].type, database[i].processor, database[i].video_card,
                database[i].ram, database[i].helper.price, database[i].helper.request);
        }
        fclose(base_ptr_2);
        cout << endl << "---�������������� ������ ������� ���������---" << endl;
        break;
    }
    counter = 0;
    case_1();
}
void case_1_mng() {

    FILE* base_ptr;
    base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "r");

    cout << setw(3) << setfill(' ') << left << '�' << " "
        << setw(8) << setfill(' ') << left << "���" << " "
        << setw(17) << setfill(' ') << left << "���������" << " "
        << setw(10) << setfill(' ') << left << "����������" << " "
        << setw(5) << setfill(' ') << left << "������" << " "
        << setw(5) << setfill(' ') << right << "����" << " "
        << setw(8) << setfill(' ') << right << "KPI" << endl << endl;

    while (!feof(base_ptr))

    {
        fscanf(base_ptr, "%s", database[counter].type);
        fscanf(base_ptr, "%s", database[counter].processor);
        fscanf(base_ptr, "%s", database[counter].video_card);
        fscanf(base_ptr, "%s", database[counter].ram);
        fscanf(base_ptr, "%s", database[counter].helper.price);
        fscanf(base_ptr, "%s", database[counter].helper.request);

        cout << setw(3) << setfill(' ') << left << counter << " "
            << setw(8) << setfill(' ') << left << database[counter].type << " "
            << setw(17) << setfill(' ') << left << database[counter].processor << " "
            << setw(10) << setfill(' ') << left << database[counter].video_card << " "
            << setw(5) << setfill(' ') << left << database[counter].ram << " "
            << setw(7) << setfill(' ') << right << database[counter].helper.price << " "
            << setw(5) << setfill(' ') << right << database[counter].helper.request << endl;
        counter++;
    }
    fclose(base_ptr);

    cout << endl << "---��� ������ ����������---" << endl << endl;
    cout << "1. ������� � �������� ����." << endl;
    cout << "2. �������� ������." << endl;
    cout << "3. �������������� ���������� ������." << endl;
    int f;
    cin >> f;
    switch (f)
    {
    case 1:
        system("cls");
        counter = 0;
        menu_second_lavel_manager();
        break;
    case 2:
        cout << "---������� ����� ������� ������� ������ �������---" << endl;
        size_t del_idx;
        cin >> del_idx;

        for (size_t i = del_idx + 1; i < counter; ++i)
        {
            database[i - 1] = database[i];
        }
        --counter;
        FILE* base_ptr;
        base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "w");
        for (size_t i = 0; i < counter; ++i)
        {
            fprintf(base_ptr, "\n %s %s %s %s %s %s", database[i].type, database[i].processor, database[i].video_card,
                database[i].ram, database[i].helper.price, database[i].helper.request);
        }
        fclose(base_ptr);
        system("cls");
        cout << "---������� �" << del_idx << " ���� ������� �������---" << endl << endl;
        counter = 0;
        menu_second_lavel_admin();
        break;
    case 3:
        cout << "---������� ����� ������� ������� ������ ���������������---" << endl;
        size_t edt_ind;
        cin >> edt_ind;
        system("cls");
        cout << "---�������������� ������ �" << edt_ind << " ������� ����������������---" << endl << endl;
        cout << "�������� �������� ��� ��������������" << endl << endl << "1. ���" << endl << "2. ���������" << endl << "3. ����������" << endl
            << "4. ����������� ������" << endl << "5. ����" << endl << "6. KPI" << endl << endl;
        size_t edt_prm;
        cin >> edt_prm;
        switch (edt_prm)
        {
        case 1:
            cout << "������� ��� ����������" << endl;
            char inp_1[15];
            cin >> inp_1;
            strcpy(database[edt_ind].type, inp_1);
            break;
        case 2:
            cout << "������� ���������" << endl;
            char inp_2[15];
            cin >> inp_2;
            strcpy(database[edt_ind].processor, inp_2);
            break;
        case 3:
            cout << "������� ����������" << endl;
            char inp_3[15];
            cin >> inp_3;
            break;
        case 4:
            cout << "������� ����� ����������� ������" << endl;
            char inp_4[15];
            cin >> inp_4;
            strcpy(database[edt_ind].ram, inp_4);
            break;
        case 5:
            cout << "������� ����" << endl;
            char inp_5[15];
            cin >> inp_5;
            strcpy(database[edt_ind].helper.price, inp_5);
            break;
        case 6:
            cout << "������� ����" << endl;
            char inp_6[15];
            cin >> inp_6;
            strcpy(database[edt_ind].helper.request, inp_6);
            break;
        }
        FILE* base_ptr_2;
        base_ptr_2 = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "w");
        for (size_t i = 0; i < counter; ++i)
        {
            fprintf(base_ptr_2, "\n %s %s %s %s %s %s", database[i].type, database[i].processor, database[i].video_card,
                database[i].ram, database[i].helper.price, database[i].helper.request);
        }
        fclose(base_ptr_2);
        cout << endl << "---�������������� ������ ������� ���������---" << endl;
        break;
    }
    counter = 0;
    case_1();
}
void case_2() {
    char q[20], w[20], e[20], r[20], t[8], y[2];
    setlocale(LC_ALL, "Russian");
    FILE* base_ptr;
    base_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\database.txt", "a");
    cout<<"���: " ;
    cin >> q;
    cout<<"���������: ";
    cin >> w;
    cout<<"����������: ";
    cin >> e;
    cout<<"������: ";
    cin >> r;
    cout<<"����: ";
    cin >> t;
    cout<<"KPI: ";
    cin >> y;
    fprintf(base_ptr, "\n %s %s %s %s %s %s", q, w, e, r, t, y);
    fclose(base_ptr);
    system("cls");
    cout << "---���� ������ ������� ���������---" << endl << endl;
    cout << "1. �������� ��� ���� ������" << endl;
    cout << "2. ��������� � �������� ����" << endl;
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
    system("cls");
    cout << "---�������� ������������ ��� �������������� ������ � ������---" << endl << endl;
    cout << "1. �������������" << endl;
    cout << "2. ��������" << endl;
    cout << "3. ������� � �������� ����" << endl;
    int x;
    cin >> x;
    char inp_1[10];
    char inp_2[11];
    char inp_1_m[10];
    char inp_2_m[11];
        switch (x)
    {
    case 1:
        cout << "������� ����� ����� ��� ��������������" << endl;
        cin >> inp_1;
        cout << "������� ����� ������ ��� ��������������" << endl;
        cin >> inp_2;
        strcpy( first, inp_1); 
        strcpy(second, inp_2);
        FILE* adminka_ptr;
        adminka_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Admin_data.txt", "w");
        fprintf(adminka_ptr, "%s %s", inp_1, inp_2);
        fclose(adminka_ptr);
        system("cls");
        cout << "---������ � ����� ��� �������������� ��� ������� ������---" << endl<<endl;
        menu_second_lavel_admin();
        break;
    case 2:
        cout << "������� ����� ����� ��� ���������" << endl;
        cin >> inp_1_m;
        cout << "������� ����� ������ ��� ���������" << endl;
        cin >> inp_2_m;
        strcpy(first_m, inp_1_m);
        strcpy(second_m, inp_2_m);
        FILE* manag_ptr;
        manag_ptr = fopen("C:\\Users\\Admin\\Desktop\\My projects\\Inthernet_shop_PC_and_laptops\\Manager_data.txt", "w");
        fprintf(manag_ptr, "%s %s", inp_1_m, inp_2_m);
        fclose(manag_ptr);
        system("cls");
        cout << "---������ � ����� ��� ��������� ��� ������� ������---" << endl << endl;
        menu_second_lavel_admin();
              break;
    case 3:
        system("cls");
        menu_second_lavel_admin();
        break;
    default:
                case_3();
    }
}
void move_admin()
{
    menu_second_lavel_admin();
}