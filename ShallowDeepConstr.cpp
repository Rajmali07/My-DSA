#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Deep copy constructor
    Student(const Student &obj) {
        this->name = obj.name;
        cgpaPtr = new double;       // allocate new memory
        *cgpaPtr = *(obj.cgpaPtr);  // copy value, not pointer
    }
    // Distructor
    ~Student(){
        cout<<"Hii, I am distructor.";
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "name: " << name << " ";
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Raj", 7.6);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;  // modifies only s2’s CGPA
    s2.getInfo();
    s1.getInfo();
    return 0;
}