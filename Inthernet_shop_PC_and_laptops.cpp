// Inthernet_shop_PC_and_laptops.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <windows.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <fstream>
    
using namespace  std;

void admin() {
    system("cls");
    cout << "�� ����� ��� �������������. " << endl;
}

void manager() {
    system("cls");
    cout << "�� ����� ��� ��������. " << endl;
}

void user() {
    system("cls");
    cout << "�� ����� ��� ������������. " << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "���� � �������:" << endl << endl;;
    cout << "1. ������������� (��������� ������ � �����)" << endl;
    cout << "2. �������� (��������� ������ � �����)" << endl;
    cout << "3. ������������" << endl;
    cout << "4. �����" << endl;
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
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
