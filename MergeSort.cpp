// MergeSort.cpp
#include<iostream>
using namespace std;
void Print(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Merge(int arr[],int s,int e){
	int mid = (s+e)/2;

	int temp[100];

	int i=s, j=mid+1;
	int k=s;

	while(i<=mid && j<=e){

		if(arr[i]<arr[j])
			temp[k++]=arr[i++];
		else
			temp[k++] = arr[j++];

	}

	while(i<=mid)
		temp[k++]=arr[i++];

	while(j<=e)
		temp[k++] = arr[j++];

	for(int i=s ;i<=e;i++)
		arr[i] = temp[i];

}

void mergeSort(int arr[], int s, int e) {
	
	if(s>=e)
		return;

	int mid = (s+e)/2;
	// call the left half
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);

	// merge both the half
	Merge(arr,s,e);
}

int main() {
	freopen("input.txt", "r", stdin);
	int arr[100];
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	Print(arr, n);

	mergeSort(arr, 0, n - 1);

	Print(arr, n);

	return 0;
}