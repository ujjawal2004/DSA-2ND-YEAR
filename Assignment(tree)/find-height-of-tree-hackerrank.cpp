
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        int leftHeight=-1,rightHeight=-1;
        if(root->left){
            leftHeight=height(root->left);
        }
        if(root->right)
            rightHeight=height(root->right);
        return max(leftHeight,rightHeight)+1;
    }

