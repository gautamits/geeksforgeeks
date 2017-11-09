arr=map(int,raw_input().split())
arr=sorted(arr)
n,m=map(int,raw_input("enter number and its nearest numbers ").split())
i=arr.index(n)
#print i
result=[]
left=1
right=1
j=0
while j < m and i-left >=0 and i+right < len(arr):
	#print j,left,right,result
	if arr[i]-arr[i-left] <  arr[i+right]-arr[i]:
		result.append(arr[i-left])
		left+=1
	else:
		result.append(arr[i+right])
		right+=1
	j+=1
print result
		
