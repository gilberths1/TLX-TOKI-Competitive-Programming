#include <iostream>
using namespace std;

int main(){
	int total;
	int hour, minute, seconds;
	
	cin>>total;
	
	hour = int(total/3600);
	minute = (total - (hour*3600))/60;
	seconds = ((total - (hour*3600))-(minute*60));
	
	cout<<hour<<endl<<minute<<endl<<seconds;
	
}
