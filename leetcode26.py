class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        uniqueElements = []
        for i in range(len(nums)):
            if nums[i] not in uniqueElements:
                uniqueElements.append(nums[i])
        for i in range(len(nums)):
            if i <= len(uniqueElements) - 1:
                nums[i] = uniqueElements[i]
            else:
                nums[i] = None
        k = len(uniqueElements)
        return k


#I know this is so inefficient, but I havent really gotten into algorythm complexity yet