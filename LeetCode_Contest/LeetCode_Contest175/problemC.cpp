#include <bits/stdc++.h>

using namespace std;

class TweetCounts {
   public:
    unordered_map<string, map<int, int>> record;
    TweetCounts() {}

    void recordTweet(string tweetName, int time) { record[tweetName][time]++; }

    vector<int> getTweetCountsPerFrequency(string freq, string tweetName,
                                           int startTime, int endTime) {
        vector<int> ans;
        int f = 1;
        f *= (freq == "minute") ? 60 : 1;
        f *= (freq == "hour") ? 60 * 60 : 1;
        f *= (freq == "day") ? 60 * 60 * 24 : 1;
        int t = startTime;
        while (t <= endTime) {
            auto bgt = record[tweetName].lower_bound(t);
            auto edt = record[tweetName].upper_bound(min(t + f - 1, endTime));
            int cnt = 0;
            for (auto ite = bgt; ite != edt; ite++) {
                cnt += ite->second;
            }
            ans.push_back(cnt);
            t += f;
        }
        return ans;
    }
};

/**
 * Your TweetCounts object will be instantiated and called as such:
 * TweetCounts* obj = new TweetCounts();
 * obj->recordTweet(tweetName,time);
 * vector<int> param_2 =
 * obj->getTweetCountsPerFrequency(freq,tweetName,startTime,endTime);
 */

int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}
