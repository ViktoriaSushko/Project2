#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// Здесь находятся функции переименования и удаления
#include <stdio.h>
#include <io.h>
#include <ctime>
// для функции AnsiToOem
#include <windows.h>
#include <direct.h>
using namespace std;
//info file 
void InfoFile(const char* filename) {
    _finddata_t finfo;
    if (_findfirst(filename, &finfo) != -1) {
        cout << "Имя файла:" << finfo.name << endl;
        cout << "Размер файла:" << finfo.size << endl;
        cout << "Дата создания: " << ctime(&finfo.time_create) << endl;
        cout << "Атрибуты: ";
        if ((finfo.attrib & _A_RDONLY) == _A_RDONLY) cout << "файл только для чтения\n";
        if ((finfo.attrib & _A_HIDDEN) == _A_HIDDEN) cout << "файл скрытый\n";
        if ((finfo.attrib & _A_SYSTEM) == _A_SYSTEM) cout << "файл системный\n";
        if ((finfo.attrib & _A_ARCH) == _A_ARCH) cout << "файл архивный\n";
        if ((finfo.attrib & _A_NORMAL) == _A_NORMAL) cout << "обычный файл\n";
        if ((finfo.attrib & _A_SUBDIR) == _A_SUBDIR) cout << "директория\n";

    }
    else
        cout << "файл не найден\n";
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






