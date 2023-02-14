#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int id;
    double salary;

public:
    void setData(string n, int i)
    {
        name = n;
        id = i;
    }

    virtual void calculateSalary() = 0;
};
class salary_employee : private Employee
{
private:
    int number_of_hours;
    double pay_per_hour;

public:
    salary_employee(int n, double d)
    {
        number_of_hours = n;
        pay_per_hour = d;
    }
    void calculateSalary()
     {
         cout << "The employee salary is: " << number_of_hours * pay_per_hour << endl;
     }
};
class commision_employee : private Employee
{
private:
    double DA, HRA, basic_salary;

public:
    commision_employee(double d, double h, double b)
    {
        DA = d;
        HRA = h;
        basic_salary = b;
    }

public:
    void calculateSalary() { cout << "The employee salary is: " << DA + HRA + basic_salary << endl; }
};
int main()
{
    salary_employee s(2, 3000);
    commision_employee c(300, 1000, 200);
    s.calculateSalary();
    c.calculateSalary();
}