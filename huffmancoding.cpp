#include<bits/stdc++.h> 
using namespace std;
#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
#define F first
#define S second
#define pb push_back
#define M 1000000007
#define watch(x) cout << (#x) << " is " << (x) << endl
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep(i,a,b) for(int i = a; i<= b; i++)
#define all(c) c.begin(), c.end()
#define ws " "
#define ln "\n"
#define get(x) int x; cin >> x;
#define prt printf("hello world\n")

//to read whole line of string string s;
//getline(cin, s);

main()
{	
	IOS;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    //code
    int count;
    cin >> count;
    for(int i = 0;i < count; i++){
        int target, len1, len2;
        cin >> len1 >> len2 >> target;
        set<int> s1, s2;
        int temp;
        for(int k = 0; k < len1; k++){
            cin >> temp;
            s1.insert(temp);
        }
        
        for(int k = 0; k < len2; k++){
            cin >> temp;
            s2.insert(temp);
        }
        int  num = 0;      
        for(auto it = s1.begin(); it != s1.end(); it++){
            if(s2.count(target-*it) == 1){
                if(num > 0)
                    cout << ", ";
                cout << *it << " " << target-*it;
                num++;
                s2.erase(target-*it);
            }
        }
        
        if(num == 0)
            cout << -1;
        cout << "\n";
    }

    #ifndef ONLINE_JUDGE
   	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
	#endif
	//return 0;

}