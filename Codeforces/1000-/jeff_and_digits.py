# Q : https://codeforces.com/contest/352/problem/A
n = int(input())
shit = list(map(int, input().split()))
c5, c0 = 0,0
for i in shit:
    if i == 5:
        c5+=1
    elif i==0:
        c0+=1
if c0 > 0 and c5>=9:
    print("5"*(c5 - c5%9) + "0"*c0)
elif c0 > 0 and c5<9 :
    print(0)
else:print(-1)
