#search element in sorted and rotatd array
#array is rotate at some pivot use binary search tree to find the pivot element
#page 16
l=raw_input("enter the array ").split()
l=[int(i) for i in l]
n=int(raw_input("enter the element to search for "))
while True:
	m=len(l)/2
	if len(l) == 0:
		print "element not found"
		break
	elif l[m] == n:
		print "element is found at ",m
		break
	elif n > l[0]:
		l=l[:m]
		print "l broken into ",l
	else:
		l=l[m:]
		print "l broken into ",l
