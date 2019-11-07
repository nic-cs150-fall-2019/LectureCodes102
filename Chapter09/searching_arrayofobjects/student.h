#ifndef STUDENT_H
#define STUDENT_H

const int NUM_STUDENTS = 10;

class Student
{
public:
    Student();
    Student(string name, int id);
    void setStudent(string name, int id);
    string getName() const;
    int getID() const;

private:
    string m_name;
    int m_id;
};

#endif