// Single level inheritance
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     string name;
//     int age;

// };
// class Student : public Person{
//     public:
//     int rollno;

//     void getInfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.name="Raj";
//     s1.age=20;
//     s1.rollno=41328;
//     s1.getInfo();
//     return 0;
// }

// Multi-level inheritance
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     string name;
//     int age;

// };
// class Student : public Person{
//     public:
//     int rollno;
// };
// class gradStudent : public Student{
//     public:
//     string gradSub;

//     void getInfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//         cout<<"gradSub : "<<gradSub<<endl;
//     }
// };
// int main(){
//     gradStudent g1;
//     g1.name="Raj";
//     g1.age=20;
//     g1.rollno=41328;
//     g1.gradSub="Physics";
//     g1.getInfo();
//     return 0;
// }

// Multiple inheritance
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;

};
class Student{
    public:
    int rollno;
};
class gradStudent : public Student, public Person{
    public:
    string gradSub;

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<rollno<<endl;
        cout<<"gradSub : "<<gradSub<<endl;
    }
};
int main(){
    gradStudent g1;
    g1.name="Raj";
    g1.age=20;
    g1.rollno=41328;
    g1.gradSub="Physics";
    g1.getInfo();
    return 0;
}