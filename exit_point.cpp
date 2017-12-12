#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int arr[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
			}
		}
		//suppose 0 means up,1 means right,2 means down and 3 means left
		int dir;
		if(arr[0][0]==0){
			//time to go straight which is right
			dir=1;
		}
		else{
			dir=2; // turn right which is down
		}
		int i=0;
		int j=0;
		while(1){
			if(i<0){
				i=0;
				break;
			}
			else if(i>m-1){
				i=m-1;
				break;
			}
			else if(j<0){
				j=0;
				break;
			}
			else if(j>n-1){
				j=n-1;
				break;
			}
			
			if(arr[i][j]==0){
				//time to go straight
				if(dir==0) i-=1;
				else if(dir==1) j+=1;
				else if(dir==2) i+=1;
				else j-=1;
			}
			else{
				//time to turn right
				arr[i][j]=0;
				if(dir==0){
					dir=1;
					j+=1;
				}
				else if(dir==1){
					dir=2;
					i+=1;
				}
				else if(dir==2){
					dir=3;
					j-=1;
				}
				else{
					dir=0;
					i-=1;
				}
			}
		}
		cout<<i<<" "<<j<<endl;
	}
}