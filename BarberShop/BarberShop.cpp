﻿#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");

    int population = 0;                                                                    // Переменная для записи кол-ва мужчин в городе
    int numberBarbers = 0;                                                                 // Переменная для записи кол-ва барберов в городе
    int const numberClients = 8;                                                           // Переменная константа - кол-во клиентов обслуживаемых одним барбером в день

    cout << "Введите кол-во мужчин в городе: ";                                            // Запрос кол-ва мужчин в городе
    cin >> population;                                                                     // Записываем в переменную кол-во мужчин в городе
    cout << "Введите кол-во барберов в городе: ";                                          // Запрос кол-ва барберов в городе
    cin >> numberBarbers;                                                                  // Записываем в переменную кол-во барберов в городе
    
    cout << "----------Вычисляем!----------" << endl;

    if (population % 30 != 0) {                                                            // Проверяем делится ли кол-во мужчин в городе без остатка на 30
        population = population / 30 + 1;                                                  // Если остаток есть то к результату кол-ва клиентов в день добавляем ещё одного клиента
    }
    else {
        population /= 30;                                                                  // Иначе просто делим кол-во мужчин в городе на 30 и получаем кол-во клиентов в день
    }

    if (population == numberBarbers * numberClients) {                                     // Сравниваем кол-во клиентов в день с произведением кол-ва клиентов в день у одного барбера на кол-во барберов
        cout << "Барберов в городе ровно столько сколько нужно!" << endl;                  // Если переменные равны то выводим сообщение
    }
    else {                                                                                 // Иначе
        if (population - numberBarbers * numberClients < 0) {                              // Проверяем разницу между кол-вом кл.день и произведением кол-ва барберов и кол-ва кл.день одного барбера
            cout << "Барберов в городе более чем достаточно!" << endl;                     // Если кол-во возможных клиентов превышает кол-во нуждающихся выводим сообщение
        }
        else {                                                                             // Проверяем остаток от деления на 8 разницы между кол-вом клиентов 
            if ((population - numberBarbers * numberClients) % numberClients == 0) {       // в день и кол-вом клиентов гарантированно обслуживаемыми     
                cout << "В городе не хватает ";                                            // Если остатка нет выводим сообщение с вычислением кол-ва недостающих барберов
                cout << (population - numberBarbers * numberClients) / numberClients;
                cout << " барберов!" << endl;
            }
            else {                                                                         // Иначе
                cout << "В городе не хватает ";                                            // Выводим сообщение с вычислением кол-ва недостающих барберов с корректировкой на одного
                cout << (population - numberBarbers * numberClients) / numberClients + 1;
                cout << " барберов!" << endl;
            }
        }
    }


    // Задержка консольного окна:
    system("pause > nul");
    return 0;
}