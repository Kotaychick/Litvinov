/*/#include <iostream>
#include <cmath>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

class Mass
{
	private:
		int *arr;
		int	*arr2;
		int temp;
	public:
		
		Mass(int n)
		{
			srand(time(0)); 
			arr = new int[n];
			arr2 = new int[n];

			for (int i = 0; i < n; i++)
				arr[i] = rand() % 20;
		}

		~Mass()
		{
			delete[] arr;
			delete[] arr2;
		}

		int kol()
		{
			return _msize(arr) / sizeof(int);
		}

		void show()
		{
			for (int i = 0; i < kol(); i++)
				cout << arr[i] << " ";
		}

		void sortUp()
		{
			
			for (int i = 0; i < kol(); i++)
			{
				arr2[i] = arr[i];
			}
			
			for (int i = 0; i < kol() ; i++)
			{
				for (int j = 0; j < kol() - 1; j++)
				{
					if (arr2[i] < arr2[j])
					{
						swap(arr2[i], arr2[j]);
					}
				}
			}
			for (int i = 0; i < kol(); i++)
			{
				cout << arr2[i] << " ";
			}
		}

		void sortDown()
		{
			for (int i = 0; i < kol(); i++)
			{
				arr2[i] = arr[i];
			}
			

			for (int i = 0; i < kol(); i++)
			{
				for (int j = 0; j < kol() - 1; j++)
				{
					if (arr2[i] > arr2[j])
					{
						swap(arr2[i], arr2[j]);
					}

				}
			}
			for (int i = 0; i < kol(); i++)
			{
				cout << arr2[i] << " ";
			}
		}

		void Max()
		{
			int max = 0;
			
				for (int j = 0; j < kol() - 1; j++)
				{
					if (arr[j] > max)
					{
						max = arr[j];
					}
				}
			cout << "Max: " << max << endl;
		}

		void Min()
		{
			{
				int min;

				for (int j = 0; j < kol(); j++)
				{
					if (arr[j] > arr[j+1])
					{
						min = arr[j];
					}
				}
				cout << "Min: " << min << endl;
			}
		}

		double Avg()
		{
			double d = 0;
			for (int i = 0; i < kol(); i++)
			{
				d += arr[i];
			}
			return (double) d / kol();
		}
};

int main()
{
	setlocale(LC_ALL, "");\
	
	int n = 0;
	int r = 7;
	
	cout << "����� ��������� � �������: ";
	cin >> n;

	Mass M(n);

	cout << "�������� �� ��� �� ������ ������� � ���������� ��������:\n" 
		<< "\"1\" - ����� ������� �� �����;\n"
		<< "\"2\" - ������������� �� �����������;\n"
		<< "\"3\" - ������������� �� ��������;\n"
		<< "\"4\" - ����� ������������� ��������;\n"
		<< "\"5\" - ������� ����������� �������;\n"
		<< "\"6\" - ������� ������� ��������������;\n"
		<< "\"0\" - �����;" << endl;

	while (r != 0)
	{
		cout << "��� �����: ";
		cin >> r;
		switch (r)
		{
			case 1: cout << "������: "; M.show(); cout << endl; break;
			case 2:	cout << "�� �����������: "; M.sortUp(); cout << endl; break;
			case 3: cout << "�� ��������: "; M.sortDown(); cout << endl; break;
			case 4: M.Max(); break;
			case 5: M.Min(); break;
			case 6: cout << M.Avg() << endl; break;
			default:break;
		}
	}

	system("pause");
	return 0;
}*/