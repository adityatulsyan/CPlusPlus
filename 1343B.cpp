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
            int n;
            cin >> n;
            if((n/2)%2 == 1){
                cout << "NO" << ln;
                continue;
            }

            else{
                int arr[n];
                for(int i = 1; i <= n/2; i++){
                    arr[i-1] = i*2; 
                }

                for(int i = 0; i < n/2; i++){
                    arr[i+n/2] = (i+1)*2-1;
                }

                arr[n-1] += n/2;

                cout << "YES" << ln;
                rep(i,0,n-1){
                  cout << arr[i] << ws;
                }

                cout << ln;
            }
        }
    #ifndef ONLINE_JUDGE
        cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
    #endif
        return 0;
}