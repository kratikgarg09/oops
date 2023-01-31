#include<iostream> 
#include <bits/stdc++.h>

using namespace std; 

class student 
{
    private:
        string studentName;
        int studentStandard;
        int studentAge;
        int studentRollNo;
        int studentMarks;

    public:
        string getStudentName(){
            return studentName;
        }
        void setStudentName(string studentName){
            this ->studentName  = studentName;
        }

        int getStudentStandard(){
            return studentStandard;
        }
        void setStudentStandard(int studentStandard){
            this ->studentStandard  = studentStandard;
        }        

        int getStudentRollNo(){
            return studentRollNo;
        }
        void setStudentRollNo(int studentRollNo){
            this ->studentRollNo  = studentRollNo;
        } 

        int getStudentAge(){
            return studentAge;
        }
        void setStudentAge(int studentAge){
            this ->studentAge  = studentAge;
        } 

        int getStudentMarks(){
            return studentMarks;
        }
        void setStudentMarks(int studentMarks){
            this ->studentMarks  = studentMarks;
        } 

};

int main() 
{ 
    student obj;
    obj.setStudentName("Kratik");
    obj.setStudentStandard(12);
    obj.setStudentMarks(74.4);
    obj.setStudentAge(16);
    obj.setStudentRollNo(21);

    cout << "Student Name : " << obj.getStudentName() << endl; 
    cout << "Student Standard : " << obj.getStudentStandard() << endl;
    cout << "Student Rollno : " << obj.getStudentRollNo() << endl; 
    cout << "Student Age : " << obj.getStudentAge() << endl;
    cout << "Student Marks : " << obj.getStudentMarks();   
    return 0;
}