# Brute force 
def containsDuplicate(nums):
    n = len(nums)
    for i in range(n):
        for j in range(i + 1, n):
            if nums[i] == nums[j]:
                return True
    return False
# First sort, and compare adjacent elements
def containsDuplicate(nums):
    nums.sort()
    for i in range(1, len(nums)):
        if nums[i] ==nums[i-1]:
            return True
    return False
# Using a set to track seen elememts - optimal approach
def containsDuplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return True
        seen.add(num)
    return False
# using frequency count with a dictionary
def containsDuplicate(nums):
    freq = {}
    for num in nums:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] =1
        if freq[num] >= 2:
            return True
    return False      
#  python trick
def containsDuplicate(nums):
    return len(nums) != len(set(nums))