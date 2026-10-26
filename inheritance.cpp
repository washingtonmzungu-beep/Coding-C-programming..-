#include<iostream>
using namespace std;
class Shape{
public:
void display(){cout << "This is a shape" << endl;}
};
class Circle: public Shape{
public:
void draw(){cout << "Draw a circle" << endl;}
};
int main (){
Circle cir;
cir.display();
cir.draw();
return 0;
}
    