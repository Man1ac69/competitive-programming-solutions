# Q : https://codeforces.com/contest/2132/problem/A
for _ in range(int(input())):
    n = int(input())
    a = input()
    m = int(input())
    b = input()
    c = input()
    for i in range(m):
        if c[i] == 'D':
            a = a+b[i]
        elif c[i]== 'V':
            a = b[i] + a
    print(a)
    
