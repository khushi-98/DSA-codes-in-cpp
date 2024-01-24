#include<iostream>
using namespace std;

int main(){
	cout<<"Bubble Sort\n";
	cout<<endl;
	int n;
	cout<<"Enter the value of n:-\n";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Desired array\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j=n-1-i;j++){
		if(arr[j+1]<arr[j]){
			swap(arr[j+1],arr[j]);
		}
		}
	}
	
	cout<<endl;
	cout<<"Sorted Array\n";
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
}
