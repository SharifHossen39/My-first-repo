#include<bits/stdc++.h>
using namespace std;

class myclass
{
private:
    string name;

public:

    void setName(string s)
    {
        name = s;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    myclass ob;
    ob.setName("Sharif Hossen");

    string ans = ob.getName();

    cout<<ans<<"\n";

    return 0;
}
