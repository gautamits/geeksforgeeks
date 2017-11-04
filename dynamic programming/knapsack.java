public class knapsack{
    public static int max(int a,int b){
        return (a>b)?a:b;
    }
    public static int knap(int W,int[] val,int[] wt,int n){
        int i=0;
        int w=0;
        int[][] K=new int[n+1][W+1];
        for(i=0;i<=n;i++){
            for(w=0;w<=W;w++){
                if(i==0 || w==0) K[i][w]=0;
                else if(wt[i-1] <= w) 
                    K[i][w]=max(K[i-1][w],val[i-1]+K[i-1][w-wt[i-1]]);
                else
                    K[i][w]=K[i-1][w];
            }
        }
        return K[n][W];
    }
    public static void main(String[] args){
        int[] val={100,60,120};
        int[] wt={10,20,30};
        int W=50;
        System.out.println(knap(W,val,wt,val.length));
    }
}