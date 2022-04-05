#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	
	for(int a=0;a<y;a++){
		cout<<x<<endl;
		x=x+z;
	}
	
}
