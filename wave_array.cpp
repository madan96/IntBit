bool mycmp(const int &a,const int &b){
    return a < b;
}
vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end(),mycmp);
    int temp;
    for(int i=0;i<A.size();i+=2){
        if(i!=A.size()-1){
            temp = A[i+1];
            A[i+1] = A[i];
            A[i] = temp;
        }
    }
    return A;
}