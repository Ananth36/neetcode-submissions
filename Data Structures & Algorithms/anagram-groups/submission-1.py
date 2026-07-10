class Solution:

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        d = {}
        for i in strs:
            k = "".join(sorted([j for j in i]))
            if k in d:
                d[k].append(i)
            else:
                d[k] = [i]

        return list(d.values())
