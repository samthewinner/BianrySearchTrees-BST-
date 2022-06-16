TreeNode* solve(vector<int> a,pair<int,int>p,int &idx){
        if(idx == a.size()) return NULL;
        int l = p.first;
        int r = p.second;
        //if value in array doesnt belong to the current subtree, return NULL
        if(a[idx] <= l or a[idx] >= r){return NULL;}
//          if the value belongs, make a new node and set it's left and right nodes
        TreeNode* node = new TreeNode(a[idx]);            
        idx++;
        node -> left = solve(a,{l,node->val},idx);
        node ->right = solve(a,{node->val,r},idx);        
        return node;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx=0;
       return solve(preorder,{INT_MIN,INT_MAX},idx);
       
    }
