# first way of reversing an array
arr = [1, 4, 3, 2]
rev = arr[::-1]  # slicing
print(rev)   # [2, 3, 4, 1]

# second way of reversing an array
arr = [1, 4, 3, 2]
arr.reverse()
print(arr)   # [2, 3, 4, 1]

# third way of reversing an array
a = [1, 4, 3, 2]
def reverseArray(a):
    i = 0             # start index
    j = len(a) - 1    # end index
    
    while i < j:
        a[i], a[j] = a[j], a[i]  # swap
        i += 1
        j -= 1
    
    return a
print(reverseArray(a))   # [2, 3, 4, 1]
