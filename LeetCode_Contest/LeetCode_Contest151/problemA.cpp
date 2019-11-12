#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>

using namespace std;

class Solution {
   public:
    struct tra{
        string name;
        int time, cost;
        string city;
        bool vis;
    };
    vector<string> invalidTransactions(vector<string>& transactions) {
        vector<tra> v;
        for(auto s : transactions) {
            for(auto &c : s) {
                if(c == ',') c = ' ';
            }
            stringstream ss(s);
            tra t;
            ss >> t.name >> t.time >> t.cost >> t.city;
            t.vis = true;
            v.push_back(t);
        }  
        vector<string> ans;
        for(int i = 0; i < v.size(); i++) {
            if(v[i].cost > 1000) v[i].vis = false;
        }
        for(int i = 0; i < v.size(); i++) {
            //if(!v[i].vis) continue;
            for(int j = i + 1; j < v.size(); j++) {
               // if(!v[j].vis) continue;
                if(v[i].name == v[j].name && abs(v[i].time - v[j].time) <= 60 && v[i].city != v[j].city) {
                    v[i].vis = v[j].vis = false;
                }
            }
        }
        for(int i = 0; i < v.size(); i++) {
            if(!v[i].vis) ans.push_back(transactions[i]);
        }
        return ans;
    }
};
int main() {
    return 0;
}