#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main(void){
    long long cnt = 0,total = 0; 
    string str_dist, str_stas, buf;
    cin>>cnt;
   vector<long long> dist(cnt-1);
   vector<long long> stas(cnt);
   for (int i = 0; i < cnt - 1; i++)
		cin >> dist[i];
	
	for (int i = 0; i < cnt; i++)
		cin >> stas[i];

    for(int i = 0; i < cnt-1; i++){
        int min_index = NULL;

        for(int j = i+1; j < cnt-1; j++){
            if(stas[i] > stas[j]){
                min_index = j; 
                break; 
            }
        }

        if(min_index == NULL){
            int total_dist = 0;
            for(int k = i; k<cnt-1; k++){
                total_dist += dist[k];
            }
            total += stas[i]*total_dist;
            break;
        }
        else{
            int total_dist = 0;
            for(int k = i; k< min_index; k++){
                total_dist += dist[k];            
            }
            total += stas[i]*total_dist;
            i = min_index-1;

        }
    }
    cout<<total<<"\n";
    return 0;
}
