#include<iostream>
using namespace std;

int linearsearch(int num[], int n, int key){
	for(int i=0;i<n;i++){
		if(num[i]==key){
			return i+1;
		}
	}
	return -1;
}

int main(){
	
	
	int n;
	cout<<"Enter the value of n:-\n";
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	cout<<"Array Formed:-\n";
	for(int i=0;i<n;i++){
		cout<<num[i]<<" ";
	}
	cout<<"Enter the word to be searched:-\n";
	int key;
	cin>>key;
	
	cout<<linearsearch(num, n,key);
}


