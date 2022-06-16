Node* predecessor(Node* root,int key){
    Node* curr,*ans;
    ans = NULL;
    curr = root;
    while(curr){
        if(curr->key < key){
            ans = curr;
            curr = curr->right;
        }
        else curr = curr->left;
    }
    return ans;
}

Node* successor(Node* root,int key){
    Node* curr = root,*ans=NULL;
    while(curr)
    {
        if(curr->key > key){
            ans = curr;
            curr=curr->left;
        }   
        else  curr = curr->right;
        
    }
    return ans;
}
