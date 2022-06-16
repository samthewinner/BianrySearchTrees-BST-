void solve(Node* root,Node*& prev){
        if(!root) return ;
        solve(root->left,prev);
        if(!prev) prev=root;
        else{
            prev->next = root;
            prev=root;
        }
        solve(root->right,prev);
        
    }

    void populateNext(Node *root)
    {
        Node* prev=NULL;
        solve(root,prev);
        if(prev)prev->next= NULL;
        return;
    }
