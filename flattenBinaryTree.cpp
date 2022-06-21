void turnLeft(Node*head){
        Node* curr = head;
        while(curr){
            curr->right = curr->left;
            curr->left = NULL;
            curr=curr->right;
        }
    }
    
    void makeLL(Node*root,Node*&prev,Node*&head){
        if(!root) return;
        if(!head) head= root;
        else  prev->left = root;
        prev = root;
        makeLL(root->left,prev,head);
        makeLL(root->right,prev,head);
    }
    
    void flatten(Node *root)
    {
        Node* prev,*head;
        head=prev=NULL;
        makeLL(root,prev,head);
        turnLeft(head);
        root = head;
    }
