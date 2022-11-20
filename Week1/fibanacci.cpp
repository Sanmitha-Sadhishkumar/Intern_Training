#include<iostream>
using namespace std;

int fib(int n){
	int a=-1,b=1,c;
	for(int i=0;i<n;i++){
	c=a+b;
	a=b;
	b=c;
	}
	return c;
}

int main(int argc, char *argv[])
{
	cout<<fib(8);
}