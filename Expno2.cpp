
#include <iostream>
using namespace std;

int main() {
    int r,c,ch;
    int sum,max,min;
    int a[r][c];
    
    cout<<"Enter no of rows:";
    cin>>r;
    cout<<"Enter no of colunms:";
    cin>>c;
    
    do{
        cout<<"**Operation on Matrix**"<<endl;
        cout<<"1.Create."<<endl;
        cout<<"2.Display."<<endl;
        cout<<"3.Sum of elements."<<endl;
        cout<<"4.Maximum."<<endl;
        cout<<"5.Minimum."<<endl;
        cout<<"6.Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        
        switch(ch){
        case 1:
         cout<<"Enter elements of matrix:";
         for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
                 cin>>a[i][j];
             }cout<<endl;
         }
         break;
         
         case 2:
         for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
                 cout<<a[i][j]<<" ";
             }cout<<endl;
         }
         break;
         
         case 3:
         sum=0;
         for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
                 sum+=a[i][j];
             }
         }
         cout<<"Sum :"<<sum<<endl;
         break;
         
         case 4:
         max=a[0][0];
         for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
                 if(a[i][j]>max){
                     max=a[i][j];
                 }
             }
         }
         cout<<"Maximun:"<<max<<endl;
         break;
         
         case 5:
         min=a[0][0];
         for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
                 if(a[i][j]<min){
                     min=a[i][j];
                 }
             }
         }
         cout<<"Minimun:"<<min<<endl;
         break;
         
         case 6:
         cout<<"Exiting the program."<<endl;
         break;
         
         default:
         cout<<"Invalid case!!"<<endl;
        } 
    }while(ch!=6);
    return 0;
}
