vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	int dir=0;//dir=0(L to R) dir=1(TOP to BOTTOM) dir=2(R tO L) dir=3(BOTTOM to TOP)
	
	int t=0,b=A.size()-1,l=0,r=A[0].size()-1;//t=TOP,b=BOTTOM,l=LEFT,r=RIGHT

	while(t<=b && l<=r){
	    if(dir==0){
	        for(int i=l;i<=r;i++){
	            result.push_back(A[t][i]);
	        }
	        t++;dir=1;
	    }
	    else if(dir==1){
	        
	        for(int i=t;i<=b;i++){
	            result.push_back(A[i][r]);
	        }
	        r--;dir=2;
	    }
	    else if(dir==2){
	        for(int i=r;i>=l;i--){
	            result.push_back(A[b][i]);
	        }
	        b--;dir=3;
	    }
	    else if(dir==3){
	        for(int i=b;i>=t;i--){
	            result.push_back(A[i][l]);
	        }
	        l++; dir=0;
	    }
	  
	}
	return result;
}