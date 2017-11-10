'''this algorithm searches majority element using binary search tree
l=raw_input("enter the numbers ").split()
l=[int(i) for i in l]
a={}
for i in l:
	if a.has_key(i):
		n=a[i]+1
		if n== len(l)/2:
			print i
			exit(0)
		a[i]=n
	else:
		a[i]=1
if i== l[len(l)-1]:
	print "no such element"
'''	
#below algorithm uses moores voting algorithm to find the candidate element
l=raw_input("enter the numbers ").split()
l=[int(i) for i in l]
candidate=0
maj_index=0
count=1
i=1
while i < len(l):
	if l[i] == l[maj_index]:
		count+=1
	elif count==0:
		maj_index=i
		count=1
	else:
		count-=1
	i+=1
candidate=l[maj_index]
count=0
for i in l:
	if i==candidate:
		count+=1
if count>len(l)/2:
	print candidate
else:
	print "no majority element"

