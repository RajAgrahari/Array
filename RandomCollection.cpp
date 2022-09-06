// https://leetcode.com/problems/insert-delete-getrandom-o1-duplicates-allowed/
class RandomizedCollection {
public:
    unordered_map<int,vector<int>> mp;
    vector<int> v;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        mp[val].push_back(v.size());
        v.push_back(val);
        return mp[val].size()==1;
    }
    
    bool remove(int val) {
        if(mp[val].size()==0)
            return false;
        int idx = mp[val].back();
        v[idx] = v.back();
        int x = v[idx];
        for(int i=0;i<mp[x].size();i++)
        {
            if(mp[x][i]==v.size()-1)
            {
                mp[x][i]=idx;
                break;
            }   
        }
        v.pop_back();
        mp[val].pop_back();
        return true;
    }
    
    int getRandom() {
        int idx = rand()%v.size();
        return v[idx];
    }
};
