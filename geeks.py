#this function returns if sum of two elements in array is equal to some array
l=raw_input("enter the array ").split()
l=[int(i) for i in l]
l=sorted(l)
print l
n=int(raw_input("enter the number you want to check sum "))
i=0
j=len(l)-1
while True:
	total=l[i]+l[j]
	#print "total is ",total
	if total == n:
		print l[i],l[j]
		break
	elif j <= i:
		#print "no such number"
		#print i,j
		break
	elif total < n:
		i+=1
		#print "i incremented to ",i
	elif total > n:
		j-=1
		#print "j incremented to ",j
	
