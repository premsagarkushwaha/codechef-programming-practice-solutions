# update Add Two Numbers || Problem Code: FLOW001
#sample input
"""3
1 2
100 200
10 40

#sample output

3
300
50"""



T = int(input())
ls =[]
for tc in range(T):
	# Read integers a and b.
	(a, b) = map(int, input().split(' '))
	
	ans = a + b
	ls.append(ans)
for t in range(T):
    
    print(ls[t])
