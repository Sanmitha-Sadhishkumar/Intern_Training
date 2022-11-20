#include<iostream>
#include<cmath>
using namespace std;

int nth_term(int a, int r, int n){
	return (a*pow(r,--n));
}
int main()
{
	int a,r,n;
	cout<<"Enter the inital term, common ratio and n : ";
	cin>>a>>r>>n;
	cout<<"Nth term : "<<nth_term(a,r,n);
	return 0;
}