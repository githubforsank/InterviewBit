int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count=0;
    for(int i=1;i<A.size();i++)
    {
        count=count+(max(abs(A[i]-A[i-1]),abs(B[i]-B[i-1])));
    }
    return count;
}
// This is a master comment// This is master comment append