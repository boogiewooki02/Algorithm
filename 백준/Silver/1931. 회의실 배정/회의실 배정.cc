#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
    pair<int, int>arr[100001];
    
    for(int i=0; i<n; i++) {
        cin>> arr[i].second>> arr[i].first;
    }
    sort(arr, arr+n);
    int t=0, ans=0;
    for (int i=0; i<n;i++) {
        if(t<=arr[i].second) {
            ans++;
            t = arr[i].first;
        }
    }
    cout<<ans;
    return 0;
}