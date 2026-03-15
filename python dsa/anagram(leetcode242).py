# brute force
# This is only conceptuala nd not practical and efficient for large inputs , permutations of s and t can be very large

# Compare counts using count() calls
def isAnagram(s,t):
    for ch in s:
        if s.count(ch) != t.count(ch):
            return False
    return True    

# Sort both strings and compare
def isAnagram(s,t):
    if len(s) != len(t):
        return False
    return sorted(s) == sorted(t)

# Frequency dictionary / hash map
def isAnagram(s,t):
    if len(s) != len(t):
        return False
    freq_s = {}
    freq_t = {}
    for ch in s:
        freq_s[ch] = freq_s.get(ch,0)+1
    for ch in t:
        freq_t[ch] = freq_t.get(ch,0)+1

    return freq_s == freq_t

# using single frequency dictionary
def isAnagram(s,t):
    if len(s) != len(t):
        return False
    freq ={}
    for ch in s:
        freq[ch] = freq.get(ch,0) + 1

    for ch in t:
        if ch not in freq:
            return False
        freq[ch] -= 1
        if freq[ch] > 0:
            return False
    return True        

# use 26 charcters a to z array
def isAnagram(s,t):
     if len(s) != len(t):
        return False
     count = [0] * 26
     for ch in s:
         count[ord(ch) - ord('a')] += 1
     for ch in t:
         count[ord(ch) - ord('a')] -= 1    
     for num in count:
         if num != 0:
             return False
     return True  

# Using inbuilt counter in python
from collections import Counter

def isAnagram(s,t):
    return Counter(s) == Counter(t)

