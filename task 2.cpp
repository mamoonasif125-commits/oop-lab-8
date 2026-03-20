#include <iostream>
using namespace std;

class Student
{
protected:
    string name, address;
    int roll_no;

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll_no;

        cin.ignore(); 
        cout << "Enter address: ";
        getline(cin, address);
    }

    void showStudent()
    {
        cout << "\n Student Detail \n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Address: " << address << endl;
    }
};

class Marks : public Student 
{
private:
    int m1, m2, m3, total;
    float average;

public:
    void inputmarks()
    {
        cout << "Enter marks for 3 subjects:\n";
        cout << "Subject 1: ";
        cin >> m1;
        cout << "Subject 2: ";
        cin >> m2;
        cout << "Subject 3: ";
        cin >> m3;

        total = m1 + m2 + m3;
        average = total / 3.0;
    }

    void show_detail() 
    {
        showStudent();

        cout << "\nMarks \n";
        cout << "Subject 1: " << m1 << endl;
        cout << "Subject 2: " << m2 << endl;
        cout << "Subject 3: " << m3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main()
{
    Marks obj;

    obj.getdata();
    obj.inputmarks();
    obj.show_detail();

    return 0;
}
