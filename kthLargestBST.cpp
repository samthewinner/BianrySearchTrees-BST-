void solve(Node* root,int k,bool &found,int &ans,int &cnt){
        if(!root) return;
        solve(root->right,k,found,ans,cnt);
        if(found) return;
        if(k == cnt){
            found = true;
            ans = root->data;
            return;
        }
        cnt++;
        solve(root->left,k,found,ans,cnt);
    }
    
    int kthLargest(Node *root, int K)
    {
        if(!root) return -1;
        int ans = 0;
        bool found = false;
        int cnt = 1;
        solve(root,K,found,ans,cnt);
        if(!found) return -1;
        return ans;
    }
