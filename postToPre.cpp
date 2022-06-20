Node* solve(int pre[],int l,int r){
    if(l > r) return NULL;
    int i = l+1;
    while(i<=r and pre[l]>pre[i]) i++;
    Node* temp = newNode(pre[l]);
    temp->left = solve(pre,l+1,i-1);
    temp->right = solve(pre,i,r);
    return temp;
}

Node* post_order(int pre[], int size)
{
    return solve(pre,0,size-1);
}
