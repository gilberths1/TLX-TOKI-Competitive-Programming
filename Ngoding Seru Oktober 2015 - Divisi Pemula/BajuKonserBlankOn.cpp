#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a<=10 && b<=40 && c<=90){
		cout<<"S";
	}
	else if(a<=14 && b<=60 && c<=120){
		cout<<"M";
	}
	else if(a<=18 && b<=80 && c<=180){
		cout<<"L";
	}
	else if(a<=25 && b<=100 && c<=220){
		cout<<"X";
	}
	else{
		cout<<"X";
	}
	
}
