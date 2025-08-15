# Q: https://codeforces.com/contest/2126/problem/A
for _ in range(int(input())):
    s = str(input())
    m = 11
    for i in s:
        m = min(int(i), m)
    print(m)
