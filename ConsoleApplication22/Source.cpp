#include <stdio.h>
#include<iostream>
#include <locale.h>
#include<time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	int z;

	do
	{
		cout << "������ ����� �������: " << "\n";
		cin >> z;
		switch (z)
		{
		case 1:
		{
			/*const int N = 10;

			int i, j, a[N], c;
			for ( i = 0; i < N-1; i++)
				for (j=N-2;j>=i;j--)
					if (a[j]>a[j+1])
			{
						c = a[j]; a[j] = a[j + 1];
						a[j + 1] = c;
			}
			printf("\n ��������������� ������: \n");
			for (i=0;i<N;i++)
				printf("%d", a[i]);*/
		}break;

		case 2:
		{/*
			int min,size,arrNumber[10],temp;
			srand(time(NULL));

			for (int i = 0; i < size - 1; i++)
			{
				arrNumber[i] = 1 + rand() % 15;
				min = i;
				for (int j = i + 1; j < size; j++)
					if (arrNumber[j] < arrNumber[min])
						min = j;
			}
			temp = arrNumber[i];
			arrNumber[i] = arrNumber[min];
			arrNumber[min] = temp;*/
		}
		break;
		case 3:
		{
			//1.	��������� ������ ��������� �����, ��������� ������ �� �������� ��������� ���������������� �������
			int a[20] = { 0 }, temp, flag = 0, count = 0;
			srand(time(NULL));

			for (int i = 0; i < 20; i++)
			{
				do
				{
					temp = 10 + rand() % 100;
					flag = 1;
					for (int j = 0; j < 20; j++)
					{
						count++;
						if (a[j] == temp)
						{
							flag = 0;
							break;
						}

					}
				} while (flag == 0);

				a[i] = temp;
				cout << a[i] << endl;
			}
			cout << endl;
			cout << count << endl;
		}
		break;
		case 4:
		{
			/*2.	����������:
			a.����� ���� ��������� �������;
			b.������������ ���� ��������� �������;
			c.����� ��������� ���� ��������� �������;
			d.����� ����� ������ ��������� �������;
			e.����� ��������� ������� � k1 - �� �� k2 - �(�������� k1 � k2 ��������  � ����������; k2 > k1);
			f.������� �������������� ���� ��������� �������;
			g.������� �������������� ��������� ������� � s1 - �� �� s2 - �(�������� s1 � s2 �������� � ����������; s2 > s1).
*/
			int a[20] = { 0 }, sum = 0, proiz = 0, s1, s2;
			int sum_kvadratov = 0, sum_6 = 0, k1, k2, srednee,sumk=0,sums=0,sredneeS1S2;
			srand(time(NULL));
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 50;
				sum += a[i];
				proiz *= a[i];
				sum_kvadratov += pow(a[i], 2);
				if (i < 6) sum_6 += a[i];
				srednee = sum / 20;
			}
			cout << "����a ���� ��������� ������� " << sum << " ������������ ���� ��������� ������� " << proiz << "\n";
			cout << " ����a ��������� ���� ��������� �������  " << sum_kvadratov << " ����a ����� ������ ��������� ������� " << sum_6 << "\n";
			cout << " ������� �������������� ���� ��������� ������� " << srednee << endl;

			do
			{
				cout << "������ ����� �1: " << "\n";
				cin >> k1;
				cout << "������ ����� �2: " << "\n";
				cin >> k2;
				
			} while (k2 < k1);
			
			for (int i = k1; i < k2; i++)
				{
				 
				cout << a[i] << "\n";
					sumk +=a[i];
					
				}
			cout << "����� ��������� ������� � k1 - �� �� k2 - � " << sumk << endl;

			do
			{
				cout << "������ ����� s1: " << "\n";
				cin >> s1;
				cout << "������ ����� s2: " << "\n";
				cin >> s2;
				
			} while (s2 < s1);

			for (int i = s1; i < s2; i++)
				{
				
				cout << a[i] << "\n";
					sredneeS1S2 = sums / i;
				}
			cout << " ������� �������������� ��������� ������� � s1 - �� �� s2 - � " << sredneeS1S2 << endl;

		}
		break;
		case 5:
		{
			/*3.	��� ������.�����:
			a.����� ��������� �������, �������� ������� �� ��������� 20;
			b.����� ��������� �������, ������� ����� a.*/
			int a[20] = {0}, sum = 0, A;
			srand(time(NULL));
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 20;
				sum += a[i];
				if (sum < 20)
				cout << "����a ��������� �������" << sum << "\n";
				cout << "������ ����� �" << "\n";
				cin >> A;
				if (sum > A) cout << "����a ��������� �������" << sum << endl;
				else break;

			}
			
		}
		break;
		default:
			break;
		}
	} while (z > 0);












}