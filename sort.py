def bubble(a):
	for i in xrange(len(a)):
		j=i+1
		while j < len(a):
			if a[j] < a[i]:
				a[j],a[i]=a[i],a[j]
				j=i+1
			else:
				j=j+1
	return a
		
def qsort(a,i):
	if len(a) == 2:
		if a[1]<a[0]:
			a[0],a[1]=a[1],a[0]
		#print a," returned"
		return a
	elif len(a)<=1:
		#print a," returned"
		return a
	lower=[]
	upper=[]
	#print "calculating pivot"
	pivot=a[i]
	#print "pivot is ",pivot
	for j in a:
		if j > pivot:
			upper.append(j)
		elif j < pivot:
			lower.append(j)
	#print lower
	lower=qsort(lower,0)
	upper=qsort(upper,0)
	#print lower+[pivot]+upper," returned"
	return lower+[pivot]+upper
def mergesort(a):
	if len(a)<=2:
		a=sorted(a)
		return a
	l=len(a)
	lower=a[:l/2]
	upper=a[l/2:]
	#print a,"broken into ",lower,upper
	lower=mergesort(lower)
	upper=mergesort(upper)
	a=merge(upper,lower)
	return a
def merge(a,b):
	#print "merging ",a,b
	c=[]
	l=len(a)+len(b)
	i=0
	j=0
	k=0
	while k < l:
		#print i,j,k
		if i == len(a):
			c=c+b[j:]
			return c
		elif j == len(b):
			c=c+a[i:]
			return c
		elif a[i] < b[j]:
			c.append(a[i])
			#print c
			i+=1
			k+=1
		else:
			c.append(b[j])
			#print c
			j+=1
			k+=1
	#print "merged ",c
	return c
def insertion(a):
	j=1
	while j < len(a):
		key=a[j]
		i=j-1
		while i>=0 and a[i] > key :
			a[i+1]=a[i]
			i=i-1
		a[i+1]=key
		j+=1
	return a		
	
l=raw_input("enter the array ").split()
l=[int(i) for i in l]
#l=qsort(l,0)
#l=mergesort(l)
#l=bubble(l)
l=insertion(l)
print l


