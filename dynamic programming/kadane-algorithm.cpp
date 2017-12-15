#include <iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int kadane(int* arr,int n){
    int curr_max=*arr;
    int max_sofar=*arr;
    for(int i=1;i<n;i++){
        curr_max=max(*(arr+i),curr_max+*(arr+i));
        max_sofar=max(curr_max,max_sofar);
    }
    return max_sofar;
}
int main() {
	//code
	int t;
	cin>>t;
	int ans;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    ans=kadane(arr,n);
	    cout<<ans<<endl;
	}
	return 0;
}