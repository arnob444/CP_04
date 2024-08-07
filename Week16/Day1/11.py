def check_even_odd(n):
    for i in n:
        if i % 2 == 0:
            print(f"{i} is even")
        else:
            print(f"{i} is odd")

n = [int(i) for i in input().split()]
check_even_odd(n)

