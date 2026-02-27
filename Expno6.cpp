#include <iostream>
using namespace std;

#define MAX 5
class Queue{
    private:
      int arr[MAX];
      int front,rear;
    public:
      Queue(){
          front=-1;
          rear=-1;
      }
bool isFull(){
    return (rear==MAX-1);
}
bool isEmpty(){
    return (rear==-1 || front<rear);
}
void enqueue(int value){
    if(isFull()){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(front=-1){
      front=0;}
    arr[++rear]=value;
    cout<<value<<"is inserted in queue."<<endl;
}
void dequeue(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
       return;
    }
    cout<<arr[front]<<"is deleted from queue"<<endl;
}
void peek(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    cout<<arr[front]<<" is peek from queue."<<endl;
    front++;
}
void display(){
     if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    cout<<"Queue elements:";
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
  }
};
int main() {
    Queue q;
    int choice,value;
    
    do{
        cout<<"\n--Menu for queue operation--\n"<<endl;
        cout<<"1.Enqueue\n 2.Dequeue\n 3.peek\n 4.Display\n 5.Exit\n "<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
       switch(choice){
           case 1:
             cout<<"Enter a value:";
             cin>>value;
             q.enqueue(value);
           break;
           case 2:
             q.dequeue();
           break;
           case 3:
             q.peek();
           break;
           case 4:
             q.display();
           break;
           case 5:
              cout<<"Exit Program!!"<<endl;
           break;
           default:
              cout<<"Invalid choice!!!"<<endl;
       } 
    }while(choice!=5);
    
    return 0;
}
