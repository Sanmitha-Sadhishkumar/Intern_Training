#include<iostream>
using namespace std;

int* reverse(int *a,int n){
	n--;
	int i,b[n];
	for(i=n;i>=0;i--){
		b[n-i]=a[i];
	}
	return b;
}

int main(int argc, char *argv[])
{
	int a[]={1,2,3,4};
	int *b=reverse(a,4);
	cout<<b[3];
}