#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007LL

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    //Precalculating dearrangements upto 10^3
    vector<long long> de(1002);
    de[1] = 0;
    de[2] = 1;
    for(long long i = 3; i <= 1001; i++){
        
        // dearrangement of N = (N - 1) * (sum of dearrangements of N - 1 and N - 2)
        de[i] = (i - 1) * (de[i - 1] + de[i - 2]);
        de[i] %= mod;
    }
    
    int T;
    cin >> T;
    while(T--){
        int N, M;
        cin >> N >> M;
        vector<int> group(N, -1);
        int num_of_groups = 0;
        vector<pair<int, int>> pairs(M);
        
        // We will make disjoint groups of people such that gifts can be swapped 
        // between any pair of people within a group because if we ith person can 
        // swap with jth person and jth person can swap with kth person, then kth 
        // person can swap with ith person through jth person.
        
        // We will store group number in group[]
        for(int i = 0; i < M; i++){
            cin >> pairs[i].first >> pairs[i].second;
            if(group[pairs[i].first - 1] != -1 && group[pairs[i].second - 1] != -1){
                int tempval = group[pairs[i].second - 1];
                for(int j = 0; j < N; j++){
                    if(group[j] == tempval){
                        group[j] =  group[pairs[i].first - 1];
                    }
                }
            }
            else if(group[pairs[i].first - 1] != -1){
                group[pairs[i].second - 1] = group[pairs[i].first - 1];
            }
            else if(group[pairs[i].second - 1] != -1){
                group[pairs[i].first - 1] = group[pairs[i].second - 1];
            }
            else{
                num_of_groups++;
                group[pairs[i].first - 1] = num_of_groups;
                group[pairs[i].second - 1] = num_of_groups;
            }
        }
        
        // We will calculate dearrangements within a group
        // and multiply them for all groups
        int left = N;
        long long ans = 1;
        for(int group_no = 1; group_no <= num_of_groups; group_no++){
            long long temp = 0;
            for(int i = 0; i < N; i++){
                if(group[i] == group_no){
                    temp++;
                }
            }
            left -= temp;
            ans = (ans * de[temp]) % mod;
        }
        
        // If someone is left i.e. he cannot swap with any person then answer is 0
        if(left){
            ans = 0;
        }
        cout << ans << "\n";
    }
    
    return 0;
    
}