#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
	bool swapped;
	for(int i=0;i<n-1;i++){
		swapped = false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubblesort(arr , n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}