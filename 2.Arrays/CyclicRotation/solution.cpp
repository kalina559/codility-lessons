#include<iostream>
#include<algorithm>
#include<cmath>

vector<int> solution(vector<int> &A, int K) {
    
    if(!A.empty())
    {
    int modulo = K % A.size();
    int rotationPoint = A.size() - modulo;
    std::rotate(A.begin(), A.begin() + rotationPoint, A.end());
    return A;
    }
    else
    {
        std::cout<<"A is empty"<<std::endl;
    }
}