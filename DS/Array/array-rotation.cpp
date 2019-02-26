#include <bits/stdc++.h>
using namespace std;
void reverse(int* arr, int start,int end){
	while(start <= end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	return;
}
int main(){
	int n,d;
	cout<<"Enter size of array and number by which to rotate it"<<endl;
	cin>>n>>d;
	int arr[n];
	cout<<"enter array"<<endl;
	for(int i=0;i<n;i++) cin>>arr[i];
	reverse(arr, 0, d-1);
	reverse(arr, d, n-1);
	reverse(arr, 0, n-1);
	for(int i=0;i<n;i++) cout<<arr[i]i<<" ";
	cout<<endl;
	return 0;
}
