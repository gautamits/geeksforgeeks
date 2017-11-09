arr=map(int,raw_input().split())
n=len(arr)
while n > 0:
	for i in xrange(n-1):
		if arr[i] > arr[i+1]:
			arr[i],arr[i+1]=arr[i+1],arr[i]
			#print arr
		#print arr
	n-=1
print arr
