
#include<iostream>
using namespace std;


void mergeSortedArray(int arr1[],int n,int arr2[],int m){
	int i=0;
	int j=0;
	int arr3[200];
	int k=0;

	while(i<n&&j<m){
		if(arr1[i]<arr2[j]){
			arr3[k++]=arr1[i++];
		}else{
			arr3[k++]=arr2[j++];
		}
	}

	while(i<n){
		arr3[k++]=arr1[i++];
	}

	while(j<m){
		arr3[k++]=arr2[j++];
	}


	for(int x=0;x<k;x++){
		cout<<arr3[x]<<" ";
	}
}

int main(){
	freopen("input.txt","r",stdin);
	int arr1[100],arr2[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr1[i];

	int m;
	cin>>m;
	for(int i=0;i<m;i++)
		cin>>arr2[i];

	mergeSortedArray(arr1,n,arr2,m);



	return 0;
}
