#include <iostream>
#include <vector>
#include <cstddef>
#include <cstdio>
#include <string>
using namespace std;

template <class T>

class Stack
{
private:
    vector<T> val;

public:
    bool Empty()
    {
        if(val.empty())
            return true;
        return false;
    }

    void push (const T &elem)
    {
        val.push_back(elem);
    }

    T& top()
    {
        return val.back();

    }
    void pop()
    {
        val.pop_back();
    }
    void print()
    {
        int i;

        for(i=0;i<val.size();i++)
            cout<<val[i]<<" ";

        cout<<"\n";
    }
};
int main()
{
    Stack<int> Sint;
    Stack<char> Schar;

    int x,n;
    char str;


    cout<<"int-1 char -2\n";
    cin>>x;

    if (x==1)
    {

        cin>>n;

        for (int i=0;i<n;i++)
        {
            cin>>x;
            Sint.push(x);
        }

        Sint.print();

        Sint.pop();
        Sint.print();
        if (Sint.Empty())
                cout<<"gol";
        else cout<<"nu e gol";

        cout<<Sint.top();

    }
    else if (x==2)
    {
        cin>>n;

        for (int i=0;i<n;i++)
        {
            cin>>str;
            Schar.push(str);
        }

        Schar.print();

        Schar.pop();
        Schar.print();
        if (Schar.Empty())
                cout<<"gol\n";
        else cout<<"nu e gol\n";

        cout<<Schar.top();


    }
    else cout<<"eroare";

    return 0;
}
return 0;
