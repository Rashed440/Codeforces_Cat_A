#include<bits/stdc++.h>
using namespace std;

int main()
{ int a,b,c,d;


    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int cont=0;
        cin>>a>>b>>c>>d;

        if(a<b)
        {
            cont++;
        }
        if(a<c)
        {
            cont++;
        }

        if(a<d)
        {
            cont++;
        }

        v.push_back(cont);

    }

    for(auto i =v.begin(); i !=v.end() ; i++)
    {

        cout<<*i<<endl;
    }


}
