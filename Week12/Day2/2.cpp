#include <bits/stdc++.h>
using namespace std;
int maxVowel(string s, int n, int k)
{
    unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    if (n < k)
        return 0;

    int total = 0;
    for (int i = 0; i < k; i++)
    {
        if (vowel.find(s[i]) != vowel.end())
        {
            total++;
        }
    }
    int maxtotal = total;
    for (int i = 0; i < n - k; i++)
    {
        if (vowel.find(s[i]) != vowel.end())
        {
            total--;
        }
        if (vowel.find(s[i + k]) != vowel.end())
        {
            total++;
        }
        maxtotal = max(maxtotal, total);
    }

    return maxtotal;
}
int main()
{
    string s = "bacacbefaobeacfe";
    int n = s.size();
    int k = 5;

    cout << maxVowel(s, n, k) << endl;
    return 0;
}