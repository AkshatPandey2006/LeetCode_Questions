#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void Pair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first;
    
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
}

void Vector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5);
    vector<int> v2(5, 20);
    vector<int> v3(v2);

    for (auto &it: v) {
        cout << it << " ";
    }

    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int> v4(2, 100);
    v4.insert(v4.begin(), 300);
    v4.insert(v4.begin() + 1, 2, 10);

    vector<int> copy(2, 50);
    v4.insert(v4.begin(), copy.begin(), copy.end());

    cout << v4.size();
    v4.pop_back();
    v2.swap(v3);
}

void List() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_back(2);
    ls.emplace_back(4);
}

void Deque() {
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_back(3);
    dq.pop_back();
    dq.pop_front();
    cout << dq.back();
    cout << dq.front();
}

void Stack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);

    cout << st.top();
    st.pop();
    cout << st.size();
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void Queue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    q.back() += 5;
    cout << q.front();
    q.pop();
    cout << q.front();
}

void Priority_Queue() {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout << pq.top();
    pq.pop();
    cout << pq.top();

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(5);
    pq_min.push(2);
    pq_min.push(8);
    pq_min.emplace(10);
    cout << pq_min.top();
}

void Set() {
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    auto it = st.find(3);
    st.erase(5);
    int cnt = st.count(1);
    auto it2 = st.find(3);
    st.erase(it2);

    auto it1 = st.find(2);
    auto it3 = st.find(4);
    st.erase(it1, it3);

    auto it_lb = st.lower_bound(2);
    auto it_ub = st.upper_bound(3);
}

void Multiset() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1);

    int cnt = ms.count(1);
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), next(ms.find(1), 2));
}

void Unordered_Set() {
    unordered_set<int> st;
}

void Map() {
    map<int, int> mpp1;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});
    mpp1[{2, 3}] = 10;

    for (auto it : mpp1) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp1[1];
    cout << mpp1[5];

    auto it = mpp1.find(3);
    cout << it->second;

    it = mpp1.find(5);
    auto it_lb = mpp1.lower_bound(2);
    auto it_ub = mpp1.upper_bound(3);
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p2.second > p2.second) return false;
    if (p1.first > p2.first) return true;
    return false;
}

void Algorithm() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    sort(a, a + n);
    vector<int> v = {1, 2, 3, 4, 5};
    sort(v.begin(), v.end());
    sort(a + 2, a + 4);
    sort(a, a + n, greater<int>());

    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(arr, arr + n, comp);

    int num = 7;
    int cnt = __builtin_popcount(num);

    string s = "123";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
}

int main() {
    // You can call your functions here for testing
    Pair();
    Vector();
    List();
    Deque();
    Stack();
    Queue();
    Priority_Queue();
    Set();
    Multiset();
    Unordered_Set();
    Map();
    Algorithm();

    return 0;
}
