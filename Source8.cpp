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

class Rectangle: public Figure
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
			cout << "Некоректные данные" << endl;
		}
		else
		{
			cout << "Фигура является прямоугольником со сторонами:\t" << height << "\t" << width << endl;
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
			cout << "Некоректные данные" << endl;
		}
		else
		{
			cout << "Фигура является кругом с радиусом:\t" << radio << endl;
		}
	}

};

class Triangle :Figure
{

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

	/*Rectangle r1(-120, 10);
	cout << "Периметр: " << r1.Perimetr();
	cout << endl;
	cout << "Площадь: " << r1.Square();
	cout << endl;
	r1.Show();
	Rectangle r2;
	cout << "Периметр: " << r2.Perimetr();
	cout << endl;
	cout << "Площадь: " << r2.Square();
	cout << endl;
	r2.Show();
	Rectangle r3(12, 15);
	cout << "Периметр: " << r3.Perimetr();
	cout << endl;
	cout << "Площадь: " << r3.Square();
	cout << endl;
	r3.Show();*/

	Circle c1;
	c1.Show();
	Circle c2(15);
	c2.Show();
	cout << "Периметр: " << c2.Perimetr();
	cout << "Площадь: " << c2.Square();
	Circle c3(-15);
	c3.Show();
	cout << "Периметр: " << c3.Perimetr();
	cout << "Площадь: " << c3.Square();

	system("pause");
	return 0;
}