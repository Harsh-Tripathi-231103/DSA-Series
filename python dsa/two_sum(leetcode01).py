# brute force approach
def twoSum(nums, target):
    for i in range(n):
        for j in range(i+1, n):
            if  nums[i]  + nums[j] == target :
                return [i,j]

 # sorting + two pointer approach
def twoSum(nums, target):
    arr = [(num,i) for i, num in enumerate(nums)]
    arr.sort()

    left=0
    right = arr(len)=1

    while left < right :
        current_sum = arr[left][0] + arr[right][0]

        if current_sum == target:
            return [arr[left][0], arr[right][0]]
        elif current_sum< target:
            left  += 1
        else:
            right -= 1

# sorting + binary search
def twoSum(nums, target):
    arr = sorted((num, i) for i, num in enumerate(nums))
    n = len(arr)
    
    for i in range(n):
        needed = target - arr[i][0]
        
        left = i + 1
        right = n - 1
        
        while left <= right:
            mid = (left + right) // 2
            
            if arr[mid][0] == needed:
                return [arr[i][1], arr[mid][1]]
            elif arr[mid][0] < needed:
                left = mid + 1
            else:
                right = mid - 1

# 2 pass hash map
def twoSum(nums, target):
    num_to_index = {}
    
    # First pass: store all numbers with indices
    for i, num in enumerate(nums):
        num_to_index[num] = i
    
    # Second pass: search for complement
    for i, num in enumerate(nums):
        complement = target - num
        
        if complement in num_to_index and num_to_index[complement] != i:
            return [i, num_to_index[complement]]
        
# one pass hash map
def twoSum(nums, target):
    seen = {}
    
    for i, num in enumerate(nums):
        complement = target - num
        
        if complement in seen:
            return [seen[complement], i]
        
        seen[num] = i
            