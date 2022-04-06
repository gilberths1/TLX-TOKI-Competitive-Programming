#include <iostream>
using namespace std;

int main(){
	int arr[3];
	char x;
	int temp;

	for (int a=0;a<3;a++){
		cin>>arr[a];
	}
	
	cin>>x;
	for (int a=0;a<3;a++){
		for (int b=a+1;b<3;b++){
			if(arr[a]>arr[b]){
				temp=arr[a];
				arr[a]=arr[b];
				arr[b]=temp;
			}
		}
	}
	
	if(x=='1'){
		for (int a=0;a<3;a++){
			cout<<arr[a]<<"  ";
		}
	}
	else if(x=='0'){
		for (int a=2;a>=0;a--){
			cout<<arr[a]<<" ";
		}
	}
}
