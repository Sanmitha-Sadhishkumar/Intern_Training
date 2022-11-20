#include<iostream>
using namespace std;

int single(int ar[],int n){
	int a,i,j;
	for(i=0;i<n-1;i++){
		a=0;
		for(j=i+1;j<n;j++){
		if(ar[j]==ar[i])
		a++;
		}
		if(a==0)
		return ar[i];
	}
}

int main(int argc, char *argv[])
{
	int ar[]={1,2,3,2,1,4,4};
	cout<<single(ar,7);
}