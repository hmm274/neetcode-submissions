class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_hashmap = {}
        for char in s:
            if char in s_hashmap:
                s_hashmap[char] += 1
            else:
                s_hashmap[char] = 1
        for char in t:
            if char in s_hashmap:
                s_hashmap[char] -= 1
                if s_hashmap[char] == 0:
                    del s_hashmap[char]
            else:
                return False
        if s_hashmap == {}:
            return True
        return False