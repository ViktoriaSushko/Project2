#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// ����� ��������� ������� �������������� � ��������
#include <stdio.h>
#include <io.h>
#include <ctime>
// ��� ������� AnsiToOem
#include <windows.h>
#include <direct.h>
using namespace std;
//info file 
void InfoFile(const char* filename) {
    _finddata_t finfo;
    if (_findfirst(filename, &finfo) != -1) {
        cout << "��� �����:" << finfo.name << endl;
        cout << "������ �����:" << finfo.size << endl;
        cout << "���� ��������: " << ctime(&finfo.time_create) << endl;
        cout << "��������: ";
        if ((finfo.attrib & _A_RDONLY) == _A_RDONLY) cout << "���� ������ ��� ������\n";
        if ((finfo.attrib & _A_HIDDEN) == _A_HIDDEN) cout << "���� �������\n";
        if ((finfo.attrib & _A_SYSTEM) == _A_SYSTEM) cout << "���� ���������\n";
        if ((finfo.attrib & _A_ARCH) == _A_ARCH) cout << "���� ��������\n";
        if ((finfo.attrib & _A_NORMAL) == _A_NORMAL) cout << "������� ����\n";
        if ((finfo.attrib & _A_SUBDIR) == _A_SUBDIR) cout << "����������\n";

    }
    else
        cout << "���� �� ������\n";
}
int main() {
    setlocale(LC_CTYPE, "ukr");
    SetConsoleCP(1251);
   SetConsoleOutputCP(1251);   
    int menu;
    cout << "Enter task\n";

    do {
        cout << "1 - Print info about file\n";
        cout << "2 - View some folder\n";
        cout << "3 - Rename file\n";
        cout << "4 - Remove file\n";
        cout << "5 - Rename folder\n";
        cout << "6 - Remove folder\n";
        cout << "7 - Create folder\n";

        cout << "0 - Exit\n\n";
        cin >> menu;
        switch (menu) {
        case 1:
            InfoFile("D:\\file.txt");
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
        }
    } while (menu != 0);
    return 0;
}






