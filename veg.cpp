#include<iostream>
using namespace std;
main()
{
float fruit,veg,fr,vg;
int total,fruits,TOTAL;
cout<<"Enter vegetable price per kg(in coins): "<<endl;
cin>>veg;
cout<<"Enter fruit price per kg(in coins): "<<endl;
cin>>fruit;
cout<<"Enter total kgs of vegetables: "<<endl;
cin>>total;
cout<<"Enter total kgs of fruits: "<<endl;
cin>>fruits;
vg=(veg*total)/1.94;
fr=(fruit*fruits)/1.94;
TOTAL=vg+fr;
cout<<"Total earnings in Rupees: "<< TOTAL;
}