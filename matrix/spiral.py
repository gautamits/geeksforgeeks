def spiral(arr,m,n):
	print arr[0]
	print arr[:n-1]
	b=arr[m-1]
	print b[::-1]
	b=arr[:0]
	print b[::-1]
	spiral(arr[1:m,
	
m,n=raw_input("enter the dimensions of matrix ").split()
m=int(m)
n=int(n)
a=[]
for i in xrange(m):
	b=raw_input((t,"th row ")).split()
	b=[int(i) for i in b]
	a.append(b)
spiral(a,m,n)
