class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        row,col = False,False
        #Check if any element in first row is zero
        for i in range(len(matrix)):
            if matrix[i][0] == 0:
                row = True
                break
                
        #check if any element in first coloumn is zero
        for i in range(len(matrix[0])):
            if matrix[0][i] == 0:
                col = True
                break
                
        #check for remaining matrix if on any coordinates value is zero
        #then mark respective coloumn at first row as zero and respective
        #row at first coloumn as zero
        for i in range(1, len(matrix)):
            for j in range(1, len(matrix[0])):
                if matrix[i][j] == 0:
                    matrix[0][j] = 0
                    matrix[i][0] = 0
        
        #traverse the first row and if any value is zero make that complete row as zero
        for i in range(1,len(matrix)):
            if matrix[i][0] == 0:
                for j in range(1, len(matrix[i])):
                    matrix[i][j] = 0
                    
        #traverse the first coloumn and if any value is zero make that complete coloumn as zero
        for j in range(1, len(matrix[0])):
            if matrix[0][j] == 0:
                for i in range(1, len(matrix)):
                    matrix[i][j] = 0
        
        #check flags and make first row anf first coloumn as zero if they carry anay element as zero
        if row:
            for i in range(len(matrix)):
                matrix[i][0] = 0
                    
        if col:
            for i in range(len(matrix[0])):
                matrix[0][i] = 0
                
        # TC: O(row * coloumn)
        # SC: O(1)
        # Optimal
            
                
                
        
