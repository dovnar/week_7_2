#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

// Do not use system function name for your functions
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
		"введите символ которым вы хотите ее вывести = ";
	cin >> sign;
	cout << "введите количество символов от 2 до 30 = ";
	cin >> size;
	cout << "выберите какую линию будем выводить \nгоризонтальную 1 \nвертикальную 2 \n= ";
	cin >> line; // нужен enum для хранения такого рода данных
	cout << "выберете скорость ввываод линии \nмедлено 1 \nсредне 2 \nбыстро 3\n= ";
	cin >> speed; // нужен enum для хранения такого рода данных
	if (speed > 3 ||
		speed < 1 ||
		line < 1 ||
		line > 2 ||
		size < 2 ||
		size>30)
	{
		cout << "ошибка при вводе данных!! проверьте правельность ввода, убедитесь что во время ввода у вас не нажат Shift";
		return 1;
	}
	for (int i = 0; i < size; i++)
	{
		cout << (line == 1 ? sign : sign + '\n');
		speed == 1 ?  Sleep((BYTE)20) : speed == 2 ? Sleep((BYTE)10) : Sleep((BYTE)1); // лучше использовать switch
	}
	cout << endl;
}
