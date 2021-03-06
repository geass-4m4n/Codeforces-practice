class Solution {
public:
    int helper(vector<int> &arr, int a){
        int res = 0;
        
        for(int x:arr){
            res += min(x, a);
        }
        
        return res;
    } 
    
    int findBestValue(vector<int>& arr, int target) {
        int s = 1 , e = 0;
        int sum = 0;
        for(int x:arr){
            sum += x;
            e = max(e, x);
        }
        
        if(sum==target) return e;
        int mid, val;
        while(s<=e){
            mid = (s+e)/2;
            val = helper(arr, mid);
            //cout<<mid<<" "<<val<<" "<<s<<" "<<e<<endl;
            if(val==target) return mid;
            else if(val>target) e = mid-1;
            else s = mid+1;
        }
        
        int a = abs(helper(arr, mid)-target);
        int b = abs(helper(arr, mid-1)-target);
        int c = abs(helper(arr, mid+1)-target);
        
       // cout<<mid<<" "<<a<<" "<<b<<" "<<c<<endl;
        
        if(b<=a && b<=c) return mid-1;
        if(a<=b && a<=c) return mid;
        return mid+1;
        
        return mid;
    }
};
