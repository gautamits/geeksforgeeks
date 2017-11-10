#include <bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return (a>b)?a:b;
}
int knapsack(int W,int wt[],int val[],int n){
    int i;
    int w;
    int Knapsack[n+1][W+1];
    for(i=0;i<=n;i++){
        for(w=0;w<=W;w++){
            if( i==0 || w==0 ) Knapsack[i][w]=0;
            else if(wt[i-1] <= w)
                Knapsack[i][w]=max(val[i-1]+Knapsack[i-1][w-wt[i-1]],Knapsack[i-1][w]);
            else
                Knapsack[i][w]=Knapsack[i-1][w];
        }
    }
    for(i=0;i<=n;i++){
        for(w=0;w<=W;w++){
            cout<<Knapsack[i][w]<<" ";
        }
        cout<<endl;
    }
    return Knapsack[n][W];
}
int main(){
    int val[]={100,60,120};
    int wt[]={10,20,30};
    int W=40;
    int n=sizeof(val)/sizeof(val[0]);
    cout<<knapsack(W,wt,val,n)<<endl;
}