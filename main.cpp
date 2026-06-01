#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {4, 10, 3, 15, 9};
    int cont=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>=10)
        {
            cont=cont+1;
        }
    }
    cout<<cont;
    return 0;
}
