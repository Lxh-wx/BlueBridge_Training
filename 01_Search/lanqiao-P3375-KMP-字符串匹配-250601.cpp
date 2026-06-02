#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

vector<int> getNext(string s){
    int n=s.size();
    vector<int> next(n,0);
    int comp=0;
    int cur=1;
    while(cur<n){
        if(s[comp]==s[cur]){
            next[cur]=comp+1;
            cur++;
            comp++;
        }else if(comp>0){
                comp=next[comp-1];
        }else{
            next[cur++]=0;
        }
    }
    return next;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string p, s;
    cin >> s >> p;
    vector<int> next;
    next=getNext(p);
    int scur=0;
    int pcur=0;
    vector<int> ans;
    while(scur<s.size()){
        if(s[scur]==p[pcur]){
            scur++;
            pcur++;
            if(pcur==p.size()){
                ans.push_back(scur-p.size()+1);
                pcur=next[pcur-1];
                continue;
            }
        }else if(pcur>0){
            pcur=next[pcur-1];
        }else{
            scur++;
        } 
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    for(int i=0;i<next.size();i++){
        cout<<next[i]<<' ';
    }


    return 0;
}
