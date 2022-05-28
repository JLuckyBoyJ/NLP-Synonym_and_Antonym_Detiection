/**Lucky Boy**/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define pb push_back
#define maxn 300005
using namespace std;
int cnt;
map <string, int> dd;
map <int, string> cvt;
vector <int> syn[maxn], atn[maxn];
int main() {
    ifstream f1("Synonym_vietnamese.txt");
    ifstream f2("Antonym_vietnamese.txt");
    string s1, s2;
    while (f1 >> s1 >> s2) {
        if (!dd[s1]) {
            dd[s1] = ++cnt;
            cvt[cnt] = s1;
        }
        if (!dd[s2]) {
            dd[s2] = ++cnt;
            cvt[cnt] = s2;
        }
        int x = dd[s1],
            y = dd[s2];
        syn[x].pb(y);
        syn[y].pb(x);
        for (int v : syn[x]) {
			if (v != y) {
				syn[y].pb(v);
			}
           
        }
        for (int v : syn[y]) {
			if (v != x) {
				syn[x].pb(v);
			}  
        }
    }
    FOR(i, 1, cnt) {
        sort(syn[i].begin(), syn[i].end());
        syn[i].resize(unique(syn[i].begin(), syn[i].end()) - syn[i].begin());
    }
    while (f2 >> s1 >> s2) {
        if (!dd[s1]) {
            dd[s1] = ++cnt;
            cvt[cnt] = s1;
        }
        if (!dd[s2]) {
            dd[s2] = ++cnt;
            cvt[cnt] = s2;
        }
        int x = dd[s1],
            y = dd[s2];
        atn[x].pb(y);
        atn[y].pb(x);
        for (int v : syn[x]) {
            atn[y].pb(v);
        }
        for (int v : syn[y]) {
            atn[x].pb(v);
        }
    }
    FOR(i, 1, cnt) {
        sort(atn[i].begin(), atn[i].end());
        atn[i].resize(unique(atn[i].begin(), atn[i].end()) - atn[i].begin());
    }
    ofstream o1("Synonym_vietnamese_new.txt");
    ofstream o2("Antonym_vietnamese_new.txt");
    FOR(i, 1, cnt) {
        for (int v : syn[i]) {
            o1 << cvt[i] << ' ' << cvt[v] << '\n';
        }
        for (int v : atn[i]) {
            o2 << cvt[i] << ' ' << cvt[v] << '\n';
        }
    }
    return 0;
}
