#include <tchar.h>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int _tmain(int argc, wchar_t argv[]) // функция для работы со всеми символами юникод и нет 
{
	srand(time(NULL)); // генератор псевдослучайных чисел основывающийся на временную дату 
	setlocale(LC_ALL, "Russian"); // поддержка работы с русскими символами
	int arr[30];
	for (int i = 0; i < 30; i++)
	{
		arr[i] = rand() % 1000;
		cout << " " << arr[i]; // заполнение и вывод массива с рандомными элементами от 0 до 1000
	}
	int sum = 0;
	for (int j = 0; j<30; j++)
	{
		if (arr[j] % 13 == 0)
		{ 
			sum = sum + arr[j]; 
		}
	}
	cout << endl;
	cout << "Сумма элементов массива, кратных 13 равна " << sum;
	cin.get(); // окончание работы с потоками
	return 0;
}