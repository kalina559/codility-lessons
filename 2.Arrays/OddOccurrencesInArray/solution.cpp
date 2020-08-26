#include<iostream>
#include<vector>
#include<algorithm>
int solution(vector<int> &A) {
    
    std::sort(A.begin(), A.end());
    int oddInt = NULL;
    for(unsigned int i = 0; i < A.size(); ++i)
    {
        if(!std::binary_search(A.begin() + i + 1, A.end(), A[i]))
        {
            oddInt = A[i];
            break;
        }
        else
        {
            ++i;
        }
    }
    
    return oddInt;
}