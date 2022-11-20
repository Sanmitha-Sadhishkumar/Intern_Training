#include<iostream>
using namespace std;

void func(int ar[],int n,int a, int b){
	int c=0,d=0,i,j;
	for(i=a;i<=b;i++){
		c=0;
		for(j=0;j<n;j++){
			if(ar[j]==i)
			c++;
		}
		d=((c>0)?d+=1:d);
	}
	(d==(b-a+1))?cout<<"Yes":cout<<"No";
}

int main(int argc, char *argv[])
{
	int a[]={1, 4, 5, 2, 7, 8, 3};
	func(a,7,2,7);
}