#include<iostream>
#include<algorithm>
using namespace std;

void anagram(string s, string t){
	int a,i,j;
	sort(s.begin(), s.end());
	sort(t.begin(),t.end());
	if(s==t)
	cout<<"yes";
	else
	cout<<"no";
}

int main(){
	anagram("hai","iaih");
}