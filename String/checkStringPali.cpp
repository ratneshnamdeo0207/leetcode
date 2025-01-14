#include<iostream>
using namespace std;
void checkPali(string s)
{
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    int sa = 0, e = s.size()-1;
    cout<<s<<endl;
    while(sa <= e)
    {
        if(s[sa] != s[e])
        {
            cout<<"Not pali";
            cout<<"S[ae] = " << s[sa]<<endl;
            cout<<"S[e] = " << s[e]<<endl;
            return;
        }
    sa++; e--;
    }
    cout<<"pali"<<endl;
    // cout<<s;
}
bool isPalindrome(string s) {
        string t;
        for(int i = 0; i < s.size();i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                cout<<s[i]<<endl;
                t += s[i];
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                t += s[i] - 'A' + 'a';
            }
            else if(s[i] >= 'a'  && s[i] <= 'z')
            {
                t += s[i];
            }
        }
        cout<<t;
        int sa = 0, e = t.size()-1;
        while(sa <= e)
        {
            if(t[sa] != t[e])
            {
                cout<<"S[ae] = " << t[sa]<<endl;
            cout<<"S[e] = " << t[e]<<endl;
                return false;
            }
            sa++; e--;
        }
        // cout<<t;
        return true;
    }
int main()
{
    string s = "0P";
    // checkPali(s);
    if(isPalindrome(s))
    {
        cout<<"Pali";
    }
    else
    cout<<"Not pali";
    return 0;
}