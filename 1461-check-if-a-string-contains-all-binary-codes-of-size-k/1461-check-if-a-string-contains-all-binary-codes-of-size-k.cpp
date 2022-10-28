class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k){
                return false;
        }
                unordered_set<string> us;
            for(int i=0;i<=s.size()-k;i++){
                    us.insert(s.substr(i,k));
            }
            if(us.size()==pow(2,k)){
                    return true;
            }
            // cout<<"our set"<<endl;
            // for(auto i : us){
            //         cout<<i<<" ";
            // }
            return false;
    }
};