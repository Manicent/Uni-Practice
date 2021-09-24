/*
Q:  Read and Print Student Information Class Example Program in C++
*/

#include<iostream>
#include<string>
#define STUDENT_NAME_LIMIT 30

using std::cout;
using std::cin;
using std::endl;

class StudentInfo
{
    private:
    char name[STUDENT_NAME_LIMIT], section;
    int grade, rollno;

    public:
    void ReadInfo();
    void PrintInfo();
};

int main()
{
    StudentInfo stuobj;

    stuobj.ReadInfo();

    cout<<endl;

    stuobj.PrintInfo();

    return 0;
}

void StudentInfo::ReadInfo()
{
    cout<<"Enter the student info below!"<<endl;

    cout<<"Enter the name: ";
    cin.getline(name, STUDENT_NAME_LIMIT);
    cout<<"Enter the class: ";
    cin>>grade;
    cout<<"Enter the section: ";
    cin>>section;
    cout<<"Enter the roll number: ";
    cin>>rollno;
}

void StudentInfo::PrintInfo()
{
    cout<<"Student Info for "<<name<<"!"<<endl;

    cout<<"Class:\t\t"<<grade<<endl;
    cout<<"Section:\t"<<section<<endl;
    cout<<"Roll Number:\t"<<rollno<<endl;
}