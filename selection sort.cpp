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
	cout<<"Desired array\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	for(int i=0;i<n-1;i++){
		int mid=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[mid]){
				swap(arr[j],arr[mid]);
			}
			
		}
	}
	
	
	cout<<"Sorted Array\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
}
