#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N, M;
    int arr[101];   
    int answer = 0; 
    cin>> N>> M;
    for(int i=0; i<N; i++) cin>> arr[i];
    
    for(int i=0; i<N-2; i++) {
        for(int j=i+1; j<N-1; j++) {
            for(int k=j+1; k<N; k++) {
                if(answer <= arr[i]+arr[j]+arr[k] && arr[i]+arr[j]+arr[k] <= M)
                   answer = arr[i]+arr[j]+arr[k];
            }
        }
    }
    cout<< answer;
    return 0;
}