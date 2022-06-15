bool search(struct Node* root, int x) {
    if(!root) return false;
    if(root->data == x) return true;
    if(root->data > x) 
    {
        if(search(root->left,x)) return true;
        else return false;
        
    }
    if(search(root->right,x)) return true;
    return false;
}
