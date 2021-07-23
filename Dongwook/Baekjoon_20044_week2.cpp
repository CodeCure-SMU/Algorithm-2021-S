#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int cnt = 0;
    cin>>cnt;
    vector<int> v(cnt*2);
    vector<int> v2(cnt);
    for(int i = 0; i<cnt*2; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<cnt; i++){
        v2[i] = v[i] + v[((cnt*2)-1)-i];
    }
    sort(v2.begin(), v2.end());
    cout<<v2[0]<<"\n";
    return 0;
}
