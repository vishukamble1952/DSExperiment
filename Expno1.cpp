#include <iostream>
using namespace std;
int main() {
    int a[10];
    int n,ch;
    int sum,max,min;
    
    cout<<"Enter number of elements: ";
    cin>>n;
    
    cout<<"Enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout << "\n---Operations on Array ---\n";
    cout << "1. Display\n";
    cout << "2. Sum\n";
    cout << "3. Maximum\n";
    cout << "4. Minimum\n";
    cout << "5. Reverse\n";
    cout << "6.Exit\n";
   
    do{ 
        cout << "Enter your choice: ";
        cin >>ch; 
    switch(ch){
        case 1://display
         for(int i=0;i<n;i++){
             cout<<a[i]<<" ";
        }cout<<endl;
        break;
         
        case 2://sum
        sum=0;
         for(int i=0;i<n;i++){
             sum+=a[i];
           }  cout<<"Sum:"<<sum<<"\n";
        break;
        
        case 3: //maximum
        max=a[0];
        for(int i=0;i<n;i++){
            if(max<a[i]){
                 max=a[i];
            }
        } cout<<"Maximum number is "<<max<<"\n";
        break;
         
        case 4://minimum
        min=a[0];
        for(int i=0;i<n;i++){
            if(min>a[i]){
                min=a[i];
            }
        }cout<<"Minimum number is "<<min<<"\n";
        break;
            
        case 5://reverse
        for(int i=n-1;i>=0;i--){
            cout<<a[i]<<" ";
        }cout<<endl;
        break;
        
        case 6:
        cout<<"Exiting progrom..\n";
        break;
        
        default:
        cout<<"Invalid choice!!\n";
    }
    }
    while(ch!=6);
    return 0;
}
