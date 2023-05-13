#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <math.h>
#include <string>
#include <bitset>
#include <array>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <unordered_set>
#include <unordered_map>
#include <list>
#include <new>
using namespace std;
#define LL        long long
#define rep(s, e)      for(int i=s; i<e; ++i) 
#define repu(s,e)      for(int i=s; i<=e; ++i)       
#define arrin(string, n)   rep(0, n){ cin>>string[i];}
#define arrout(string, n)  rep(0, n){cout<<string[i]<<" ";} cout<<endl;
#define vecout(string)  rep(0, string.size()){cout<<string[i]<<" ";} cout<<endl;
#define fff(x) cout << "debug: " << #x << ": " << (x) <<endl;
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define pb(x)  push_back(x)
#define out(x) cout<<x<<endl;
#define ed  cout<<endl;
#define in   cin>>
#define dout(x, y)  cout<<x<<" "<<y<<endl;
#define sout(x)  cout<<x<<" ";
#define mx   INT_MAX
#define mn   INT_MIN




int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        unsigned long long int n;
        string s, a;
        cin >> s;
        cin >> n;
        vector<int> mark;
        for(int i = 0; i < s.length(); ++i){
            if(s[i]=='?'){
                mark.pb(i);
                s[i]='0';
            }
        }
        if(mark.empty()){
            unsigned long long int temp = stoi(s, 0, 2);
            if(temp > n){
                cout << -1 << endl;
            }
            else{
                cout << temp << endl;
            }
            return 0;

        }
        reverse(mark.begin(), mark.end());
        unsigned long long int ans = 0;
        for(int i = 0; i < mark.size(); ++i){
            s.replace(mark[i],1,1 ,'1');
            unsigned long long int temp = stoi(s, 0, 2);
            if(temp <= n){
                ans = temp;
            }
            else break;
        }
        if(ans!=0){
            cout << ans << endl;
            return 0;
        }
        cout << -1 << endl;





        return 0;
}
