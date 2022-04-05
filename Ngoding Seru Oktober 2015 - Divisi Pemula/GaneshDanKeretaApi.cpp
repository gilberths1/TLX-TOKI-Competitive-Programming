#include <iostream>
using namespace std;

int main(){
	int x;
	cin>>x;
	
	int arr[x];
	int y;
	
	for (int a=0;a<x;a++){
		cin>>y;
		arr[a]=y;
	}
	
	for (int a=x-1;a>=0;a--){
		if(a==0){
			cout<<arr[a];
		}
		else{
			cout<<arr[a]<<",";
		}
	}
}
