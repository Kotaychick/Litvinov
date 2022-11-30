#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>

using namespace std;

struct N
{
	string predmet;
	int ocenka;
};

class Students
{
private:
	string fio;
	int group;
	int age;
	N m[5];

public:
	Students()
	{
		srand(time(0));
		
		fio = "Ivan Ivanov Ivanovich";
		group = 641;
		age = 19;
		for (int i = 1; i < 6; ++i)
		{
			m[i - 1].predmet = "Predmet: " + to_string(i);
			m[i - 1].ocenka = rand() % 4 + 2;
		}

	}
	Students(string a, int b, int c, int *d)
	{
		srand(time(0));
	
		fio = a;
		group = b;
		age = c;
		for (int i = 1; i < 6; ++i)
		{
			m[i -1].predmet = "Predmet: " + to_string(i);
			m[i - 1].ocenka = d[i - 1];
		}
	}
	~Students()
	{
		//delete[] m;
	}
	Students(const Students& ref)
	{
		int size = 5;
		for (int i = 0; i < size; ++i)
		{
			m[i] = ref.m[i];
		}
	}
	void Show()
	{
		cout << fio << "\t" << group << "\t" << age << endl;
		for (int i = 0; i < 5; ++i)
		{
			cout << m[i].predmet << "-" << m[i].ocenka << endl;
		}
	}
	double Avg()
	{
		double s = 0;
		for (int i = 0; i < 5; ++i)
		{
			s += m[i].ocenka;
		}
		return s / 5;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));

	int *arr;	
	arr = new int[5];
	for (int i = 1; i<6; ++i)
	{
		cout << "Введите оценку для предмета No" + to_string(i) << endl;
		cin >> arr[i - 1];
		Students S1("Kotov Anton Alekseevich", 641, 19, arr);
		if (arr[4] > 0)
		{
			S1.Show();
			cout << S1.Avg() << endl;
		}
	}
	
	/*Students S("Kotov Anton Alekseevich", 641, 19, arr);
	S.Show();
	cout << endl;
	Students b = S;
	b.Show();*/

	/*Students S;
	S.Show();*/
	

	delete[] arr;
	return 0;
}