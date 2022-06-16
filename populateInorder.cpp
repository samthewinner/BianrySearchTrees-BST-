Node* suc(Node* root,int key){
        Node* curr = root;
        int val = root->data;
        Node* ans = NULL;
        while(curr){
            if(curr->data > key) {
                ans = curr;
                curr=curr->left;
            }
            else curr = curr->right;
        }
        return ans;
    }

    void solve(Node* root,Node*head){
        if(!root) return;
        
        root->next = suc(head,root->data);
        
        if(root->left) solve(root->left,head);
        if(root->right) solve(root->right,head);
    }

    void populateNext(Node *root)
    {
        solve(root,root);
                
    }
