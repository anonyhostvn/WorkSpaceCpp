#include <bits/stdc++.h>
#define forinc(i,a,b) for (int i = a ; i <= b ; i ++)
#define fordec(i,a,b) for (int i = a ; i >= b ; i --)
#define forv(j,u) for (int j = 0 ; j < u.size() ; j++)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mk make_pair
#define pii pair<int,int>

template <class _T> bool maximize(_T &a , _T b) {return a < b ? a = b , 1 : 0 ; }
template <class _T> bool minimize(_T &a , _T b) {return a > b ? a = b , 1 : 0 ; }

const int ooit = 2e9 ;
const long long ooll = 1e15 ;

using namespace std ;

#define maxN 305

int n , a[maxN] ;

void enter () {
    cin >> n ;
    forinc(i,1,n) {
        char ch ; cin >>  ch ;
        a[i] = (ch == 'I') ? 1 : 0 ;
    }
}

vector<int> b ;

void prepare () {

}

int main () {
    freopen("BOWLING.inp" , "r" , stdin) ;
    freopen("BOWLING.out" , "w" , stdout) ;
    enter () ;
    return 0 ;
}
