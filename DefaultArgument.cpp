#include<iostream>
using namespace std;

void greet(string name="Guest"){
    cout<<"Hello! "<<name<<endl;
}
int main(){
    // default
    greet();
    // customized
    greet("Raj");

    return 0;
}