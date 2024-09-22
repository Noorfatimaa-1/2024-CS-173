#include<iostream>
using namespace std;
main()
{int sqmeter,width,height,totalwalls;
cout<<"no.of sq meters u can paint"<<endl;
cin>>sqmeter;
cout<<"width of single wall"<<endl;
cin>>width;
cout<<"height of single wall"<<endl;
cin>>height;
totalwalls=sqmeter/(width*height);
cout<<"no. of walls u can paint: "<<totalwalls;


}