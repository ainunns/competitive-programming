#include <bits/stdc++.h>
using namespace std;

vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
    vector<pair<int, int>> v;

    for(auto c:items) {
        v.push_back({c[0], c[1]});
    }
    sort(v.begin(), v.end());
    
    int n = items.size();
    for(int i = 1; i < n; i++) {
        if(v[i].second < v[i-1].second){
            v[i].second = v[i-1].second;
        }
    }
    
    vector<int> ans;
    for(auto c:queries) {
        int l = 0, r = v.size() - 1, mid, mx = 0;
        while(l <= r) {
            mid = l + (r - l)/2;
            if(v[mid].first <= c){
                l = mid + 1;
                if(mx < v[mid].second)
                    mx = v[mid].second;
            } else r = mid - 1;
        }
        ans.push_back(mx);
    }

    return ans;
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    vector<vector<int>> items(n);
    for(int i = 0; i < n; i++) {
        items[i].resize(2);
        scanf("%d %d", &items[i][0], &items[i][1]);
    }

    vector<int> query(q);
    for(int i = 0; i < q; i++) {
        scanf("%d", &query[i]);
    }

    vector<int> ans = maximumBeauty(items, query);
    for(auto c:ans) {
      printf("%d\n", c);
    }
    return 0;
}
