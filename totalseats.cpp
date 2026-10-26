
#include <iostream>
using namespace std;
int main(){
int totalseats=40;
int bookedseat=0;
char choice;
cout << " Total seats=:" <<totalseats<<endl;
while(bookedseat<totalseats){
bookedseat++;
cout << "Do you want to book a seat(Y/N)" << endl;
cin >> choice;
if(choice=='Y'||choice=='y')
{
cout << "How many do you want to book" << endl;
cin >>bookedseat;
totalseats-=bookedseat;
cout << "Totalseats remaining:" << totalseats<<endl;
}

if(choice=='N'||choice=='n')
{
cout << "Thanks for your time:" << endl;
break;}
cout << "Do you want to continue booking (Y/N)" << endl;
cin >> choice;
if(choice=='Y'||choice=='y')
{
cout << "How many more:" << endl;
cin >> bookedseat;
totalseats-=bookedseat;
cout << "Total seats remaining:" <<totalseats<< endl;}
 if(choice=='N'||choice=='n'){
cout << "Booking stopped by user" << endl;
break;}
else{
cout << "Invalid option Try again" << endl;}
if(bookedseat==totalseats){
cout << "Bus Full" << endl;}

}
  return 0;
}