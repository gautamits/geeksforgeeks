def mergesort(arr):
	if len(arr)<=2:
		return sorted(arr)
	else:
		m=(len(arr)-1)/2
		#mergesort(arr,l,mid)
		#mergesort(arr,mid,r)
		#return merge(arr,l,m,r)
		return merge(mergesort(arr[:m]),mergesort(arr[m:]))
def merge(arr1,arr2):
	result=[]
	i=0
	j=0
	while i < len(arr1) and j<len(arr2):
		if arr1[i] < arr2[j]:
			result.append(arr1[i])
			i+=1
		else:
			result.append(arr2[j])
			j+=1
	result+=arr1[i:]
	result+=arr2[j:]
	return result
	

arr=map(int,raw_input().split())
arr=mergesort(arr)
#arr1=map(int,raw_input().split())
#arr2=map(int,raw_input().split())
#print merge(arr1,arr2)
print arr
