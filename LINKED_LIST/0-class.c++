#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student(string name, int age)
    {
        this->name = name;
        (*this).age = age;
    };
};

void change(Student *s)
{
    s->name = "hArsh";
}
int main()
{
Student * s=new Student("Manmohan",15); //using pointer
cout<<s->name<<endl;
change(s);
cout<<s->name<<endl;

}