#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++) cin>>arr[i];
		arr[n]=-1;
		for(int i=0;i<n-1;i++){
			int j=i+1;
			while( arr[j] < arr[i] && arr[j]!=-1){
				j+=1;
			}
			cout<<arr[j]<<" ";
			

		}
		cout<<"-1 ";
		cout<<endl;
	}
}