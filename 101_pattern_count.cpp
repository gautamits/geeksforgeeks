#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	char arr[2001];
	while(t--){
		int one=0;
		int zero=0;
		cin>>arr;
		int sum=0;
		for(int i=0;i<strlen(arr);i++){
			if(arr[i]=='0') zero=1;
			else if(arr[i]=='1'){
				if(one == 0){
					one=1;
					zero=0;
				}
				else if(zero==1){
					sum+=1;
					zero=0;
				}
			}
			else{
				zero=0;
				one=0;
			}
		}
		cout<<sum<<endl;
	}
}