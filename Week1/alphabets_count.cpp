#include<iostream>

using namespace std;

int count(string s){
	int i=0,c=0;
	while(s[i]!='\0'){
		int a=(int)s[i];
		if((65<=a)&&(a<=91) || (97<=a)&&(a<=123)){
		c++;
		}
		i++;
	}
	return c;
}

int main(int argc, char *argv[])
{
	cout<<count("Namez56");
}