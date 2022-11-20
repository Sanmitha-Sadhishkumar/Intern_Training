#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three sides : ";
	cin>>a>>b>>c;
	if(a==b && b==c)
	cout<<endl<<"Equilateral triangle";
	else if (a==b || b==c || a==c)
	cout<<endl<<"Isoceles triangle ";
	else
	cout<<endl<<"Scalene triangle";
	return 0;
}