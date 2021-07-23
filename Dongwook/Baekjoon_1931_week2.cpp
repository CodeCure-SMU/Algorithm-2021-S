#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(pair<int,int> a, pair<int,int>b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}

int main(void){
    int cnt = 0, temp = 0, result = 0;
    cin>>cnt;
    vector< pair<int, int> > v(cnt);

    for(int i = 0; i < cnt; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(), Compare);

    for(int i =0; i< cnt; i++){
        if(temp <= v[i].first){
            temp = v[i].second;
            result++;
        }
    }
    cout<<result<<"\n";
    return 0;
}
