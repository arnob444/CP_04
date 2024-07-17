def find_largest(n):
    if not n:
        return None
    largest = n[0]
    for i in n:
        if i > largest:
            largest = i
    return largest


n = [int(i) for i in input().split()]
print(find_largest(n)) 