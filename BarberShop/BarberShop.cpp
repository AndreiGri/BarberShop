#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");

    int population = 0;
    int numberBarbers = 0;
    int numberClients = 8;

    cout << "Введите кол-во мужчин в городе: ";
    cin >> population;
    cout << "Введите кол-во барберов в городе: ";
    cin >> numberBarbers;
    
    if (population / 30 > numberBarbers * numberClients) {
        numberBarbers = population / 30 - numberBarbers * numberClients;
        cout << "Городу ещё необходимо " << numberBarbers << "!" << endl;
    }
    else {
        cout << "В городе достаточно барберов!" << endl;
    }


    // Задержка консольного окна:
    system("pause > nul");
    return 0;
}