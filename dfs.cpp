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
//DFS traveral of graphs
void dfs(vector<int> arr[], int visited[], int k){
    if(visited[k] == 1){
        return;
    }

    visited[k] = 1;
    cout << k << ws;
    vector<int> temp = arr[k];
    for(int i = 0; i < temp.size(); i++){
        dfs(arr, visited, temp[i]);
    }

}

void bellman_ford(vector<int, int, int> vec, int nodes, int edges){
    int distance[nodes+1];
    rep(i,1,nodes){
        distance[i] = INT_MAX;
    }
    distance[1] = 0;
    
}

main()
{   
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int nodes, edges;
        cin >> nodes >> edges;
        vector<int> arr[nodes+1];
        int a,b,w;
        vector<int, int, int> vec;
        int visited[nodes+1] = {0};
        rep(i,1, edges){
            cin >> a >> b >> w;
            arr[a].pb(b);
            arr[b].pb(a);
            vec.pb(mk(a, mk(b,w)));
        }
        int components = 0;
        cout << "******DFS traversal*******" << ln;
        rep(i,1,nodes){
            //Finding componets through DFS
            if(visited[i] == 0){
                components++;
                dfs(arr, visited, i);
                cout << ln;
            }
        }

        bellman_ford(vec, nodes, edges);

        cout << "total number of components = " << components << ln;
    return 0;
}