# include<iostream>
# include<conio.h>
using namespace std;
int main()
{
	double a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
	cout<<"enter the numbers obtained in five subjects\n";
	cin>>a>>b>>c>>d>>e;
	f=a+b+c+d+e;
	g=f/5;
	h=g*100;
	cout<<"the total is:"<<f<<"\nthe average is:"<<g<<"\nthe percentage is"<<h;
	return 0;
}
