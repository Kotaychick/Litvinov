#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>

using namespace std;

class Figure
{
	virtual double Square() = 0;
	virtual double Perimetr() = 0;
	virtual void Show() = 0;
};

class Rectangle : public Figure
{
private:
	int width;
	int height;
public:
	Rectangle()
	{
		this->height = 10;
		this->width = 10;
	}
	Rectangle(int h, int w)
	{
		width = 0; height = 0;
		if (h > 0 && w > 0)
		{
			this->height = h;
			this->width = w;
		}
	}
	double Square() override
	{
		return height * width;
	}
	double Perimetr() override
	{
		return (height + width) * 2;
	}
	void Show() override
	{
		if (height == 0 && width == 0)
		{
			cout << "ERROR" << endl;
		}
		else
		{
			cout << "Figura so storonami:\t" << height << "\t" << width << endl;
		}
	}
};

class Circle :Figure
{
private:
	int Pi;
	int radio;
public:
	Circle()
	{
		this->Pi = 3.14;
		this->radio = 10;
	}
	Circle(int r)
	{
		radio = 0;
		if (r > 0)
		{
			this->Pi = 3.14;
			this->radio = r;
		}
	}
	double Square() override
	{
		return pow(Pi * radio, 2);
	}
	double Perimetr() override
	{
		return 2 * Pi * radio;
	}
	void Show() override
	{
		if (radio == 0)
		{
			cout << "ERROR" << endl;
		}
		else
		{
			cout << "Figura c radiusom:\t" << radio << endl;
		}
	}

};

class Triangle :Figure
{
private:
	int osnov;
	int	katet1;
	int katet2;
	double height;
public:
	Triangle()
	{
		this->osnov = 1;
		this->height = 0.866;
		this->katet1 = 1;
		this->katet2 = 1;
	}
	Triangle(int a, int b, int c, double h)
	{
		osnov = 0;
		katet1 = 0;
		katet2 = 0;
		height = 0;
		
		if (a > 0 && b > 0 && c > 0 && h != 0)
		{
			this->osnov = a;
			this->katet1 = b;
			this->katet2 = c;
			this->height = h;
		}
	}
	double Perimetr() override
	{
		return osnov + katet1 + katet2;
	}
	double Square() override
	{
		return 0.5 * osnov * height;
	}
	void Show() override
	{
		if (osnov == 0 && katet1 == 0 && katet2 == 0 && height == 0)
		{
			cout << "ERROR" << endl;
		}
		else
		{
			cout << "Figura so storonami:\t" << "\tosnovanie\t" << osnov << "\tkatet1\t" << katet1 << "\tkatet2\t" << katet2 << "\theight\t" << height << endl;
		}
	}
};

//class Person
//{
//protected:
//	int age;
//	string name;
//public:
//	Person()
//	{
//		this->age = 1;
//		this->name = " ";
//	}
//	Person(int age, string name)
//	{
//		this->name = " ";
//		this->age = 1;
//	}
//	virtual void Show()
//	{
//		cout << "name\t" << name << "\tage\t" << age << endl;
//	}
//};
//class Employee:public Person
//{
//private:
//	string company;
//public:
//	Employee(int age, string name, string company) : Person(age, name)
//	{
//		this->company = company;
//	}
//	void Show() override
//	{
//		//Person::Show();
//		cout << "name\t" << name << "\tage\t" << age << "\tcompany\t" << company << endl;
//	}
//
//};

int main()
{
	setlocale(LC_ALL, "");

	cout << "KVADRAT\n" << endl;

	Rectangle r1(-120, 10);
	cout << "Perimetr: " << r1.Perimetr();
	cout << endl;
	cout << "Ploshad: " << r1.Square();
	cout << endl;
	r1.Show();
	Rectangle r2;
	cout << "Perimetr: " << r2.Perimetr();
	cout << endl;
	cout << "Ploshad: " << r2.Square();
	cout << endl;
	r2.Show();
	Rectangle r3(12, 15);
	cout << "Perimetr: " << r3.Perimetr();
	cout << endl;
	cout << "Ploshad: " << r3.Square();
	cout << endl;
	r3.Show();

	cout << "\nKRUG\n" << endl;

	Circle c1;
	c1.Show();
	cout << "Perimetr: " << c1.Perimetr();
	cout << endl;
	cout << "Ploshad: " << c1.Square();
	cout << endl;
	Circle c2(15);
	c2.Show();
	cout << "Perimetr: " << c2.Perimetr();
	cout << endl;
	cout << "Ploshad: " << c2.Square();
	cout << endl;
	Circle c3(-15);
	c3.Show();
	cout << "Perimetr: " << c3.Perimetr();
	cout << endl;
	cout << "Ploshad: " << c3.Square();
	cout << endl;

	cout << "\nTREUGOL\n" << endl;

	Triangle T;
	T.Show();
	cout << "Perimetr: " << T.Perimetr();
	cout << endl;
	cout << "Ploshad: " << T.Square();
	cout << endl;
	Triangle T2(15, 15, 15, 0.866);
	T2.Show();
	cout << "Perimetr: " << T2.Perimetr();
	cout << endl;
	cout << "Ploshad: " << T2.Square();
	cout << endl;
	Triangle T3(-15, -15, -15, -0.866);
	T3.Show();
	cout << "Perimetr: " << T3.Perimetr();
	cout << endl;
	cout << "Ploshad: " << T3.Square();
	cout << endl;

	system("pause");
	return 0;
}