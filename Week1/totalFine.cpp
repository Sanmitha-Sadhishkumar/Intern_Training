#include<iostream>
using namespace std;

int totalFine(int cars[], int fine[], int n, int date){
	int total=0,i,a;
	a=date%2==0?1:0;
	for(i=0;i<n;i++){
		if(cars[i]%2==a)
		total+=fine[i];
	}
	return total;
}

int main(int argc, char *argv[])
{
	int N = 3, date = 81;
	int car[] = {2222, 2223, 2224};
	int fine[] = {200, 300, 400};
	cout<<totalFine(car,fine,N,date);
}