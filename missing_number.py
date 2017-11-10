#this program finds the missing number in a list where no numbers are repeated and numbers are in a range
#page 14
l=raw_input("enter the array ").split()
l=[int(i) for i in l]
###################################using sum formula###############################

'''n=len(l)+1
sum=n*(n+1)/2
total=0
for i in l:
	total+=i
print sum-total," is missing number"
'''

#####################################xor method ######################################
xor=l[0]
i=1
while i < len(l):
		xor=xor^l[i]
		i+=1
xor1=1
i=2
while i <= len(l)+1:
		xor1=xor1^i
		i+=1
print xor^xor1," is missing number"