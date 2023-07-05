#include <bits/stdc++.h>
using namespace std;
#define int long long




signed main() {



    int t; cin >>t;
    while (t--)
    {

        int n; cin >>n;
        vector <int> v(n), ans, vc;
        for (auto&it:v) cin >>it;
        while (1)
        {
//            cout <<"current=";
//            for (auto &it: v) cout <<it <<" ";
//            cout <<endl;
//            cin.get();

            vc=v; sort(vc.begin(), vc.end());
            if (vc==v) break;

            int MEX=0;

            for (auto &it: vc) if (it==MEX) MEX++;
            //cout <<"MEX=" <<MEX <<endl;
            if (MEX==n)
            {
                for (int i=0; i<n; i++)

                if (v[i]!=i) {

                    ans.push_back(i+1);
                    v[i]=MEX;
                    break;
                }

                continue;
            }
            ans.push_back(MEX+1);
            v[MEX]=MEX;
        }
        cout <<ans.size() <<endl;
        for (auto &it: ans) cout <<it <<" ";
        cout <<endl;


    }








}
