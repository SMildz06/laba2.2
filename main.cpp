// №2.2
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
    int l, r;

    cout << "Укажите левую границу диапазона: ";
    cin >> l;
    cout << "Укажите правую границу диапазона: ";
    cin >> r;
     
    int random = (rand() % ((r+1) - l)) + (l); // алгоритм создания рандомного числа
    cout << "Результат случайного числа: " << random; // вывод


	return 0;
}