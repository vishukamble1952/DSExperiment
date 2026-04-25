#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};
Node* insert(Node* root,int value){
     if(root==NULL){
       return new Node(value);
     }
 
     if(value<root->data){
        root->left=insert(root->left,value);
     }
     else if(value>root->data){
        root->right=insert(root->right,value);
     }
      return root;
}
void preorder(Node* root){
    if (root ==NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node* root){
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
   Node* root=NULL;
   int choice,n,value;
   
   cout<<"Enter number of nodes:";
   cin>>n;
   
   cout<<"Enter node values:";
   for(int i=0;i<n;i++){
      cin>>value;
      root=insert(root,value);
   }
   do{
     cout<<"----Traversal Menu----"<<endl;
     cout<<"1.Preorder Traversal"<<endl;
     cout<<"2.Inorder Traversal"<<endl;
     cout<<"3.Postorder Traversal"<<endl;
     cout<<"4.exit"<<endl;
     cout<<"Enter your choice:";
     cin>>choice;
     
     switch(choice){
       case 1:
          cout<<"Preorder Traversal:";
          preorder(root);
          cout<<endl;
          break;
         
       case 2:
          cout<<"INorder Traversal:";
          inorder(root);
          cout<<endl;
          break;
         
       case 3:
          cout<<"Postorder Traversal:";
          postorder(root);
          cout<<endl;
          break;
         
       case 4:
          cout<<"Exit the program"<<endl;
          break;
               
       default:
          cout<<"Invalid choice!! Try again."<<endl;
     }
   }while(choice!=4);
   
   return 0;
   }
