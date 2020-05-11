#include<bits/stdc++.h> 
using namespace std;
#define int long long
#include<algorithm>
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
#define F first
#define S second
#define pb push_back
#define mk make_pair
#define M 1000000007
#define watch(x) cout << (#x) << " is " << (x) << endl
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep(i,a,b) for(int i = a; i<= b; i++)
#define all(c) c.begin(), c.end()
#define ws " "
#define ln "\n"
#define get(x) int x; cin >> x;
#define prt printf("hello world\n")
#define MOD 1e16 + 7;
#define pi atan(1)*4;
main()
{   
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int count;
        cin >> count;
        rep(i, 1, count){
            int len;
            cin >> len;
            int arr[len];
            vector<int> vec;
            rep(i,0,len-1){
                cin >> arr[i];
            }
            int j = 0;
            while(j < len){
                int pos = 0;
                int neg = INT_MIN;
                bool p = true, n = true;
                while(arr[j] > 0 && j < len){
                    p = false;
                    pos = max(pos, arr[j]);
                    j++;
                }
                if(!p)   
                    vec.pb(pos);

                while(arr[j] < 0 && j < len){
                    n = false;
                    neg = max(neg, arr[j]);
                    j++;
                }
                if(!n)
                    vec.pb(neg);
            }
            int sum = 0;
            rep(i, 0, vec.size()-1){
                sum = sum + vec[i];
            }
            cout << sum << ln;
        }
    #ifndef ONLINE_JUDGE
        cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
    #endif
        return 0;
}