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
	for(int i=1;i<n-1;i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
			cout<<arr[i]<<" ";
		}
	}
	

}
