#include <Windows.h>
#include <locale.h>
#include <iostream>

void localisation()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

void AR()
{
    std::cout << "Daniyl Mykytenko, KI-20 student. CNTU 2021 ©" << std::endl;
}