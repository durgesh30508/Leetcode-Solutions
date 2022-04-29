class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        left = []
        right = []
        st = []
        for i in range(len(heights)):
            while(len(st)>0 and st[-1][0] >= heights[i]):
                st.pop()
            if len(st) == 0:
                left.append(-1)
            else:
                left.append(st[-1][1])
            st.append([heights[i],i])
        st = []
        for i in range(len(heights)-1,-1,-1):
            while(len(st)>0 and st[-1][0] >= heights[i]):
                st.pop()
            if len(st) == 0:
                right.append(len(heights))
            else:
                right.append(st[-1][1])
            st.append([heights[i],i])
        
        right = right[::-1]
        ans = 0
        print(left)
        print(right)
        for i in range(len(heights)):
            l,r = 0,0
            l = abs(i-(left[i]+1))
            r = abs(i-(right[i]-1))
            ans = max(ans,heights[i]*(r+l+1))
        return ans
