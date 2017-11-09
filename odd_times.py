#below program finds a number occuring odd times where others occur even times
#page 9
l=raw_input("enter the array ").split()
l=[int(i) for i in l]
total=l[0]
i=1
while i < len(l):
	total=total^l[i]
	i+=1
print total