class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = {}
        l = 0
        res = 0
        for r in range(len(s)):
            count[s[r]] = 1 + count.get(s[r], 0)
            curr_window_len = r - l + 1
            if curr_window_len - max(count.values()) > k:
                count[s[l]] -= 1
                l+=1
                curr_window_len -= 1
            res = max(res, curr_window_len)
        return res    