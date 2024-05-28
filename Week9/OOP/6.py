import numpy as np

a = (
    [i for i in range(9, 0, -1) if i % 2 == 1],
    [i for i in range(10, 20, 2)],
    [i for i in range(29, 19, -1) if i % 2 == 0],
)

# print(a)
arr = np.array(a)
print(arr)
