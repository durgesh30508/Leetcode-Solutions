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
