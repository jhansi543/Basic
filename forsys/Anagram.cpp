#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ebfjkdl";
    string t = "cbkdjbkd";
    vector<int> arr(25, 0);
    int n1 = s.length();
    int n2 = t.length();
    if (n1 != n2)
    {
        cout << "false";
        return 0;
    }
    for (int i = 0; i < n1; i++)
    {
        arr[s[i] - 'a']++;
        arr[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}