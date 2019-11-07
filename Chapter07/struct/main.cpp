#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
    int st_studentId;
    string st_name;
    float st_gpa;

    Student()
    {
        st_studentId = 12345;
        st_name = "";
        st_gpa = 0;
    }

    Student(int id, string name, float gpa)
    {
        st_studentId = id;
        st_name = name;
        st_gpa = gpa;
    }
};

int main()
{
    Student s1, s2, s3(45678, "Derek", 2.0);
    vector<Student> studentsVector;

    s1.st_studentId = 23;
    s1.st_name = "John";
    s1.st_gpa = 3.4;

    studentsVector.push_back(s1);
    studentsVector.push_back(s2);
    studentsVector.push_back(s3);

    for (int i = 0; i < studentsVector.size(); ++i)
    {
        cout << studentsVector[i].st_studentId << '\n';
        cout << studentsVector[i].st_name << '\n';
        cout << studentsVector[i].st_gpa << '\n';
    }




    return 0;
}