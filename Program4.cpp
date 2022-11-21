#include <iostream>

using namespace std;
class Student_Evening{
    public:
    string name;
    int roll;
    int totalmarks;
};

int main()
{
    Student_Evening s1;
    cout << "Enter name of student:";
    cin >> s1.name;
    cout << "Enter roll.no of student:";
    cin >> s1.roll;
    cout << "Enter total marks obtained by the student:";
    cin >> s1.totalmarks;

    cout << "Student details:\n";
    cout << "Name:" << s1.name;
    cout << "\nRoll.No:" << s1.roll;
    cout << "\nTotal Marks obtained:" << s1.totalmarks;
}
