#include<bits/stdc++.h> 
using namespace std;
//#define int long long
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


main()
{	
	IOS;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
//        cout << "hello" << ln;
        int count;
        cin >> count;
        rep(i,1,count){
            //cout << count;
            int len;
            int index = 0;
            cin >> len;
            vector<pair<int, int>> vec;
            vector<int> arr[25];
            int temp;
            prt;
            rep(k, 0, len-1){
                bool flag = true;
                bool inserted = false;
                cin >> temp;
                int j = 0;
                //prt;
                while(j < index){
                    flag = true;
                    rep(k, 0, arr[j].size()-1){
                        if(__gcd(arr[j][k], temp) == 1){
                            flag = false;
                            break;
                        }
                    }
                    if(flag == true){
                        arr[j].pb(temp);
                        vec.pb(mk(temp, j));
                        inserted = true;
                        break;
                    }
                    j++;
                }

                if(inserted == false){
                    arr[index].pb(temp);           
                    vec.pb(mk(temp, index++));
                }
            }
            cout << index << ln;
            rep(k, 0 , len-1)
                cout << vec[k].S+1 << ws;
            cout << ln;
        }

    #ifndef ONLINE_JUDGE
   	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
	#endif
	//return 0;

}