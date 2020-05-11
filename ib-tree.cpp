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
#define MOD 1e16 + 7;

struct node{
    string str;
    struct node* left;
    struct node* right;
};

struct node *newNode(string str) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->str = str;
    temp->left = temp->right = NULL; 
    return temp; 
}

struct node* insert(struct node* node, string str) 
{   
    if (node == NULL) return newNode(str); 
    
    if (str.compare(node->str)< 0)
        node->left  = insert(node->left, str); 
    
    else if (str.compare(node->str) > 0)
        node->right = insert(node->right, str);    
  
    return node; 
} 

struct node* search(struct node* root, string str) 
{ 
    if (root == NULL || root->str == str) 
       return root; 
     
     
    if (str.compare(root->str)< 0)
       return search(root->left, str); 
  
    return search(root->right, str); 
} 

vector<int> solve(string s, vector<string> &b) {
    string a = s + '_';
    vector<string> str;
    int len = a.length();
    struct node* Node = NULL;
    int i;
    string curr= "";
    i = a.find('_');
    Node = insert(Node, a.substr(0, i));
    i++;
    while(i < len){
        if(a[i] == '_'){
            insert(Node, curr);
            curr = "";
        }
        else{
            curr = curr + a[i];
        }
        i++;
    }
    vector<pair<int, int>> ans;
    string st;
    for(int i = 0; i < b.size(); i++){
        st = b[i] + '_';
        ans.push_back(make_pair(0, i));
        string temp = "";
        for(int j = 0; j < st.size(); j++){
            if(st[j] == '_'){
                if(search(Node, temp) != NULL){
                    ans[i].first++;
                }
                temp = "";
            }
            else
                temp = temp + st[j];
        }
    }
    sort(ans.begin(), ans.end(), greater<pair<int,int>>());
    vector<int> v;
    rep(i, 0, ans.size()-1)
        v.push_back(ans[i].second);
    return v;
    
}

main()
{   
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        string s, temp;
        cin >> s;
        int len;
        cin >> len;
        vector<string> str;
        rep(i,1,len){
            cin >> temp;
            str.pb(temp);
        }
        vector<int> ans;
        ans = solve(s, str);
        rep(i,1,ans.size())
            cout << ans[i-1] << ws;
    return 0;
}