class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        ele  = list(set(nums))
        ct = [nums.count(i) for i in ele]
        ans = []
        for i in range(k):
            idx = ct.index(max(ct))
            ans.append(ele[idx])
            ele.pop(idx)
            ct.pop(idx)

        return ans