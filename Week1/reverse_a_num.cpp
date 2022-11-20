#include<iostream>
using namespace std;

int reverse(int n){
	int r=0,d;
	while(n){
		d=n%10;
		r=r*10+d;
		n/=10;
	}
	return r;
}
int main()
{
	int n;
	cout<<"Enter a num : ";
	cin>>n;
	
	cout<<"Reversed num : "<<reverse(n);
	return 0;
}