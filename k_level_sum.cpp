#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	int k;
	char arr[1000];
	while(t--){
		cin>>k;
		k+=1;
		cin>>arr;
		int bracket=0;
		int sum=0;
		int digit=0;
		for(int i=0;i<strlen(arr);i++){
			if(arr[i]=='('){
				if(bracket==k){
					//cout<<"adding "<<sum<<" to "<<digit<<endl;
					sum+=digit;
				}
				bracket+=1;
				digit=0;


			}
			else if(arr[i]==')'){
				bracket-=1;
				digit=0;
			}
			else{
				digit=10*digit+(arr[i]-'0');
			}
		}
		cout<<sum<<endl;
	}
}