//https://practice.geeksforgeeks.org/problems/c928f229cc972671d91c5e9f6b222414912cc88a/1
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

class Solution{
public:

    void myerase(ordered_set &t, int v)
    {
        int rank = t.order_of_key(v);
        ordered_set::iterator it = t.find_by_order(rank);
        t.erase(it);
    }
    vector<char> easyTask(int n,string s,int q,vector<vector<string>> &queries)
    {
        vector<char> ans;
        map<int,ordered_set> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]].insert(i);
        }
        for(int i=0;i<q;i++)
        {
            int type=queries[i][0][0]-'0';
            if(type==1)
            {
                int idx=stoi(queries[i][1]);
                char c=queries[i][2][0];
                myerase(mpp[s[idx]],idx);
                mpp[c].insert(idx);
                s[idx]=c;
            }
            else
            {
                int lo=stoi(queries[i][1]);
                int hi=stoi(queries[i][2]);
                int k=stoi(queries[i][3]);
                for(char x='z';x>='a';x--)
                {
                    int start=mpp[x].order_of_key(lo);
                    int end=mpp[x].order_of_key(hi+1);
                    int count=end-start;
                    if(k>count)
                    {
                        k=k-count;
                    }
                    else
                    {
                        ans.push_back(x);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
