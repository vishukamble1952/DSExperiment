#include<iostream>
using namespace std;

// ---------- Quick Sort ---------
int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for(int j=low; j<high; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    return i+1;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi-1);
        quickSort(a, pi+1, high);
    }
}

// ---------- Merge Sort ----------
void merge(int a[], int l, int m, int r)
{
    int i=l, j=m+1, k=l;
    int temp[100];

    while(i<=m && j<=r)
    {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i<=m)
        temp[k++] = a[i++];

    while(j<=r)
        temp[k++] = a[j++];

    for(i=l; i<=r; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = (l+r)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int main()
{
    int n, ch;
    cout<<"Enter size of array: ";
    cin>>n;

    int a[100];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>a[i];

    do
    {
        cout<<"\n--- Sorting Menu ---";
        cout<<"\n1. Bubble Sort";
        cout<<"\n2. Selection Sort";
        cout<<"\n3. Insertion Sort";
        cout<<"\n4. Quick Sort";
        cout<<"\n5. Merge Sort";
        cout<<"\n6. Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1: // Bubble Sort
                for(int i=0;i<n-1;i++)
                    for(int j=0;j<n-i-1;j++)
                        if(a[j] > a[j+1])
                            swap(a[j], a[j+1]);
                cout<<"Bubble Sorted: ";
                break;

            case 2: // Selection Sort
                for(int i=0;i<n-1;i++)
                {
                    int min=i;
                    for(int j=i+1;j<n;j++)
                        if(a[j] < a[min])
                            min=j;
                    swap(a[i], a[min]);
                }
                cout<<"Selection Sorted: ";
                break;

            case 3: // Insertion Sort
                for(int i=1;i<n;i++)
                {
                    int key = a[i];
                    int j = i-1;
                    while(j>=0 && a[j] > key)
                    {
                        a[j+1] = a[j];
                        j--;
                    }
                    a[j+1] = key;
                }
                cout<<"Insertion Sorted: ";
                break;

            case 4:
                quickSort(a, 0, n-1);
                cout<<"Quick Sorted: ";
                break;

            case 5:
                mergeSort(a, 0, n-1);
                cout<<"Merge Sorted: ";
                break;

            case 6:
                cout<<"Exit";
                break;

            default:
                cout<<"Invalid choice!";
        }

        if(ch>=1 && ch<=5)
        {
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
        }

    }while(ch!=6);

    return 0;
}
