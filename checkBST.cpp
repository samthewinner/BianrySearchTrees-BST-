   bool solve(Node* root,pair<int,int>p){
        if(!root) return true;
        int llimit = p.first;
        int rlimit = p.second;
        if(root->data < llimit or root->data > rlimit) return false;
        return solve(root->left,{llimit,root->data}) && solve(root->right,{root->data,rlimit});
    }
    
    bool isBST(Node* root) 
    {
        pair<int,int>p;
        p = {INT_MIN,INT_MAX};
        return solve(root,p);
    }
