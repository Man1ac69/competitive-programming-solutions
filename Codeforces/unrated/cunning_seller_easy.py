# Q : https://codeforces.com/contest/2132/problem/C1
for _ in range(int(input())):
    n = int(input())
    i = 0
    cost = 0
    while n>0:
        if (3**i > n):
            i -= 1
            n -= 3**(i)
            cost += (3**(i+1) + (i*(3**(i-1))))
            i = 0
        elif (3**i==n):
            cost += (3**(i+1) + (i*(3**(i-1))))
            break
        i+=1
    print(int(cost))
