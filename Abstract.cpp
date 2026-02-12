#include<iostream>
using namespace std;
class Shape{ //now this class become abstract otherwise we need to add abstract keyword before class
    virtual void draw()=0; //Pure virtual function because it is initialized
};
class Circle : public Shape{
    public:
    void draw(){
        cout<<"Drawing a circle";
    }
};
int main(){
    Circle c1;
    c1.draw();
    return 0;
}