//#include <iostream>
//#include <string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence); // read the entire input line
    int n = sentence.length();
    if (n >= 3 && sentence.substr(n-3) == "eh?")
    {
        cout << "Canadian!\n";
    }
    else
    {
        cout << "Imposter!\n";
    }
    return 0;
}

