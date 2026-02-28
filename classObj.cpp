#include<iostream>
#include<string>
using namespace std;
class Teacher{
    // Attributes or Properties
    private:
    double salary;

    public:
    // // Non-Parameterized Constructior
    // Teacher(){
    //     dept="Computer Science";
    // }

    // Copy Constructor
    Teacher(Teacher &obj){
        this->name=obj.name;
        this->dept=obj.dept;
    }

    // Parameterized Constructor
    Teacher(string n, string d){
        name=n;
        dept=d;
    }

    string name;
    string dept;
    int age;
    // Method or Member Functions
    void changeDept(string newDept ){
        dept = newDept;
    }
    // Setter
    void setSalary(double s){
        salary=s;
    }
    // Setter
    double getSalary(){
        return salary;
    }
    void display() {
    cout << "Name: " << name << "\n"
             << "Department: " << dept << "\n"
             << "Age: " << age << "\n"
             << "Salary: " << salary << endl;
    }
};
int main(){
    // t1 is object
    // below line is for parameterized constructor
    Teacher t1("Raj", "Computer Science");

    // below line is for non-parameterized constructor
    // Teacher t1;
    // t1.name="Raj";
    // t1.age=20;
    // t1.setSalary(500);

    Teacher t2(t1);
    t2.display();
    t1.display();
    return 0;
}