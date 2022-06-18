    void solve(Node* root,int k,bool &found ,int &count , int &ans){
    if(!root) return ;
    solve(root->left,k,found,count,ans);
    if(found) return;
    if(count == k){
        found = true;
        ans = root->data;
        return;
    }
    count++;
    solve(root->right,k,found,count,ans);
}

    
    int KthSmallestElement(Node *root, int K) {
        bool found = false;
    int count = 1;
    int ans=-1;
    solve(root,K,found,count,ans);
    return ans;
    }
