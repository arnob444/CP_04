def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        if a[0] == a[-1]:
            print("NO")
        else:
            print("YES")
            b = [0]*n
            for i in range(n):
                if a[i] == a[0]:
                    b[i] = 'B'
                else:
                    b[i] = 'R'
            print(''.join(b))

solve()
