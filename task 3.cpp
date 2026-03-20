#include <iostream>
using namespace std;

class Employee 
{
protected:
    string name;
    int id;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Manager : public Employee
{
private:
    string title;
    string salary;

public:
    void input()
    {
        Employee::input();
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void show()
    {
        cout << "\n--- Manager Details ---\n";
        Employee::show();
        cout << "Title: " << title << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Scientist : public Employee
{
private:
    int publications;
    string salary;

public:
    void input()
    {
        Employee::input();
        cout << "Enter number of publications: ";
        cin >> publications;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void show() 
    {
        cout << "\n--- Scientist Details ---\n";
        Employee::show();
        cout << "Publications: " << publications << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Clerks : public Employee
{
private:
    int overtime;

public:
    void input()
    {
        Employee::input();
        cout << "Enter overtime hours: ";
        cin >> overtime;
    }

    void show()
    {
        cout << "\n--- Clerk Details ---\n";
        Employee::show();
        cout << "Overtime: " << overtime << endl;
    }
};

int main()
{
    Manager m;
    Scientist s;
    Clerks c;

    cout << "\nEnter Manager Data:\n";
    m.input();

    cout << "\nEnter Scientist Data:\n";
    s.input();

    cout << "\nEnter Clerk Data:\n";
    c.input();

    cout << "\nDisplaying Information:";
    m.show();
    s.show();
    c.show();

    return 0;
}
