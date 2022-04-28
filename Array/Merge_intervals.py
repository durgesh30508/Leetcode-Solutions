class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        ans = []
        start,end = intervals[0][0],intervals[0][1]
        for i in range(1,len(intervals)):
            if intervals[i][0] > end:
                ans.append([start,end])
                start,end = intervals[i][0],intervals[i][1]
            elif intervals[i][0] <=end:
                end = max(end,intervals[i][1])
                
        if len(ans) == 0 or (ans[len(ans)-1][0] != start and end != ans[len(ans)-1][1]):
            ans.append([start,end])
            
        return ans
    
    #TC: O(nlogn)
    #Sort the intervals with respect to start time
    #Traverse and merge
#     In Java, Arrays.sort() for primitives is implemented using a variant of the Quick Sort algorithm, which has a space complexity of 
# O
# (
# log
# ⁡
# n
# )
# O(logn)
# In C++, the sort() function provided by STL uses a hybrid of Quick Sort, Heap Sort and Insertion Sort, with a worst case space complexity of 
# O
# (
# log
# ⁡
# n
# )
# O(logn)
# In Python, the sort() function is implemented using the Timsort algorithm, which has a worst-case space complexity of 
# O
# (
# n
# )
# O(n)
