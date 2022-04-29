class Solution:
	# @param A : list of integers
	# @return a list of integers
	def prevSmaller(self, A):
        st = []
        ans = []
        for num in A:
            while len(st)>0 and st[-1]>=num:
                st.pop()
            if len(st) == 0:
                ans.append(-1)
            else:
                ans.append(st[-1])
            st.append(num)
        return ans
