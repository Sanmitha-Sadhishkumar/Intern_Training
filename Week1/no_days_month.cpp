#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m;
	int year,res;
	cout<<"Enter month(first 3 letters) and year: ";
	cin>>m>>year;
	if(((year%4==0 || year%100!=0)&&(year%400!=0)) &&m=="feb")
		res=29;
	
	else{
		if(m=="jan" || m=="mar" || m=="may" || m=="jul" || m=="aug" || m=="oct" || m=="dec")
		res=31;
		else if(m=="apr" || m=="jun" || m=="sep" || m=="nov" )
		res=30;
		else if(m=="feb")
		res=28;
		else
		cout<<"Invalid entry";
	}
	cout<<"No of days : "<<res;
}