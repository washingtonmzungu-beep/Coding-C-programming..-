#include<iostream>
using namespace std;
class Animal {
public:
 virtual void sound() { cout << "Makes sound\n"; }
};

class Dog : public Animal {
public:
 void sound() { cout << "Barks\n"; }
};
int main(){
Animal* a = new Dog();
a->sound(); 
return 0;
}
