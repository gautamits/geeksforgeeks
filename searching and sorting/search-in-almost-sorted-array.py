def result(arr,a,b,x):
	if b >= a:
		mid = a + ( b - a ) /2
		if arr[mid]==x: return mid
		if arr[mid-1]==x and mid > a: return mid-1
		if arr[mid+1]==x and mid < b: return mid+1
		if arr[mid] > x: return result(arr,a,mid-2,n)
		else: return result(arr,mid+2,b,n)


arr=map(int,raw_input().split())
n=int(raw_input())
print result(arr,0,len(arr)-1,n)
