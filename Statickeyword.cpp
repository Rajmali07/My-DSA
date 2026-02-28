// Example of static variable
// #include<iostream>
// using namespace std;
// void fun(){
//     static int x=0;
//     cout<<"x : "<<x<<endl;
//     x++;
// }
// int main(){
//     fun();
//     fun();
//     fun();
//     return 0;
// }

// Example of static object
#include<iostream>
using namespace std;
class ABC{
    public:
    ABC(){
        cout<<"Constructor"<<endl;
    }
    ~ABC(){
        cout<<"Destructor"<<endl;
    }
};
int main(){
    if(true){
        // without static keyword
        ABC obj;

        // with static keyword
        //  static ABC obj;
    }
    cout<<"Main function"<<endl;
    return 0;
}