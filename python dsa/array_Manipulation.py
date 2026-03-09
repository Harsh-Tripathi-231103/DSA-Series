# Array Manipulation
# Instead of changing only one element, we change a whole segment. It is a range update problem.

# Why range updates matter?
# Because range updates can become expensive.
# If one query updates 1 lakh elements, and you have many such queries, direct updating becomes too slow.
# So the key learning is:
# Can we represent the effect of a whole range update without touching every element one by one?
# That leads to the most important concept in this problem.

# Foundation of the difference array / prefix sum trick.

# 1) Brute Force Approach:
# For each query, we loop through the range and add the value to each element.
def arrayManipulation(n, queries):
    arr = [0] * n

    for a, b, k in queries:
        for i in range(a - 1, b):   # convert to 0-based indexing
            arr[i] += k

    return max(arr)

# 2) Optimized Approach difference array / prefix sum trick.
def arrayManipulation(n, queries):
    diff = [0] * (n + 2)

    for a, b, k in queries:
        diff[a] += k
        diff[b + 1] -= k

    max_value = 0
    current = 0

    for i in range(1, n + 1):
        current += diff[i]
        if current > max_value:
            max_value = current

    return max_value
