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
		cout << "������� ����� ������� �� 1 �� 18 - ";
		cin >> task;
		switch (task)
		{
			case 18:
			{
					/*��� ������. �� ������� ��� � �� ��������� �������������� ������, ����������, ����� ����� � ���� ������ ����������� ���� �����.
					���� ����� ����� ���������, �������� ����� �� ���.
					������� ������(1 2 3 2 3 3)
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
				/*2.	����������:
				a.����� ���� ��������� �������;
				b.������������ ���� ��������� �������;
				c.����� ��������� ���� ��������� �������;
				d.����� ����� ������ ��������� �������;
				e.����� ��������� ������� � k1 - �� �� k2 - �(�������� k1 � k2 ��������  � ����������; k2 > k1);
				f.������� �������������� ���� ��������� �������;
				g.������� �������������� ��������� ������� � s1 - �� �� s2 - �(�������� s1 � s2 �������� � ����������; s2 > s1).*/

				int m[size], sum = 0, proiz = 1, k1, k2;
				for (int i = 0; i < length; i++)
				{
					m[i] = 1 + rand() % 100;
					cout << m[i] << endl;
					sum += m[i];
				} cout << "sum = " << sum << endl;

				cout << "������������ ==== " << endl;
				for (int i = 0; i < length; i++)
				{
					m[i] = 1 + rand() % 5;
					cout << m[i] << endl;
					proiz *= m[i];
				} cout << "\n======" << proiz << endl;

				cout << "����� ���������" << endl;
				sum = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = 1 + rand() % 20;
					cout << m[i] << endl;
					sum += pow(m[i], 2);
				}cout << "sum = " << sum << endl;

				cout << "����� ���������\n������ k1 � k2" << endl;
				sum = 0;
				cin >> k1 >> k2;
				for (int i = k1; i <=k2; i++)
				{
					sum += m[i];
				}cout << "sum = " << sum << endl;
				
			} break;

			case 3:
			{
				/*3.	��� ������.�����:
				a.����� ��������� �������, �������� ������� �� ��������� 20;
				b.����� ��������� �������, ������� ����� a.*/
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
				/*4.	������ ������������� ������, ��������� �� 9 ���������.�������� ������� ������������ � �����������  �������� �������*/
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