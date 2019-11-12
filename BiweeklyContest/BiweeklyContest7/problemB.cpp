#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
#include <map>

using namespace std;

class FileSystem {
   public:
    map<string,int> count;
    map<string,bool> vis;
    FileSystem() {}
    bool create(string path, int value) {
        int len = path.size();
        if(vis[path]) return false;
        int cnt = 0;
        //统计/出现的次数
        for(int i = 0; i < len; i++) {
            if(path[i] == '/') cnt++;
        }
        //存在多个路径
        if(cnt >= 2) {
            int j;
            for(int i = len; i >= 0; i--) {
                if(path[i] == '/') {j = i; break; }
            }
            string temp = path.substr(0, j);
            //如果父路径不存在
            if(!vis[temp]) return false;
            vis[path] = true; count[path] = value;
        }
        else {
            vis[path] = true; count[path] = value;
        }
        return true;
    }

    int get(string path) {
        if(!vis[path]) return -1;
        else return count[path];
    }
};

/**
 * Your FileSystem object will be instantiated and called as such:
 * FileSystem* obj = new FileSystem();
 * bool param_1 = obj->create(path,value);
 * int param_2 = obj->get(path);
 */

int main() {
    return 0;
}