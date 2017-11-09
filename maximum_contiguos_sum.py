#below program finds largest sum contiguos subarray
#page 11
l=raw_input("enter the array ").split()
l=[int(i) for i in l]
max_so_far=0
max_ending_here=0
for i in l:
	max_ending_here=max_ending_here + i
	if max_ending_here < 0:
		max_ending_here=0
	elif max_ending_here > max_so_far :
		max_so_far = max_ending_here
print max_so_far

