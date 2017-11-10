arr=map(int,raw_input().split())
n=len(arr)
i=0
for i in xrange(n-1):
	j=i+1
	num=arr[j]
	#print "checking for ",num,
	while j>0 and arr[j-1] > num:
		arr[j]=arr[j-1]
		j-=1
	arr[j]=num
	#print arr
print arr
		
