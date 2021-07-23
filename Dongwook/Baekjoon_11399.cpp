#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(void){
    int cnt = 0, result = 0;
    cin>>cnt;
    vector<int> v(cnt);
    vector<int> v_res(cnt);
    for(int i = 0; i<cnt; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    
    int temp = 0;
    for(int i = 0; i < cnt; i++){
        temp = temp+v[i];
        v_res[i] = temp;
    }
    result = accumulate(v_res.begin(), v_res.end(),0);

    cout<<result<<"\n";
    return 0;
}