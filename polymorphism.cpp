// // Example of compile time polymorphism.
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     string name;
//     int age;

//     // its a example of polymorphism (i.e constructor overloading)
//     Person(){
//         cout<<"Hii, I am non parameterized constructor";
//     }

//     Person(string name, int age){
//         this->name=name;
//         this->age=age;
//         cout<<"Hii, I am parameterized constructor";
//     }
// };

// int main(){
//     Person p("Raj", 20);

//     // Person p;
//     // p.name="Raj";
//     // p.age=20;
//     return 0;
// }

// Example of runtime polymorphism.
#include<iostream>
using namespace std;
class Parent{
    public:
    string name;
    int age;

    void getInfo(){
        cout<<"Parent class";
    }
    virtual void hello(){
        cout<<"Hello from parent";
    }
};
class Child : public Parent{
    public:
    void hello(){
        cout<<"Hello from child class";
    }
};
int main(){
    Child c1;
    c1.hello();
    return 0;
}