vector<int> Solution::plusOne(vector<int> &A) {
    bool carry= 0;
    A[A.size()-1]+=1;
    int count=0;
    //Maintain and remove the preceding zeros
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
            count++;
        else
            break;
    }
    for(int i=0;i<A.size()-count;i++)
    {
        A[i]=A[i+count];
    }
    for(int i=0;i<count;i++)
    {
        A.pop_back();
    }
    // Maintainance and removal of trailing zeros over.
    //The below procedure calculates and computes the logic.
    for(int i=A.size()-1;i>=0;i--)
    {
        A[i]+=carry;
        //carry=0;
        if(A[i]>=10)
        {
            A[i]=A[i]%10;
            carry = 1;
        }
        else
            carry=0;
    }
    if(carry == 1)
    {
        // maintain proper Vector.
        A.push_back(A[A.size()-1]);
        for(int i=A.size()-1;i>0;i--)
        {
            A[i]=A[i-1];
        }
        A[0]=carry;
    }
    return A;
    
   /* This solution doesn't work because the highest number cant be contained 
   even in long int. The above solution would work.
   //Reconstruct the number
    long int number=0;
    for(int i=A.size()-1; i>=0;i--)
    {
        number=number+A[i]*pow(10,A.size()-i-1);
    }
    //Pusing back to vector
    
    number+=1;
    //free(&A);
    A.clear();
    //int i=0;
    //vector<int> B;
    while(number>0)
    {
        A.push_back(number%10);
        ///i++;
        number/=10;
    }
    //cout<<A;
    reverse(A.begin(),A.end());
    return A;*/
    

}

