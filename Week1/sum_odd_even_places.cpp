#include<iostream>
using namespace std;

void sum(int ar[],int n){
	int o=0, e=0;
	for(int i=0;i<n;i++){
		i%2?e+=ar[i]:o+=ar[i];
	}
	cout<<o<<" "<<e;
}

int main(int argc, char *argv[])
{
	int N=5;
	int Arr[]={1,3,5,7,9};
	sum(Arr,N);
}