#include <iostream>
#include "..\StaticLib\Header.h"
#include <Windows.h>

void data(void) {
    diagonals('~', 7);
}

int main() {
    data();
    HINSTANCE load;
    load = LoadLibrary(L"DynamicLib.dll");

    typedef int (*sum) (int, int);
    sum Sum;
    Sum = (sum)GetProcAddress(load, "Sum");
    int a = 15;
    int b = 30;
    std::cout << Sum(a, b);
    FreeLibrary(load);
}

