#include<iostream>
using namespace std;
class Student{
    int rollno;
    char name[50];
    double fee;
    public:
    Student()
    {
        cout<<"Enter student Details"<<endl;
        cout<<"Enter The roll number"<<endl;
        cin>>rollno;
        cout<<"Enter The Name of the student"<<endl;
        cin>>name;
        cout<<"Enter The Fees"<<endl;
        cin>>fee;
    }
    void display(){
        cout<<endl<<"Roll Number: "<<rollno<<"\t"<<"Name: "<<name<<"\t"<<"Fee: "<<fee;
    }
};
int main(){
    Student s1;
    s1.display();
    return 0;
}

//Enter student Details
//Enter The roll number
//127
//Enter The Name of the student
//Varun
//Enter The Fees
//1500000

//Roll Number: 127	Name: Varun	Fee: 1.5e+06
