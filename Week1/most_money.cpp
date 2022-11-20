#include<iostream>
using namespace std;

int maximizemoney(int n,int k){
	int a=n/2;
	if(n%2==0)
	return a*k;
	else
	return (++a)*k;
}

int main(int argc, char *argv[])
{
	cout<<maximizemoney(5,10);
}