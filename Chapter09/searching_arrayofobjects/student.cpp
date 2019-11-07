#include "student.h"

Student::Student()
{
    m_name = "";
    m_id = 000000;
}

Student::Student(string name, int id)
{
    setStudent(name, id);
}

void Student::setStudent(string name, int id)
{
    m_name = name;
    m_id = id;
}

string Student::getName() const
{
    return m_name;
}

int Student::getID() const
{
    return m_id;
}