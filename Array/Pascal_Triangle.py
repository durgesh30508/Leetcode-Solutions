class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        arr = [[1]]
        for i in range(1,numRows):
            brr = []
            brr.append(1)
            for j in range(len(arr[i-1])-1):
                brr.append(arr[i-1][j]+arr[i-1][j+1])
            brr.append(1)
            arr.append(brr)
        return arr
