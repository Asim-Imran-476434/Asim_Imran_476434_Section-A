#include <iostream>
using namespace std;
int main(){
	int a[5],sum=0,product=1;
	for(int i=0;i<5;i++){
		cout<<"Enter No."<<i+1<<" of the array:";
		cin>>a[i];
		sum=sum+a[i];
		product=product*a[i];
	}
	cout<<"Sum of elements of array is ="<<sum<<endl;
	cout<<"Product of elements of array is = "<<product<<endl;
	return 0;

}
