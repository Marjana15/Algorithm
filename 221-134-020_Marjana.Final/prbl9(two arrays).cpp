#include <iostream>
using namespace std;

int main()
{

    int M,N;
    cin >> M >> N;
    int arr1[M],arr2[N];

    for(int i=0;i<M;i++)
    {
        cin >> arr1[i];
    }



    for(int i=0;i<N;i++)
    {
        cin >> arr2[i];
    }


    int A=M+N;
    int sumArr[A];

    for(int i=0;i<M;i++)
    {
        sumArr[i] = arr1[i];
    }

    for(int i=0;i<N;i++)
    {
        sumArr[i+M] = arr2[i];
    }

    for(int i=0;i<A;i++)
    {
        cout << sumArr[i] << " ";
    }

    return 0;
}

