#common elements in sorted arrays
arr1=map(int,raw_input().split())
arr2=map(int,raw_input().split())
arr3=map(int,raw_input().split())
arr1=sorted(arr1)
arr2=sorted(arr2)
arr3=sorted(arr3)
i=0
j=0
k=0
while i < len(arr1)-1:
	while j < len(arr2)-1:
		while k < len(arr3)-1:
			if arr1[i]==arr2[j] and arr1[i]==arr3[k]:
				print arr1[i]
				i+=1
				j+=1
				k+=1
			elif arr1[i]< arr2[j]:
				i+=1
			elif arr2[j]< arr3[k]:
				j+=1
			else:
				k+=1
