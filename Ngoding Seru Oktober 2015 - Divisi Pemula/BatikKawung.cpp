#include <iostream>
using namespace std;

int main(){
	int x,y;
	char z;
	
	cin>>x>>z>>y;
	
	for (int a=0;a<x;a++){
		for (int b=0;b<x;b++){
			//check right diagonal
			if(a==b){
				cout<<y;
			}
			//check left diagonal
			else if(a+b==x-1){
				cout<<y;
			}
			//else, print the remaining
			else{
				cout<<z;
			}
		}
		cout<<endl;
	}
}
