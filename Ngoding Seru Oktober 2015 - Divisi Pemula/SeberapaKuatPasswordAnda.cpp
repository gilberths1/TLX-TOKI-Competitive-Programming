#include  <iostream>
#include  <bits/stdc++.h>
using namespace std;
 
int main(){
	string str;
	int statusUpper=0, statusLower=0, statusDigit=0, statusUnik=0;
	int totalAlph=0;
	
	cin >> str;
	
	for(int a=0;a<str.length();a++){
		if(isupper(str[a])){
			statusUpper=1;
			totalAlph+=1;
		}
		if(islower(str[a])){
			statusLower=1;
			totalAlph+=1;
		}
		if(isdigit(str[a])){
			statusDigit=1;
		}
		if(str[a]=='_' || str[a]=='!' || str[a]=='?'){
			statusUnik=1;
		}	
	}

	if(str.length()>=8 && statusUpper==1 && statusLower==1 && statusDigit==1 && statusUnik==1){
		cout<<"Kuat";
	}
	else if(totalAlph>12){
		cout<<"AgakKuat";
	}
	else{
		cout<<"Lemah";
	}

}
