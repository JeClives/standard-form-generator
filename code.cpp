//Enter any Number
#include <iostream>
using namespace std;
void standardForm(double num){
int t=0;
cout << "You Entered: "<<num<<"\n\n";
cout << "In Standard Form, "<<num<<" is ";
if (num == +0.0 || num == -0.0){cout << 0.00<<"*10^"<<0;}
else if (num<1&&num>+0){
    do {num=num*10; t=t-1;}
    while (num<=1);
if(num==-10){cout <<num/10<<"*10^"<<t-1;}
else{cout <<num<<"*10^"<<t;}}
else if (num>-1&&num<-0){
    do {num=num*10; t=t-1;}
    while (num>-1);
cout <<num<<"*10^"<<t;}
else if (num>=1||num<=-1){
num=num+0.00;
    do {num=num/10; t=t+1;}
    while (num>1||num<-1);
if(num>=1||num<=-1){
if(num==1||num==-1){cout <<num<<"*10^"<<t;}
else{cout <<num<<"*10^"<<t;}}
else{cout <<num*10<<"*10^"<<t-1;}
   }
}
int main() {
double N = -0.02092;
cin >> N;
standardForm (N);
return 0;}
