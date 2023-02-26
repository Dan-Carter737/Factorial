#include <iostream>
#include <conio.h>
using namespace std;

//#define TASK_1_FACTORIAL
//#define TASK_2_POWER_N
#define TASK_3_ASCII
#define TASK_4_FIB_1
#define TASK_5_FIB_2
#define TASK_6_FIGURES


int main() {
	setlocale(LC_ALL, "");

	// FACTORIAL

#if defined TASK_1_FACTORIAL
	int number, i = 1, b; // b будет факториалом
	b = i;
	cout << "¬ведите число дл€ расчета его факториала: "; cin >> number;
	cout << endl;
	for (; i < number; )
	{
		i++;
		b = i * b;
	}
	cout << "‘акториал числа " << number << " равен " << b << endl;

#endif

	// POWER_N

#if defined TASK_2_POWER_N 

	double num, result_power;
	int power;
	cout << "¬ведите число, которое будет возведено в степень "; cin >> num; cout << endl;
	cout << "¬ведите целочисленный показатель степени дл€ введеного вами числа " << "\"" << num << "\"" << " "; cin >> power; cout << endl;
	if (num > 0) {
		for (int a = 0; a != power; a++)
		{
			result_power = num * num;
		}
		cout << num << " в степени " << power << " = " << result_power << endl;
	}
	else if (num < 0)
	{
		for (int a = 0; a != power; a++)
		{
			result_power = -1 * num * num;
		}
		cout << num << " в степени " << power << " = " << result_power << endl;
	}

#endif

	// ASCII

#if defined TASK_3_ASCII

	char key;
	for (int k = 0; k < 16; k++)
	{
		cout << "" << (char)k;
	}
	for (int k = 16; k < 32; k++)
	{
		cout << "\t" << (char)k;
	}
	for (int k = 32; k < 48; k++)
	{
		cout << "" << (char)k;
	}


#endif 
}