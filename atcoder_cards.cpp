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
        string a, b, aa, bb;
        cin >> a >> b;
        int one = 0, two = 0, sum = 0;
        rep(0, a.length()){
            if(a[i] == '@') one++;
            else {
                aa.pb(a[i]);
            }
            if(b[i] == '@') two++;
            else {
                bb.pb(b[i]);
            }
        }
        for(int i = 0; i < aa.length(); ++i){
            bool cnt = 0;
            for(int j = 0; j < bb.length(); ++j){
                if(aa[i] == bb[j]){
                    cnt = 1;
                    bb[j] = '#';
                    aa[i] = '#';
                }
            }
            sum+=cnt;
        }
        int anai = aa.length() - sum;
        sum = 0;
        rep(0, aa.length()){
            if(aa[i] != '#' && (aa[i] == 'c' || aa[i] == 't' || aa[i] == 'a' || aa[i] == 'd' || aa[i] == 'e' || aa[i] == 'r' || aa[i] == 'o'))
                sum++;
        }
        if(anai != sum){
            no
            return 0;
        }
        sum = 0;
        int count = 0;
        cout << aa << endl;
        cout << bb << endl;
        rep(0, bb.length()){
            if(bb[i] != '#' && (bb[i] == 'c' || bb[i] == 't' || bb[i] == 'a' || bb[i] == 'd' || bb[i] == 'e' || bb[i] == 'r' || bb[i] == 'o'))
                sum++;
            if(bb[i] != '#') count++;
        }
        if(sum != count){
            no
            return 0;
        }
        int bnai = sum;
        if((one == two) && (anai == bnai) && one>=anai){
            if(anai <= two && bnai <= one){
                yes
                return 0;
            }
        }
        if((one % 2 == two % 2) && (anai % 2 == bnai % 2) && (anai <= two && bnai <= one)){
            yes
            return 0;
        }
        if(anai == two && bnai == one){
            yes
            return 0;
        }
        no;

        


         
        return 0;
}
