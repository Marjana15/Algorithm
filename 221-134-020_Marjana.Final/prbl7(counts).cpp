#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    int wordCount = 1;


    for (char c : sentence)
    {
        if (c == ' ')
        {
            wordCount++;
        }
    }

    cout << wordCount << endl;
    return 0;
}

