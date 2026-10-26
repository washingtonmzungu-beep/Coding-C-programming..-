#include <iostream>
using namespace std;
class Addition {
public:
int add(int a,int b){return a+b;}
float add(float a,float b){return a+b;}
double add(double a,double b,double c)
{return a+b+c;}
};
int main(){
Addition ad;
cout << "Sum:" <<ad.add(4,6)<<endl;
cout << "Sum:" <<ad.add(6.2f,7.0f)<<endl;
cout << "Sum:" <<ad.add(4.54,3.31,4.21)<<endl;
    return 0;
}