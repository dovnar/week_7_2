#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

void Sleep(BYTE time)
{
	Sleep((DWORD)time * 100);
	return;
}
int main()
{
	setlocale(LC_ALL, "rus");

	char sign;
	int line, speed, size;
	cout << "выводим линию горезонтальную или вертикальную, необходимы некоторые данные \n"
		"введите символ которым вы хотите е вывести = ";
	cin >> sign;
	cout << "введите количество символов от 2 до 30 = ";
	cin >> size;
	cout << "выберите какую линию будем выводить \nгорезонтальную 1 \nвертикальную 2 \n= ";
	cin >> line;
	cout << "выберете скорость ввываод линии \nмедлено 1 \nсредне 2 \nбыстро 3\n= ";
	cin >> speed;
	if (speed > 3 ||
		speed < 1 ||
		line < 1 ||
		line > 2 ||
		size < 2 ||
		size>30)
	{
		cout << "ошибка при вводе данных!! проверьте правельность ввода, убедитесь что во время ввода у вас не нажат Shift";
	}
	for (int i = 0; i < size; i++)
	{
		line == 1 ? cout << sign : cout << sign << endl;
		speed == 1 ?  Sleep((BYTE)20) : speed == 2 ? Sleep((BYTE)10) : Sleep((BYTE)1);
	}
	cout << endl;
}