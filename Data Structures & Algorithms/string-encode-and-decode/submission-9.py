class Solution:

    def encode(self, strs: List[str]) -> str:
        if strs == [""]:
            return ""
        elif strs == []:
            return "lol"
        return "|".join(strs)

    def decode(self, s: str) -> List[str]:
        if s  == "":
            return [""]
        elif s == "lol":
            return []

        return s.split("|")