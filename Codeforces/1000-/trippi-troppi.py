 # Q : https://codeforces.com/contest/2094/problem/A
for _ in range(int(input())):
	name = str(input())
	l = name.split(" ")
	out = ""
	for i in l:
		out+=i[0]
 
	print(out)
