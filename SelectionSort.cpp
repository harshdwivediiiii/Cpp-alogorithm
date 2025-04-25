#include<iostream>
using namespace std;

void Print(int[],int);
void SelectionSort(int[],int);
void BubbleSort(int[],int);

int main(){
	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	// //Selection Sort
	// SelectionSort(arr,n);
	// Print(arr,n);

	// Bubble Sort
	BubbleSort(arr,n);
	Print(arr,n);

	return 0;
}

void BubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		// Swapping 
		for(int j=0;j<=n-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
		Print(arr,n);
	}

}

void Print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void SelectionSort(int arr[],int n){
	// no of iterations => n-1
	for(int i=0;i<n-1;i++){
		cout<<"iteration : "<<i<<"->  ";
		// Calculate min element arr[i]-- arr[n-1]
		int min=i;
		for(int j=i;j<n;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		// we get index of min element
		swap(arr[i],arr[min]);
		Print(arr,n);
	}
}
