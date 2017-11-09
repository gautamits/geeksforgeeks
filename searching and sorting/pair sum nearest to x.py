import math
arr=map(int,raw_input().split())
arr=sorted(arr)
n=int(raw_input())
a=arr[0]
b=arr[len(arr)-1]
diff=abs(a+b-n)
result=a,b
l=len(arr)-1
i=1
while i < l-i :
	if abs(arr[i]+ arr[l-i] - n) < diff:
		diff=abs(arr[i]+arr[l-i]-n)
		result=arr[i],arr[l-i]
	i+=1
print result
