#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n:-\n";
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	cout<<"Printed array:-\n";
	
	for(int i=0;i<n;i++){
		cout<<num[i]<<" ";
	}
    int key;
    cin>>key;
    
    for(int i=0;i<n;i++){
    	if(num[i]==key){
    		cout<<i+1<<endl;
		}
		else{
			cout<<"Element not existing\n";
		}
	}
}
