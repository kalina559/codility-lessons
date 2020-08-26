#include <algorithm>
int solution(vector<int> &A) 
{
        int missingNumber = NULL;
        std::sort(A.begin(), A.end());
    
        for(unsigned int i = 0; i < A.size(); ++i)
        {
            if(A[i] != i + 1)
            {
                missingNumber = i + 1;
                break;
            }
        }
        if(missingNumber == 0)
        {
            missingNumber = A.size() + 1;
        }
        return missingNumber;
        
}