#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n:-\n";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Final array formed:-\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Reversed array:-\n";
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
}
