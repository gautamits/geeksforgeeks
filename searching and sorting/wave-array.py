arr=map(int,raw_input().split())
i=1
for i in range(1,len(arr),2):
	if arr[i] < arr[i-1]:
		continue
	else:
		arr[i],arr[i-1]=arr[i-1],arr[i]
print arr
