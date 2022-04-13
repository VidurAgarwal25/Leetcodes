class MedianFinder {
public:
    priority_queue<int,vector<int>,greater<int>>mih;
    priority_queue<int>mah;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(mah.size()==0&&mih.size()==0){
            mah.push(num);
            return;
        }
        mah.push(num);
        int l=mah.size();
        int s=mih.size();
        if(abs(l-s)==2){
            int x=mah.top();
            mah.pop();
            mih.push(x);
            return ;
        }
        if(mah.top()>mih.top()){
            int x=mah.top();
            int y=mih.top();
            mah.pop();
            mih.pop();
            mah.push(y);
            mih.push(x);
        }
    }
    
    double findMedian() {
        int l=mah.size();
        int s=mih.size();
        
        if(l==s){
            return (mah.top()+mih.top())/2.0;
        }
        else{
            if(l==1&&s==0)
                return mah.top();
            if(s==1&&l==0)
                return mih.top();
            if(l>s)
                return mah.top();
            else
                return mih.top();
        }
        return 0.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */