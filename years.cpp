#include<iostream>
using namespace std;
main(){
int age,moves,avg;
cout<< " enter the persons age: "<<endl;
cin>>age;
cout<<"enter no. of times they have moved: "<<endl;
cin>>moves;
avg=age/(moves+1);
cout<<"avg no. of years lived in the same house: "<<avg;
}