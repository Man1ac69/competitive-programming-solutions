# Question : https://codeforces.com/contest/469/problem/A
l = int(input())
v = set(map(int, input().split()[1:]))
s = set(map(int, input().split()[1:]))
f = v|s 
t = True
for i in range(1,l+1):
    if i in f:
        continue
    else:
        t = False
        break
if (t):
    print("I become the guy.")
    
else:
    print("Oh, my keyboard!")
