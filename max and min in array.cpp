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
	cout<<"Min value in array:-\n";
	int min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<min<<endl;
	
	cout<<"Max value in array:-\n";
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<max<<endl;
}
