#include<iostream>
using namespace std;

int binarysearch(int num[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
    	int mid=(s+e)/2;
    	
    	if(num[mid]==key){
    		return mid+1;
		}
		else if(num[mid]>key){
			e=mid;
		}
		return mid;
	}
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
	
	cout<<binarysearch(num, n,key);
}


