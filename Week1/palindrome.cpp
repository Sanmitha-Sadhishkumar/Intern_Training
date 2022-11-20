#include<iostream>
#include<string.h>
using namespace std;

void palindrome()
{
	string s1,s2;
	cout<<"Enter a number : ";
	cin>>s1;
	s2=string(s1.rbegin(), s1.rend());
	cout<<"Reversed number : "<<s2<<endl;
	(s1==s2)?cout<<"Palindrome":cout<<"Not a palindrome";
}

int main(){
	palindrome();
	return 0;
}