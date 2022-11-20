#include<iostream>
using namespace std;

int search(int x, int arr[],int n){
	for(int i=0;i<n;i++){
		if(x==arr[i])
		return i;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	int a[4]={1,2,3,4};
	cout<<search(7,a,4);
}