#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <math.h>
#define size 10

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	short int task;
	do
	{	
		int length;
		length = size;
		cout << "Введите номер задания от 1 до 18 - ";
		cin >> task;
		switch (task)
		{
			case 18:
			{
					/*Дан список. Не изменяя его и не используя дополнительные списки, определите, какое число в этом списке встречается чаще всего.
					Если таких чисел несколько, выведите любое из них.
					Входные данные(1 2 3 2 3 3)
					*/

				int m[7] = { 1, 2, 3, 2, 3, 3, 3 }, sum = 0, a;
				for (int i = 0; i < 7; i++)
				{
					cout << m[i] << ", ";

				} cout << "\n ==========" << endl;
				for (int i = 0; i < 7; i++)
				{
					for (int j = 1; j < 6; j++)
					{
						if (m[j] == m[i])
							a = m[j];
					}
				}
				cout << "=====" << a << endl;


			} break;

			case 1:
			{
				/*2.	Определить:
				a.сумму всех элементов массива;
				b.произведение всех элементов массива;
				c.сумму квадратов всех элементов массива;
				d.сумму шести первых элементов массива;
				e.сумму элементов массива с k1 - го по k2 - й(значения k1 и k2 вводятся  с клавиатуры; k2 > k1);
				f.среднее арифметическое всех элементов массива;
				g.среднее арифметическое элементов массива с s1 - го по s2 - й(значения s1 и s2 вводятся с клавиатуры; s2 > s1).*/

				int m[size], sum = 0, proiz = 1, k1, k2;
				for (int i = 0; i < length; i++)
				{
					m[i] = 1 + rand() % 100;
					cout << m[i] << endl;
					sum += m[i];
				} cout << "sum = " << sum << endl;

				cout << "произведение ==== " << endl;
				for (int i = 0; i < length; i++)
				{
					m[i] = 1 + rand() % 5;
					cout << m[i] << endl;
					proiz *= m[i];
				} cout << "\n======" << proiz << endl;

				cout << "СУММА КВАДРАТОВ" << endl;
				sum = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = 1 + rand() % 20;
					cout << m[i] << endl;
					sum += pow(m[i], 2);
				}cout << "sum = " << sum << endl;

				cout << "СУММА ЭЛЕМЕНТОВ\nВвести k1 и k2" << endl;
				sum = 0;
				cin >> k1 >> k2;
				for (int i = k1; i <=k2; i++)
				{
					sum += m[i];
				}cout << "sum = " << sum << endl;
				
			} break;

			case 3:
			{
				/*3.	Дан массив.Найти:
				a.сумму элементов массива, значение которых не превышает 20;
				b.сумму элементов массива, больших числа a.*/
				int m[20], sum = 0;
				for (int i = 0; i < 20; i++)
				{
					m[i] = 1 + rand() % 49;
					cout << "INDEX [" << i << "] = " << m[i] << endl;
					if (m[i] <= 20)
						sum += m[i];
				} cout << "sum = " << sum << endl;

			} break;

			case 4:
			{
				/*4.	Ввести целочисленный массив, состоящий из 9 элементов.Поменять местами максимальный и минимальный  элементы массива*/
				int m[9] = {0}, min = m[0], max = m[0];
				for (int i = 0; i < 9; i++)
				{
					m[i] = 1 + rand() % 100;
					cout << i << " ========== " << m[i] << endl;
				}
				min = m[0];
				for (int i = 0; i < 9; i++)
				{
					if (m[i] < min)
						min = m[i];
				} 
				for (int i = 0; i < 9; i++)
				{
					if (m[i] > max)
						max = m[i];
				} cout << "max = " << max << "\nmin = " << min << endl;

			} break;

		}
	} while (task < 16);

}