vector<int> Solution::plusOne(vector<int> &A) {
    int num=0;
    vector<int> b;
    b.push_back(1);

    while(A[0]==0 && A.size()!=1){
        A.erase(A.begin());
    }
    
    for(int i=0;i<A.size();i++){
        A[A.size()-1-i]+=1;
        if(A[A.size()-1-i]==10){
            A[A.size()-1-i]=0;
            if(A.size()-1-i==0){
                b.insert(b.end(), A.begin(), A.end());
                A=b;
                break;
            }
        }
        else{
            break;
        }
    }
    return A;
}