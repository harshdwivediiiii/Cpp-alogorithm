// insertionSort.cpp
#include<iostream>
using namespace std;

void Print(int[],int);
void SelectionSort(int[],int);
void BubbleSort(int[],int);
void insertionSort(int [],int);
void countSort(int[],int );

int main(){
	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	//Count Sort
	countSort(arr,n);
	Print(arr,n);

	// // INsertion Sort
	// insertionSort(arr,n);
	// Print(arr,n);	

	// //Selection Sort
	// SelectionSort(arr,n);
	// Print(arr,n);

	// // Bubble Sort
	// BubbleSort(arr,n);
	// Print(arr,n);

	return 0;
}


void countSort(int arr[],int n){

	int *count=new int [n+1]{0};
	// int *count=int [n+1]{1};

	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}

	int j=0;
	for(int i=0;i<n+1;i++){
		while(count[i]){
			arr[j]=i;
			j++;
			count[i]--;
		}
	}


}

void insertionSort(int arr[],int n){

	for(int i=1;i<n;i++){
		int curr_element=arr[i];

		int j;
		for(j=i-1;j>=0 && arr[j]>curr_element; j--){
			arr[j+1]=arr[j];
		}

		arr[j+1]=curr_element;
	}

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
