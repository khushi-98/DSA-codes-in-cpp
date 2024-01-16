#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number:-\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the array:-\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Display the array:-\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"The Occurance of number:-\n";
	int key;
	cout<<endl;
	
	cin>>key;
	int count=0;
	for(int i=0;i<n;i++){
		if(key==arr[i]){
			count=count+1;
		}
	}
	cout<<endl;
	cout<<"The Frequency of"<<key<<":-"<<count<<endl;
	
}
