#include <bits/stdc++.h>
using namespace std;

void tryingPairs()
{

    pair<int, int> p = {2, 3};
    cout << p.first << " " << p.second;

    cout << endl;

    pair<int, pair<int, int>> k = {2, {5, 6}};
    cout << k.first << " " << k.second.first << " " << k.second.second;

    cout << endl;

    pair<int, int> arr[] = {{1, 3}, {5, 6}, {9, 3}};
    cout << arr[1].second << " " << arr[0].first;
}

void Vector()
{

    vector<int> v;
}

void tryingSet()
{
    set<int> st;

    st.insert(2);
    st.insert(4);
    st.insert(3);
    st.insert(8);
    st.emplace(2);

    auto it = st.find(3);

    if (it != st.end())
    {
        cout << *it;
    }
}

int main()
{
    // tryingPairs();

    // tryingSet();
    string s = "123";

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // Vector();
}