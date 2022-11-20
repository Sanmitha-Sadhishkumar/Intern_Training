#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int armstrongNumber(int num){
	int n=to_string(num).length();
	int a=0,d;
	while(num){
		d=num%10;
		a+=pow(d,n);
		num/=10;
	}
	return a;
}
int main()
{
	int n;
	cout<<"Enter a num : ";
	cin>>n;
	(n==armstrongNumber(n))?cout<<"Armstring number":cout<<"Not an armstrong number";
}