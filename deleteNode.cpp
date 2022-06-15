 TreeNode* findMin(TreeNode* root)
    {
        TreeNode* curr = root;
        while(curr->left) curr=curr->left;
        return curr;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
         
        if(root->val > key) 
            root->left = deleteNode(root->left,key);
        else if(root->val < key) 
            root->right = deleteNode(root->right,key);
        if(root->val == key){
            //no child
            if(!root->left && !root->right){                
                delete root;
                root = NULL;
                return root;
                
            }
            //2 children
            if(root->left!=NULL && root->right!=NULL){                
                TreeNode* temp = findMin(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right,temp->val);
                return root;
                
            }
            //1 child
            //right NULL
            if(root->left){
                TreeNode* node = root;   
                root = node->left;
                delete node;   node = NULL;
                return root;
                
            }
            //1 child
            //left NULL
            if(root->right){
                
                TreeNode* node = root;
                root=node->right;
                delete node; node = NULL;
                return root;
             
            }
        }
        return root;
    }
