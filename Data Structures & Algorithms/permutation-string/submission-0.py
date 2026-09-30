class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        count = {}
        l = 0
        for char in s1:
            count[char] = 1 + count.get(char, 0)
        for r in range(len(s1) - 1, len(s2)):
            temp = l
            temp_count = {}
            while l <= r:
                temp_count[s2[l]] = 1 + temp_count.get(s2[l], 0) 
                l += 1
            if count == temp_count:
                return True
            l = temp
            l += 1

        return False