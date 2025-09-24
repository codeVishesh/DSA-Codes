// GFG - flattening a linked list

// class Solution {
//   public:
//     Node* merge(Node* a, Node* b){
//         if(a==NULL){
//             return b;
//         }
//         if(b==NULL){
//             return a;
//         }
        
//         Node* ans = 0;
//         if(a->data < b->data){
//             ans = a;
//             a->bottom = merge(a->bottom,b);
//         }
//         else{
//             ans = b;
//             b->bottom = merge(a,b->bottom);
//         }
//         return ans;
//     }
//     Node *flatten(Node *root) {
//         if(root==NULL){
//             return 0;
//         }
        
//         Node* MergeList = merge(root,flatten(root->next));
//         return MergeList;
//     }
// };