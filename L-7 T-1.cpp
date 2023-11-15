#include <iostream>
using namespace std;
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		cout<<"Enter no."<<i+1<<" of the array:";
		cin>>a[i];
		
	}
	for(int j=0;j<10;j++){
		cout<<a[j]<<" ";
	}
	return 0;
}
