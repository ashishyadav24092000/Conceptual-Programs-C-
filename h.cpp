#include <bits/stdc++.h>
using namespace std;
 
// Function to count different
// palindromic string of length X
// from the given string S
long long findways(string s, int x)
{
    vector<string> collect;
	// Base case
    if (x > (int)s.length())
        return 0;
 
    long long int n = (int)s.length();
 
    // Create the frequency array
    int freq[26];
 
    // Intitalise frequency array with 0
    memset(freq, 0, sizeof freq);
 
    // Count the frequency in the string
    for (int i = 0; i < n; ++i)
        freq[s[i] - 'a']++;
 
    multiset<int> se;
 
    for (int i = 0; i < 26; ++i)
        if (freq[i] > 0)
            // Store frequency of the char
            se.insert(freq[i]);
 
    long long ans = 1;
 
    for (int i = 0; i < x / 2; ++i) {
        long long int count = 0;
        for (auto u : se) {
            // check the frequency which
            // is greater than zero
            if (u >= 2)
 
                // No. of different char we can
                // put at the position of
                // the i and x - i
                count++;
        }
 
        if (count == 0)
            return 0;
 
        else
            ans = ans * count;
 
        // Iterator pointing to the
        // last element of the set
        auto p = se.end();
        p--;
        int val = *p;
        se.erase(p);
        if (val > 2)
            // decrease the value of the char
            // we put on the position i and n - i
            se.insert(val - 2);
    }
 
    if (x % 2 != 0) {
        long long int count = 0;
        for (auto u : se)
            // different no of char we can
            // put at the position x/2
            if (u > 0)
                count++;
 
        ans = ans * count;
    }
 
    // Return total no of
    // different string
    return ans;
}
 
// Driver code
int main()
{
    string s = "aaa";
    int x = 2;
    cout << findways(s, x);
 
    return 0;
}
