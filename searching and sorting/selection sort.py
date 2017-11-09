arr=map(int,raw_input().split())
i=0
for i in xrange(len(arr)):
	j=i
	index=j
	while j < len(arr):
		if arr[j] < arr[index]:
			index=j
		j+=1
	arr[i],arr[index]=arr[index],arr[i]
	print arr
print arr
			
