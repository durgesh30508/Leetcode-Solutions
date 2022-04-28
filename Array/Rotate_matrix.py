class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        #Find Transpose
        for i in range(len(matrix)):
            for j in range(i,len(matrix[0])):
                if i!=j:
                    matrix[i][j],matrix[j][i] = matrix[j][i],matrix[i][j]

        #Reverse row wise
        for i in range(len(matrix)):
            for j in range(int(len(matrix[0])/2)):
                #print(i,j)
                #print(i,len(matrix[0])-(j+1))
                matrix[i][j],matrix[i][len(matrix[0])-(j+1)] = matrix[i][len(matrix[0])-(j+1)],matrix[i][j]
