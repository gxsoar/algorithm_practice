class Solution {
   public:
    int distanceBetweenBusStops(vector<int>& distance, int start,
                                int destination) {
        int n = distance.size();
        int ans1 = 0, ans2 = 0;
        if (start == destination) return 0;
        //按照顺时针方向走
        if (start > destination) swap(start, destination);
        for (int i = start; i < destination; i++) {
            ans1 += distance[i];
        }
        //按照逆时针方向走
        for (int j = destination; j < 2 * n; j++) {
            if (j % n == start) break;
            if (j >= n)
                ans2 += distance[j % n];
            else
                ans2 += distance[j];
        }
        // cout << ans1 << " " << ans2 << endl;
        if (ans1 != 0 && ans2 != 0)
            return min(ans1, ans2);
        else
            return (ans1 == 0 ? ans2 : ans1);
    }
};