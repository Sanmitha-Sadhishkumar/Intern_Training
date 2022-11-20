#include<iostream>
using namespace std;

int large(int ar[], int n){
	int a=ar[0];
	for(int i=0;i<n;i++){
		a= ((a>ar[i])?a:ar[i]);
	}
	return a;
}

int print2large(int ar[],int n){
	int i,j,k,a,b,c;
	a=large(ar,n);
	for(int i=n;i>=0;i--){
		if(ar[i]==a){
			if(i==0)
				ar[i]=ar[i+1];
			else if(i==n-1)
				ar[i]=ar[i-1];
			else
				ar[i]=ar[i-1];
		}
	}
	return large(ar,n);
}
int main(int argc, char *argv[])
{
	int a[]={1,2,10,4};
	cout<<print2large(a,4);
}