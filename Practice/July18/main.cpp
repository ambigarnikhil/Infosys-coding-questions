#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
/*
int main()
{
    char s1[10]="Test";
    char s2[10]="estT";
    int len1= strlen(s1);
    int len2= strlen(s2);
    sort(s1,s1+len1);
    sort(s2,s2+len2);
    //cout<<len1;
    //cout<<len2;
    //cout<<s1;
    //cout<<s2;
    if(len1!=len2)
    {
        cout<<"Not a anagram"<<endl;
    }
    else
    {
        if(strcmp(s1,s2)==0)
            cout<<"anagram\n";
        else
            cout<<"Not a anagram"<<endl;
    }


    return 0;
}
*/
/*
#include<bits/stdc++.h>
int main()
{
    string s1;
    cout<<"Enter the string to check whether it is isogram or not\n";
    cin>>s1;
    int len=s1.length();
    for(int i=0;i<len;i++)
        s1[i]=tolower(s1[i]);
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    for(int i=0;i<len-1;i++)
    {
        if(s1[i]==s1[i+1])
        {
            cout<<"Not a isogram\n";
            return 0;
        }
    }
    cout<<"isogram\n";
    return 0;

}
*/

/*
int main()
{
    string s1;
    cin>>s1;
    int *c;
    c=(int *)calloc(26,sizeof(int));
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==32)
            continue ;
        if(s1[i]>=97)
            c[s1[i]-97]+=1;
        else
            c[s1[i]-65]+=1;
    }
    for(int j=0;j<26;j++)
    {
        if(c[j]==0)
        {
            cout<<"Not a Pangram\n";
            return 0;
        }
    }
    cout<<"Pangram\n";
    return 0;
}
*/
/*
#include<algorithm>
#include<bits/stdc++.h>
int main()
{
    int *arr;
    arr=(int *)calloc(9,sizeof(int));
    for(int i=0;i<9;i++)
        cin>>arr[i];
    sort(arr,arr+9);
    for(int i=0;i<10;i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<i+1<<"\n";
            break ;
        }
    }
}
*/

/*
#include<algorithm>
#include<bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    int *arr;
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
                cout<<arr[i]<<endl;
        }

}
*/

/*
#include<algorithm>
#include<bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    int *arr;
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int minimum=arr[0];
    int maximum=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minimum)
            minimum=arr[i];
        if(arr[i]>maximum)
            maximum=arr[i];
    }
    cout<<"MINIMUM:"<<minimum<<endl;
    cout<<"MAXIMUM:"<<maximum<<endl;
}
*/

/*
#include<algorithm>
#include<bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int count=0;
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                count++;
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
*/

/*
#include<algorithm>
#include<bits/stdc++.h>
#include<stack>
int main()
{
    int n;
    cin>>n;
    stack<int> a;
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    //cout<<a.empty()<<endl;;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                if(a.empty())
                    a.push(arr[i]);
                else if(a.top()!=arr[i])
                    a.push(arr[i]);
            }
        }
    }
    if(a.empty())
    {
        cout<<"No duplicate elements\n";
    }
    else
    {
        while(!a.empty())
    {
        cout<<a.top()<<endl;
        a.pop();
    }

    }
}
*/

/*
#include<algorithm>
#include<bits/stdc++.h>
#include<stack>
int main()
{
    int n;
    cin>>n;
    queue<int> a;
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    //cout<<a.empty()<<endl;;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                if(a.empty())
                    a.push(arr[i]);
                else if(a.back()!=arr[i])
                    a.push(arr[i]);
            }
        }
    }
    if(a.empty())
    {
        cout<<"No duplicate elements\n";
    }
    else
    {
        while(!a.empty())
    {
        cout<<a.front()<<endl;
        a.pop();
    }

    }
}
*/

/*
#include<algorithm>
#include<bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int *temp=(int *)calloc(n,sizeof(int));
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
            temp[j++]=arr[i];
    }
    temp[j++]=arr[n-1];
    for(int i=0;i<j;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=0;i<j;i++)
    {
        cout<<arr[i]<<endl;
    }
}
*/
/*
#include<algorithm>
#include<bits/stdc++.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n;
    cin>>n;
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}
*/
/*
#include<algorithm>
#include<bits/stdc++.h>
void swap(int *p, int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;

}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int p=low;
    int q=high;
    while(p<q)
    {
        while(arr[p]<=pivot)
        {
            p++;
        }
        while(arr[q]>pivot)
        {
            q--;
        }
        if(p<q)
        {
            swap(&arr[p],&arr[q]);
        }
    }
    swap(&pivot,&arr[q]);
    return q;
}
void quicksort(int arr[], int low,int high)
{
    if(low<high)
    {
        int loc=partition(arr,low,high);
        quicksort(arr,low,loc-1);
        quicksort(arr,loc+1,high);
    }
}
int main()
{
    int n;
    cin>>n;
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
*/

/*
//How do you print duplicate characters from a string?
#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>
int main()
{
    string s1;
    //cin>>s1;
    getline(cin,s1);
    int len=s1.length();
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    for(int i=0;i<len-1;i++)
    {
        if(s1[i]==s1[i+1])
            cout<<s1[i];
    }
}
*/

/*
//How do you check if two strings are anagrams of each other?
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int len1=s1.length();
    int len2=s2.length();
    if(len1!=len2)
        cout<<"Not a anagram"<<endl;
    else
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i=0;i<len1;i++)
        {
            if(s1[i]-s2[i]!=0)
            {
                cout<<"Not a anagram\n";
                return 0;
            }
        }
        cout<<"Anagram\n";
    }
}
*/

/*
//How do you print the first non-repeated character from a string?
#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
int main()
{
    char s1[10];
    scanf("%[^\n]",s1);
    int len=strlen(s1);
    //s1.tolower();
    strlwr(s1);
    sort(s1,s1+len);
    for(int i=0;i<len;i++)
    {
        if(s1[i]!=s1[i+1])
        {
            cout<<s1[i]<<endl;
        }
    }
}
*/

/*
//String reversal:
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    int len =s1.length();
    int i=0;
    int j=len-1;
    while(i<j)
    {
        int temp;
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
        i++;
        j--;
    }
    cout<<s1;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
void swap(char *a,char *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    string s1;
    getline(cin,s1);
    int len =s1.length();
    int i=0;
    int j=len-1;
    while(i<j)
    {
        swap(&s1[i],&s1[j]);
        i++;
        j--;
    }
    cout<<s1;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    int len =s1.length();
    char *temp=(char *)calloc(len,sizeof(char));
    int i=0;
    for(int j=len-1;j>=0;j--)
    {
        temp[i++]=s1[j];
    }
    for(int k=0;k<len;k++)
    {
        s1[k]=temp[k];
    }
    cout<<s1;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    reverse(s1.begin(),s1.end());
    cout<<s1;

}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<stack>
int main()
{
    string s1;
    getline(cin,s1);
    stack<char> temp;
    int len=s1.length();
    for(int i=0;i<len;i++)
    {
        temp.push(s1[i]);
    }
    while(!temp.empty())
    {
        cout<<temp.top();
        temp.pop();
    }

}
*/
/*
//How do you check if a string contains only digits?
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    int len=s1.length();
    for(int i=0;i<len;i++)
    {
        int temp = s1[i]-47;
        if(temp >=0 && temp<=9)
        {
            continue;
        }
        else
        {
            cout<<"String doesn't contains only digits"<<endl;
            return 0;
        }
    }
    cout<<"String contains only digits"<<endl;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<cstring>
int main()
{
    char s1[10];
    scanf("%[^\n]",s1);
    int len=strlen(s1);
    for(int i=0;i<len;i++)
    {
        if(isdigit(s1[i]))
        {
            continue;
        }
        else
        {
            cout<<"String doesn't contains only digits"<<endl;
            return 0;
        }
    }
    cout<<"String contains only digits"<<endl;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    int len=s1.length();
    for(int i=0;i<len;i++)
    {
        int temp = s1[i]-47;
        if(temp >=0 && temp<=9)
        {
            continue;
        }
        else
        {
            cout<<"String doesn't contains only digits"<<endl;
            return 0;
        }
    }
    cout<<"String contains only digits"<<endl;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<cstring>
int main()
{
    char s1[10];
    scanf("%[^\n]",s1);
    int len=strlen(s1);
    for(int i=0;i<len;i++)
    {
        if(isalpha(s1[i]))
        {
            continue;
        }
        else
        {
            cout<<"String doesn't contains only alphabets"<<endl;
            return 0;
        }
    }
    cout<<"String contains only alphabets"<<endl;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    int len=s1.length();
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    for(int i=0;i<len;i++)
    {
        int temp = s1[i]-97;
        if(temp >=0 && temp<=25)
        {
            continue;
        }
        else
        {
            cout<<"String doesn't contains only alphabets"<<endl;
            return 0;
        }
    }
    cout<<"String contains only alphabets"<<endl;
}
*/
/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    int len=s1.length();
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    for(int i=0;i<len;i++)
    {
        int temp = s1[i]-65;
        if(temp >=0 && temp<=25)
        {
            continue;
        }
        else
        {
            cout<<"String doesn't contains only alphabets"<<endl;
            return 0;
        }
    }
    cout<<"String contains only alphabets"<<endl;
}
*/


/*
//How do you count a number of vowels and consonants in a given string?
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    int len=s1.length();
    int v_count=0;
    int c_count=0;
    for(int i=0;i<len;i++)
    {
        if(isalpha(s1[i]))
        {
            char a=s1[i];
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
                v_count++;
            else
                c_count++;
        }
    }
    cout<<"Vowels:"<<v_count<<endl;
    cout<<"Consonants:"<<c_count<<endl;
}
*/
/*
//How do you check if a given string is a palindrome?
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    int len=s1.length();
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    int i=0;
    int j= len-1;
    while(i<j)
    {
        if(s1[i]-s1[j]!=0)
        {
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;
}
*/

/*
//How do you count the occurrence of a given character in a string?
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    char c;
    cout<<"Enter the character to count it occurence:"<<endl;
    cin>>c;
    //sort(s1.begin(),s1.end());
    int len= s1.length();
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(s1[i]==c)
            count++;
    }
    cout<<c<<" character is found "<< count<<" number of times"<<endl;

}
*/
/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    char c;
    cout<<"Enter the character to count it occurence:"<<endl;
    cin>>c;
    cout<< count(s1.begin(),s1.end(),c);

}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1="i like this program very much";
    stack<char> a;
    int len =s1.length();
    for(int i=0;i<len;i++)
    {
        a.push(s1[i]);
    }
    while(!a.empty())
    {
        cout<<a.top();
        a.pop();
    }
}
*/
/*
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include <unordered_map>
int main()
{
    string s1;
    getline(cin,s1);
    //unordered_map<char,int> omap;
    unordered_map<char, int> omap;
    for(int i=0;s1[i]!='\0';i++)
    {
        if(omap.count(s1[i])==1)
        {
            omap[s1[i]]+=1
        }
        else{
            omap[s1[i]]=1
        }
    }
}
*/

/*
//Unordered map
#include <iostream>
using namespace std;
#include<string>
#include<unordered_map>
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    string s1;
    getline(cin,s1);
    unordered_map<char, int> omap;
    unordered_map<char, int>::iterator cursor;
    int len= s1.length();
    for(int i=0;s1[i]!='\0';i++)
    {
        if(omap.count(s1[i])==1)
        {
            omap[s1[i]]+=1;
        }
        else
        {
            omap[s1[i]]=1;
        }
    }
    for (cursor = omap.begin(); cursor != omap.end(); cursor++)
    {
        cout << cursor->first;
        cout << '\t' << cursor->second << '\n'
             << endl;
    }
    return 0;
}*/

/*
#include<bits/stdc++.h>
class Nikhil
{
public:
    Nikhil(){ cout<<"Nikhil is 20 years old\n"; }
    Nikhil(int a){ cout<<"Nikhil is "<<a<< " years old\n";}
    void fun()
    {
        cout<<"Nikhil loves roopashree\n";
    }

};
class roopashree: public Nikhil
{
public:
    roopashree(){ cout<<"Roopashree is 20 years old\n"; };
};
int main()
{
    //Nikhil n1;
    roopashree r1;
    r1.fun();
}
*/

/*
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
int main()
{
    string s1="i love my roopashree";
    //getline(cin,s1);
    int j=0,i=0;
    char temp[1][10];
    int k=0;
    while()
    {
        while(s1[i]!=' ')
        {
            j++;
        }

    }
}
*/
/*
#include<bits/stdc++.h>
class a
{
public:
    virtual void display(){ cout << "hello"; }
};

class b:public a
{
public:
       void display(){ cout << "bye";}
};
int main()
{
    b b1;
    b1.display();
}
*/

/*
//Friend function
#include<bits/stdc++.h>
#include<string>
class Nikhil
{
    int a,b;
public:
    void set_values()
    {
        a=50;
        b=30;
    }
    friend int mean(Nikhil s);

};
int mean(Nikhil s)
{
    return int(s.a+s.b)/2;
}
int main()
{
    Nikhil n1;
    n1.set_values();
    int a= mean(n1);
    cout<<a<<endl;
}
*/

/*
#include<bits/stdc++.h>
#include<string>
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-2)+fib(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number to get its fibonacci term:\n";
    cin>>n;
    int a=fib(n);
    cout<<a<<endl;
}
*/
/*
#include<bits/stdc++.h>
#include<string>
int fib(int n)
{
    int fib[n+2];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int main()
{
    int n;
    cout<<"Enter the number to get its fibonacci term:\n";
    cin>>n;
    int a=fib(n);
    cout<<a<<endl;
}
*/
/*
#include<bits/stdc++.h>
#include<string>
int main()
{
    string s1="Nikhil love roopashree";
    string word="";
    unordered_map<int,string> omap;
    int a=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==' ')
        {
            cout<<word<<endl;
            omap[a++]=word;
            word="";
        }
        else
        {
            word=word+s1[i];
        }
    }
    cout<<word<<endl;
    omap[a]=word;
}
*/

/*
//Swap without additional variable
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<"  "<<b;
}
*/

/*
#include<bits/stdc++.h>
#include<list>
#include<iterator>
void display(list<int> mylist)
{
    list<int>:: iterator s;
    for(s=mylist.begin(); s!=mylist.end();s++)
        cout<<*s<<"->";
}
int main()
{
    list<int> mylist;
    cout<<"List is empty or not:"<<mylist.empty()<<endl;
    mylist.push_front(10);
    mylist.push_back(20);
    list<int>:: iterator s=mylist.begin();
    advance(s,2);
    mylist.insert(s,30);
    advance(s,4);
    mylist.insert(s,40);
    display(mylist);
    cout<<endl;
    cout<<endl;
    mylist.pop_front();
    mylist.pop_back();
    cout<<mylist.front();
    cout<<mylist.back();
    cout<<endl;
    s=mylist.begin();
    mylist.erase(s);
    display(mylist);
    cout<<endl;
    mylist.push_back(5);
    mylist.push_back(10);
    mylist.push_back(13);
    display(mylist);
    cout<<endl;
    mylist.sort();
    display(mylist);
    cout<<endl;
    mylist.reverse();
    display(mylist);
    cout<<endl;
    cout<<mylist.max_size();
    cout<<endl;
    mylist.remove(10);
    display(mylist);
    cout<<endl;
    mylist.push_back(13);
    mylist.sort();
    mylist.unique();
    display(mylist);

}
*/

/*
//Matrix addition
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int m,n,k,l;
    cout<<"Enter the number of rows for matrix1:\n";
    cin>>m;
    cout<<"Enter the number of columns for matrix1:\n";
    cin>>n;
    cout<<"Enter the number of rows for matrix2:\n";
    cin>>k;
    cout<<"Enter the number of columns for matrix2:\n";
    cin>>l;
    if(m!=k || n!=l)
        cout<<"We can't add matrix of different sizes\n";
    else
    {
        int **matrix1;
        matrix1=(int **)calloc(m,sizeof(int*));
        for(int i=0;i<n;i++)
            matrix1[i]=(int *)calloc(1,sizeof(int));
        cout<<"Enter the matrix 1:\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the "<<i<<j<<" element:";
                cin>>matrix1[i][j];

            }
        }
        int **matrix2;
        matrix2=(int **)calloc(m,sizeof(int*));
        for(int i=0;i<n;i++)
            matrix2[i]=(int *)calloc(1,sizeof(int));
        cout<<"Enter the matrix 2:\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the "<<i<<j<<" element:";
                cin>>matrix2[i][j];

            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix1[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
*/
/*
//Matrix subtraction
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int m,n,k,l;
    cout<<"Enter the number of rows for matrix1:\n";
    cin>>m;
    cout<<"Enter the number of columns for matrix1:\n";
    cin>>n;
    cout<<"Enter the number of rows for matrix2:\n";
    cin>>k;
    cout<<"Enter the number of columns for matrix2:\n";
    cin>>l;
    if(m!=k || n!=l)
        cout<<"We can't subtract matrix of different sizes\n";
    else
    {
        int **matrix1;
        matrix1=(int **)calloc(m,sizeof(int*));
        for(int i=0;i<n;i++)
            matrix1[i]=(int *)calloc(1,sizeof(int));
        cout<<"Enter the matrix 1:\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the "<<i<<j<<" element:";
                cin>>matrix1[i][j];

            }
        }
        int **matrix2;
        matrix2=(int **)calloc(m,sizeof(int*));
        for(int i=0;i<n;i++)
            matrix2[i]=(int *)calloc(1,sizeof(int));
        cout<<"Enter the matrix 2:\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the "<<i<<j<<" element:";
                cin>>matrix2[i][j];

            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix1[i][j]=matrix1[i][j]-matrix2[i][j];
            }
        }
        cout<<"Resultant matrix after subtraction is:\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
*/
/*
//Transpose of a matrix
#include<bits/stdc++.h>
#include<algorithm>
void display(int **matrix,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int m,n;
    cout<<"Enter the number of rows in a matrix\n";
    cin>>m;
    cout<<"Enter the number of columns in a matrix\n";
    cin>>n;
    int **matrix,**tr_matrix;
    matrix=(int **)calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
        matrix[i]=(int *)calloc(n,sizeof(int));
    tr_matrix=(int **)calloc(n,sizeof(int *));
    for(int i=0;i<n;i++)
        tr_matrix[i]=(int *)calloc(m,sizeof(int));
    cout<<"Enter the elements into a matrix\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    display(matrix,m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            tr_matrix[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<tr_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int m,n,k,l;
    cout<<"Enter the number of rows for matrix1:\n";
    cin>>m;
    cout<<"Enter the number of columns for matrix1:\n";
    cin>>n;
    cout<<"Enter the number of rows for matrix2:\n";
    cin>>k;
    cout<<"Enter the number of columns for matrix2:\n";
    cin>>l;
    if(n!=k)
        cout<<"We can't multiply matrix of the entered sizes\n";
    else
    {
        int **matrix1;
        matrix1=(int **)calloc(m,sizeof(int*));
        for(int i=0;i<m;i++)
            matrix1[i]=(int *)calloc(n,sizeof(int));
        cout<<"Enter the matrix 1:\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the "<<i<<j<<" element:";
                cin>>matrix1[i][j];

            }
        }
        int **matrix2;
        matrix2=(int **)calloc(k,sizeof(int*));
        for(int i=0;i<k;i++)
            matrix2[i]=(int *)calloc(l,sizeof(int));
        cout<<"Enter the matrix 2:\n";
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<l;j++)
            {
                cout<<"Enter the "<<i<<j<<" element:";
                cin>>matrix2[i][j];

            }
        }
        int **mul_matrix;
        mul_matrix=(int **)calloc(m,sizeof(int*));
        for(int i=0;i<m;i++)
            mul_matrix[i]=(int *)calloc(l,sizeof(int));

        int sum=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<l;j++)
            {
                for(int p=0;p<k;p++)
                {
                    sum=sum+matrix1[i][p]*matrix2[p][j];

                }
                mul_matrix[i][j]=sum;
                sum=0;
            }
        }




        cout<<"Resultant matrix after multiplication is:\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<l;j++)
            {
                cout<<mul_matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
int maxinpw(float *pw,int o)
{
    int i=0;
    int max1=pw[0];
    for(int j=0;j<o;j++)
    {
        if(pw[j]>max1)
            i=j;
    }
    return i;
}
int main()
{
    int o,capacity;
    //cout<<c;
    cout<<"Enter the number of objects:\n";
    cin>>o;
    int *weight,*profit;
    float *pw;
    weight=(int *)calloc(o,sizeof(int));
    cout<<"Enter the weights:\n";
    for(int i=0;i<o;i++)
        cin>>weight[i];

    profit=(int *)calloc(o,sizeof(int));
    cout<<"Enter the profit:\n";
    for(int i=0;i<o;i++)
        cin>>profit[i];

    cout<<"Enter the capacity of the bag:\n";
    cin>>capacity;

    pw=(float *)calloc(o,sizeof(float));
    for(int i=0;i<o;i++)
        pw[i]=(static_cast<float> (profit[i])/weight[i]);

    cout<<"Profit by weight array:\n";
    for(int i=0;i<o;i++)
        cout<<pw[i]<<" ";
    cout<<endl;
    int x[o]={0};
    sort(pw, pw+n,greater<int>());
    cout<<endl;
    for(int i=0;i<o;i++)
        cout<<x[i]<<" ";
}
*/

/*
#include<bits/stdc++.h>
struct Item
{
    int weight;
    int profit;
    float pw;
};
void input(Item items[],int n)
{
    cout<<"Enter "<<n<<" items weight and value"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<" weight"<<i+1<<":";
        cin>>items[i].weight;
        cout<<"Enter "<<" profit"<<i+1<<":";
        cin>>items[i].profit;
        items[i].pw=(double(items[i].profit)/items[i].weight);
    }
}
void display(Item items[],int n)
{
    cout<<"Weights:";
    for(int i=0;i<n;i++)
        cout<<items[i].weight<<" ";
    cout<<endl;
    cout<<"Profit:";
    for(int i=0;i<n;i++)
        cout<<items[i].profit<<" ";
    cout<<endl;
    cout<<"P/W ratio:";
    for(int i=0;i<n;i++)
        cout<<items[i].pw<<" ";
}
bool compare(Item i1, Item i2)
{
    return (i1.pw>i2.pw);
}
float fractionalknapsack(Item items[],int n, int capacity)
{
    float total_value=0;
    float total_weight=0;
    sort(items,items+n,compare);
    for(int i=0;i<n;i++)
    {
        if(total_weight+items[i].weight<=capacity)
        {
            total_value+=items[i].profit;
            total_weight+=items[i].weight;
        }
        else
        {
            int wt=capacity-total_weight;
            total_value+= wt*items[i].pw;
            total_weight+=wt;
           break;
        }
    }
    cout << "total weight in bag " << total_weight<<endl;
    return total_value;

}
int main()
{
    int n,capacity;
    float max1;
    cout<<"Enter the number of objects:"<<endl;
    cin>>n;
    Item items[n];
    input(items,n);
    display(items,n);
    cout<<endl;
    cout<<"Enter the capacity of the knapsack:"<<endl;
    cin>>capacity;
    max1=fractionalknapsack(items,n,capacity);
    cout<<"Maximum Profit:"<<max1;
}
*/

/*
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
struct Item
{
    int weight;
    int profit;
    float pwr;
};
void input(Item item[], int n)
{
    cout<<"Enter the weights & profits of "<<n<<" Objects:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight of object "<<i+1<<":";
        cin>>item[i].weight;
        cout<<"Enter the profit of object "<<i+1<<":";
        cin>>item[i].profit;
        item[i].pwr=(float (item[i].profit)/item[i].weight);
    }
}
void display(Item item[], int n)
{
    cout<<"Weight of objects is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<item[i].weight<<" ";
    }
    cout<<endl;
    cout<<"Profit of objects is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<item[i].profit<<" ";
    }
    cout<<endl;
    cout<<"Profit to weight ratio is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<item[i].pwr<<" ";
    }
    cout<<endl;
}
bool compare(Item i1, Item i2)
{
    return (i1.pwr>i2.pwr);
}
float knapsack(Item item[], int n, int capacity)
{
    float totalweight=0, totalprofit=0;
    sort(item,item+n,compare);
    for(int i=0;i<n;i++)
    {
        if(totalweight+item[i].weight<=capacity)
        {
            totalweight+=item[i].weight;
            totalprofit+=item[i].profit;
        }
        else
        {
            int wr=capacity-totalweight;
            totalprofit+=wr*item[i].pwr;
            totalweight+=wr;
            break;
        }
    }
    cout<<"The total weight after loading in knapsack is "<<totalweight<<endl;
    return totalprofit;
}
int main()
{
    int n,capacity;
    cout<<"Enter the Total number of objects:\n";
    cin>>n;
    Item item[n];
    input(item,n);
    display(item,n);
    cout<<"Enter the capacity of the knapsack:\n";
    cin>>capacity;
    float max1;
    max1=knapsack(item,n,capacity);
    cout<<"Maximum Profit: "<<max1;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
struct Job
{
    char id;
    int profit;
    int deadline;
};
void input(Job job[],int n)
{
    cout<<"Enter the details of "<<n<<" Jobs\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the id of Job "<<i+1<<":";
        cin>>job[i].id;
        cout<<"Enter the profit of Job "<<job[i].id<<": ";
        cin>>job[i].profit;
        cout<<"Enter the deadline of Job "<<job[i].id<<": ";
        cin>>job[i].deadline;

    }
}
void display(Job job[],int n)
{
    cout<<"Job ids:\n";
    for(int i=0;i<n;i++)
    {
        cout<<job[i].id<<" ";
    }
    cout<<endl;
    cout<<"Job profits:\n";
    for(int i=0;i<n;i++)
    {
        cout<<job[i].profit<<" ";
    }
    cout<<endl;
    cout<<"Job deadlines:\n";
    for(int i=0;i<n;i++)
    {
        cout<<job[i].deadline<<" ";
    }
    cout<<endl;

}
bool compare(Job a, Job b)
{
    return (a.profit>b.profit);
}
void jobscheduling(Job job[],int n)
{
    sort(job,job+n,compare);
    int result[n];
    bool slot[n]={false};
    for(int i=0;i<n;i++)
    {
        for(int j=min(n,job[i].deadline)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j]=i;
                slot[j]=true;
                break;
            }
        }
    }
    int profit1 =0;
    cout<<"Job sequence for maximum profit is:\n";
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
           cout<< job[result[i]].id<<" ";
           profit1+= job[result[i]].profit;
        }

    }
    cout<<endl;
    cout<<"Maximum profit: "<<profit1;
}
int main()
{
    int n;
    cout<<"Enter the total number of Jobs: ";
    cin>>n;
    Job job[n];
    input(job,n);
    display(job,n);
    jobscheduling(job,n);


}
*/
/*
#include<bits/stdc++.h>
#include<string>
int main()
{
    string data="inspiringte";
    string temp=data;
    int a=0;
    int len=data.length();
    cout<<len<<endl;
    reverse(data.begin(),data.end());
    cout<<data<<endl;
    cout<<temp<<endl;
    int answer=0,j=0;
    while(data[j]!='\0')
    {
        if(data[j]==temp[j])
        {
            answer++;
        }
        j++;
    }
    cout<<answer;

}
*/

/*
//Job scheduling
#include<bits/stdc++.h>
#include<algorithm>
struct Job
{
    char id;
    int profit;
    int deadline;
};
void input(Job job[],int n)
{
    cout<<"Enter the details of "<<n<<" jobs:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the id of Job-"<<i+1<<":";
        cin>>job[i].id;
        cout<<"Enter the profit of Job-"<<job[i].id<<":";
        cin>>job[i].profit;
        cout<<"Enter the deadline of Job-"<<job[i].id<<":";
        cin>>job[i].deadline;
    }
}
void display(Job job[],int n)
{
    cout<<"Job Id's are:\n";
    for(int i=0;i<n;i++)
        cout<<job[i].id<<" ";
    cout<<"\nProfit's are:\n";
    for(int i=0;i<n;i++)
        cout<<job[i].profit<<" ";
    cout<<"\nDeadline's are:\n";
    for(int i=0;i<n;i++)
        cout<<job[i].deadline<<" ";

}
bool compare(Job a, Job b)
{
    return (a.profit>b.profit);
}
void jobscheduling(Job job[],int n)
{
    sort(job,job+n,compare);
    int result[n];
    bool slot[n];
    for(int i=0;i<n;i++)
    {
        for(int j=min(n,job[i].deadline)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j]=i;
                slot[j]=true;
                break;
            }
        }
    }
    cout<<endl;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<job[result[i]].id<<" ";
            cout<<job[result[i]].profit<<endl;
            temp=temp+job[result[i]].profit;
        }

    }
    cout<<"Maximum Profit: "<<temp<<endl;

}
int main()
{
    int n;
    cout<<"Enter the total number of jobs:\n";
    cin>>n;
    Job job[n];
    input(job,n);
    display(job,n);
    jobscheduling(job,n);

}
*/

/*
//Write a c program to convert decimal number to binary number.
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n;
    cout<<"Enter the number to convert to binary:\n";
    cin>>n;
    int temp[10];
    int i;
    for(i=0;n>0;i++)
    {
        temp[i]=n%2;
        n=n/2;
    }
    printf("\nBinary of Given Number is=");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",temp[i]);
    }
    return 0;
}
*/
/*
//Write a c program to convert decimal number to octal number.
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n;
    cout<<"enter the number:\n";
    cin>>n;
    printf("%o\n",n);
}
*/

/*
//Write a c program to convert decimal number to octal number.
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int arr[100];
    int i=0;
    while(temp!=0)
    {
        arr[i++]=temp%8;
        temp=temp/8;
    }
    cout<<"Octal Number is:\n";
    for(int j=i-1;i>0;i--)
        cout<<arr[j];
}
*/

/*
//Write a c program to convert decimal number to hexadecimal number.
#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    printf("%x\n",n);
}
*/
/*
//Write a c program to convert decimal number to hexadecimal number.
#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    int r;
    char temp[100];
    int i=0;
    while(n!=0)
    {
        r=n%16;
        if(r<10)
        {
            temp[i++]=48+r;
        }
        else{
            temp[i++]=55+r;
        }
        n=n/16;
    }
    cout<<"Hexa decimal number is:\n";
    for(int j=i-1;j>=0;j--)
        cout<<temp[j];
}
*/


/*
//Write a c program to convert octal number to decimal number.
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    int temp=0;
    int i=0,r;
    while(n!=0)
    {
        r=n%10;
        temp=temp+r*(pow(8,i++));
        //cout<<temp<<endl;;
        n=n/10;
    }
    cout<<temp;
}
*/

/*
//Write a c program to convert octal number to binary number.
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n;
    cout<<"Enter the Octal Number:\n";
    cin>>n;
    int temp=0,i=0,r;
    while(n!=0)
    {
        r=n%10;
        temp+=r*pow(8,i++);
        n=n/10;
    }
    cout<<"Decimal number is: "<<temp<<endl;
    int bin[100];
    int j=0;
    while(temp!=0)
    {
        bin[j++]=temp%2;
        temp=temp/2;
    }
    cout<<"Binary number:";
    for(int k=j-1;k>=0;k--)
        cout<<bin[k];
}
*/

/*
//Write a c program to convert octal number to hexadecimal number.
#include<bits/stdc++.h>
#include<algorithm>
void hexa(int n)
{
    int r;
    char temp[100];
    int i=0;
    while(n!=0)
    {
        r=n%16;
        if(r<10)
        {
            temp[i++]=48+r;
        }
        else{
            temp[i++]=55+r;
        }
        n=n/16;
    }
    cout<<"Hexa decimal number is:\n";
    for(int j=i-1;j>=0;j--)
        cout<<temp[j];
}
int main()
{
    int n;
    cout<<"Enter the octal number:";
    cin>>n;
    int temp=0,i=0,r;
    while(n!=0)
    {
        r=n%10;
        temp+=r*pow(8,i++);
        n=n/10;
    }
    cout<<"Decimal number is: "<<temp<<endl;
    hexa(temp);

}
*/

/*
//Infosys Coding practice:
#include<bits/stdc++.h>
#include<algorithm>
struct Monster
{
    int power;
    int bonus;
};
void input(Monster monster[],int n)
{
    cout<<"Enter the details of "<<n<<" Monsters:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the power of "<<i+1<<" Monster:";
        cin>>monster[i].power;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the bonus of "<<i+1<<" Monster:";
        cin>>monster[i].bonus;
    }

}
void display(Monster monster[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"The power of "<<i+1<<" Monster: "<<monster[i].power<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"The bonus of "<<i+1<<" Monster: "<<monster[i].bonus<<endl;
    }
}
bool compare(Monster m1,Monster m2)
{
    return (m1.power<m2.power);
}
int defeat(Monster monster[],int n,int exp)
{
    int count=0;
    sort(monster,monster+n,compare);
    for(int i=0;i<n;i++)
    {
        if(exp>=monster[i].power)
        {
            count++;
            exp=exp+monster[i].bonus;

        }
    }
    return count;

}
int main()
{
    int n,exp;
    cout<<"Enter the total number of monster:";
    cin>>n;
    cout<<"Enter the initial experience:";
    cin>>exp;
    Monster monster[n];
    input(monster,n);
    display(monster,n);
    cout<<endl;
    cout<<endl;
    int a=defeat(monster,n,exp);
    cout<<a;
}
*/


/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<unordered_map>
int main()
{
    string s1;
    getline(cin,s1);
    cout<<s1;
    unordered_map<int,string> omap;
    string word=""
    int a=0
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==" ")
        {
            omap[a++]=word;
            word="";
        }
        else{
            word=word+s1[i];
        }
    }
    for(int j=a-1;j>=0;j--)
    {
        cout<<omap[j];
    }
}
*/
/*
int main()
{
    pair<int ,string> p;
    p={1, "Nikhil"};
    cout<<p.first<<" "<<p.second<<endl;
}
1 Nikhil
*/
/*
int main()
{
    pair<int, string> p;
    p=make_pair(1,"roopa");
    cout<<p.second;
}
//roopa
*/
/*
int main()
{
    pair<int, string> p;
    p=make_pair(1,"roopa");
    pair<int, string> p2=p;
    cout<<p2.second;
}
//roopa
*/

/*
//Fractional Knapsack
#include<bits/stdc++.h>
#include<algorithm>
struct Item
{
    int weight;
    int profit;
    float pwr;
};
void input(Item item[], int n)
{
    cout<<"Enter the details of "<<n<<" items:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight of "<<i+1<<" item:";
        cin>>item[i].weight;
        cout<<"Enter the profit of "<<i+1<<" item:";
        cin>>item[i].profit;
        item[i].pwr= float(item[i].profit)/item[i].weight;
    }
}
void display(Item item[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"The weight of "<<i+1<<" item: "<<item[i].weight<<endl;
        cout<<"The profit of "<<i+1<<" item: "<<item[i].profit<<endl;
        cout<<"The profit-by-weight ratio of "<<i+1<<" item: "<<item[i].pwr<<endl;
    }
}
bool compare(Item a, Item b)
{
    return (a.pwr>b.pwr);
}
int knapsack(Item item[],int n, int capacity)
{
    int max_weight=0;
    int max_value=0;
    sort(item,item+n,compare);
    for(int i=0;i<n;i++)
    {
        if(max_weight+item[i].weight<=capacity)
        {
            max_weight+=item[i].weight;
            max_value+=item[i].profit;
        }
        else
        {
            int wt=capacity-max_weight;
            max_value+=wt*item[i].pwr;
            max_weight+=wt;
            break;
        }
         
    }
    cout<<"Maximum weight filled is "<<max_weight<<endl;
    return max_value;
}
int main()
{
    int n,capacity;
    cout<<"Enter the total number of elements:";
    cin>>n;
    Item item[n];
    input(item,n);
    display(item,n);
    cout<<"Enter the capacity of the knapsack: ";
    cin>>capacity;
    int a=knapsack(item,n,capacity);
    cout<<"Maximum profit: "<<a<<endl;
}

*/

/*
// Vectors-They are basically arrays, they can change their size.
//pair- it is class  stores two variables and maintains a relationship between them.

//pair
int main()
{
    pair<int,string> p;
    //p=make_pair(0,"Nikhil");
    p={2,"roopa"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p2=p;
    p2.first=3;
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<int ,int > pair_arr[3];
    pair_arr[0]={1,10};
    pair_arr[1]={2,20};
    pair_arr[2]={3,30};
    swap(pair_arr[0],pair_arr[2]);
    for(int i=0;i<3;i++)
    {
        cout<<pair_arr[i].first<<" "<<pair_arr[i].second<<endl;
    }
}
*/

/*
//Vectors
#include<vector>
void printvec(vector<int> v)
{
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        printvec(v);
        v.push_back(x);
    }
    printvec(v);
}
*/
/*
#include<vector>
void printvec(vector<int> v)
{
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v(5,2);
    vector<int> v2=v;
    v.push_back(7);
    v2.push_back(15);
    printvec(v);
    printvec(v2);
}
*/
/*
#include<vector>
void printvec(vector<pair<int,string>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main()
{
    vector<pair<int,string>> v={{0,"Nikhil"} , {1,"Roopa"}};
    printvec(v);
    v.push_back({2,"shree"});
    //v.push_back(make_pair(2,"shree"));
    printvec(v);
}
*/
/*
//Array of vectors
#include<vector>
void printvec(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
        {
            printvec(v[i]);
        }
}
*/

/*
//Vector-of-vectors
#include<vector>
void printvec(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<vector<int>> v;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        vector<int> temp;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);
    }
}
*/

/*
//Knapsack (0/1)
void input(int *weight,int *profit,int n)
{
    cout<<"Enter the deatails of "<<n<<" Items"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight of "<<i+1<<" Item:";
        cin>>weight[i];
        cout<<"Enter the profit of "<<i+1<<" Item:";
        cin>>profit[i];
    }
}
void display(int *weight,int *profit,int n)
{
    cout<<"Weights are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<weight[i]<<" ";
    }
    cout<<endl;
    cout<<"Profits are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<profit[i]<<" ";
    }
    cout<<endl;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int knapsack(int *weight, int *profit, int n, int capacity,int **temp)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=capacity;j++)
        {
            if(i==0||j==0)
            {
                temp[i][j]=0;
            }  
            else if(weight[i]<=j)
            {
                temp[i][j]=max((profit[i]+temp[i-1][j-weight[i]]) , temp[i-1][j]);
            }
            else
            {
                temp[i][j]=temp[i-1][j];
            }
        }
    }
    return temp[n][capacity];
}
int main()
{
    int n,capacity;
    cout<<"Enter the total number of Items: ";
    cin>>n;
    int *weight=(int *)calloc(n,sizeof(int));
    int *profit=(int *)calloc(n,sizeof(int));
    input(weight,profit,n);
    display(weight,profit,n);
    cout<<"Enter the capacity of knapsack:";
    cin>>capacity;
    int **temp;
    temp=(int **)calloc(n,sizeof(int *));
    for(int i=0;i<n;i++)
    {
        temp[i]=(int *)calloc(capacity+1,sizeof(int));
    }
    int a=knapsack(weight,profit,n,capacity,temp);
    cout<<"Maximum profit: "<<a<<endl;

}
*/
/*
//Knapsack problem 0/1:
#include<bits/stdc++.h>
#include<algorithm>
int max(int a, int b)
{
    return (a>b) ? a : b; 
}
int main()
{
    int n;
    cout<<"Enter the total number of items:";
    cin>>n;
    int weight[n];
    int profit[n];
    //Input
    cout<<"Enter the deatails of "<<n<<" Items"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight of "<<i+1<<" Item:";
        cin>>weight[i];
        cout<<"Enter the profit of "<<i+1<<" Item:";
        cin>>profit[i];
    }
    //Display
    cout<<"Weights are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<weight[i]<<" ";
    }
    cout<<endl;
    cout<<"Profits are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<profit[i]<<" ";
    }
    cout<<endl;
    int capacity;
    cout<<"Enter the capacity of the knapsack:";
    cin>>capacity;
    int k[n+1][capacity+1];
    //knapsack
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<capacity+1;j++)
        {
            if(i==0||j==0)
            {
                k[i][j]=0;
            }
            else if(weight[i-1]<=j)
            {
                k[i][j]=max(profit[i-1]+k[i-1][j-weight[i-1]],k[i-1][j]);
            }
            else
            {
                k[i][j]=k[i-1][j];
            }
        }
    }
    cout<<"Tabulation:"<<endl;
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<capacity+1;j++)
        {
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<k[n][capacity]<<endl;

    int p=n;
    int q=capacity;
    while(p>0 && q>0)
    {
        if(k[p][q]==k[p-1][q])
        {
            cout<<p<<"=0"<<endl;
            p--;
        }
        else-
        {
            cout<<p<<"=1"<<endl;
            p--;
            q=q-weight[p];
        }
    }

}
*/

/*
//fibonacci number using Tabulation:
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n;
    cout<<"Enter the number to get its fibonacci value:";
    cin>>n;
    int arr[n+2];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n+2;i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    cout<<n<<"th Fibonacci number is: "<<arr[n];
}
*/

/*
//Fibonacci series using memoization
#include<bits/stdc++.h>
#include<algorithm>
int arr[100];
int fib(int n)
{
    if(n<=1)
    return n;
    if(arr[n]!=-1)
    return arr[n];
    else
    {
        arr[n]=fib(n-2)+fib(n-1);
        return arr[n];
    }

}
int main()
{
    int n;
    cout<<"Enter the number to get its fibonacci value:";
    cin>>n;
    for(int i=0;i<100;i++)
    {
        arr[i]=-1;
    }
    cout<<fib(n);   
}
*/

/*
//Longest common substring
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int m=s1.length();
    int n=s2.length();
    int lcsuff[m+1][n+1];
    int result=0;
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0||j==0)
            {
                lcsuff[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1])
            {
                lcsuff[i][j]=lcsuff[i-1][j-1]+1;
                result=max(result,lcsuff[i][j]);
            }
            else
            {
                lcsuff[i][j]=0;
            }
        }
    }
    cout<<result;
}
*/
/*
//Longest increasing subsequence.
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int arr[] = { 15,6,5,12,1 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int lis[n];
    lis[0]=1;
    for(int i=1;i<n;i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j]&& lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    int max=lis[0];
    for(int i=1;i<n;i++)
    {
        if(lis[i]>max)
            max=lis[i];
    }
    cout<<max;

}
*/
/*
//Longest palindromic sequence
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int max (int x, int y) { return (x > y)? x : y; }
int main()
{
    string str="Geeks for Geeks";
    int n=str.length();
   int i, j, cl;
   int L[n][n]; 
 
 
   for (i = 0; i < n; i++)
      L[i][i] = 1;

    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (str[i] == str[j] && cl == 2)
               L[i][j] = 2;
            else if (str[i] == str[j])
               L[i][j] = L[i+1][j-1] + 2;
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
 
    cout<<L[0][n-1];
}
*/
/*
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    int m;
    cin>>m;
    int andrea[m];
    for(int i=0;i<m;i++)
        cin>>andrea[i];
    int n;
    cin>>n;
    int maria[n];
    for(int i=0;i<n;i++)
        cin>>maria[i];
    cin.ignore();
    string s1;
    cout<<"Enter the string:\n";
    getline(cin,s1);
    int result1=0;
    int result2=0;
    if(s1=="even")
    {
        for(int j=0;j<n;j=j+2)
        {
            result1=result1+(andrea[j]-maria[j]);
            result2=result2+(maria[j]-andrea[j]);
        }
    }
    else if(s1=="odd")
    {
        for(int j=1;j<n;j=j+2)
        {
            result1=result1+(andrea[j]-maria[j]);
            result2=result2+(maria[j]-andrea[j]);
        }
    }
    else
    {
        cout<<"Enter the correct string:";
        return 0;
    }
    if(result1>result2)
        cout<<"Andrea\n";
    else if(result1<result2)
        cout<<"Maria\n";
    else
        cout<<"Tie\n";
}
*/

/*
//Infosys 2nd question (docx file)
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n;
    cout<<"Enter the number of items:";
    cin>>n;
    int arr[n];
    int j;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the id of "<<i+1<<" item:";
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the elements to remove:";
    cin>>m;
    sort(arr,arr+n);
    for(j=0;j<m;j++)
    {
        arr[j]=0;
    }
    int count=1;
    while(j!=n-1)
    {
        if(arr[j]!=arr[j+1])
            count++;
        j++;
    }
    cout<<count;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int w,h,n;
    cin>>w;
    cin>>h;
    cin>>n;
    cout<<w+n-h<<endl;
}
*/

/*
Maps in c++
2 types of Maps:
map
Unordered map
*/
/*
#include<bits/stdc++.h>
#include<map>
int main()
{
    map<int,string> m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="edf";
    m.insert(make_pair(4,"afg"));
    m.insert({5,"klm"});
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    /*
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;   
    }
    
}
*/

/*
#include<bits/stdc++.h>
#include<map>
void print(map<int,string> &m)
{
    map<int,string>::iterator it;
    cout<<m.size()<<endl;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
int main()
{
    map<int,string> m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="edf";
    m.insert(make_pair(4,"afg"));
    m.insert({5,"klm"});
    m[5]="nikhil";
    //print(m);
    map<int,string>:: iterator nik;
    //nik=m.find(3);
    /*nik=m.find(7);
    if(nik==m.end())
    {
        cout<<"No value";
    }
    else{
        cout<<(*nik).first<<" "<<(*nik).second<<endl;
    }
    
   nik=m.find(7);
   if(nik!=m.end())
        m.erase(nik);
   print(m);
   m.clear();
   print(m);
    
}
*/

/*
//Stacks in stl c++
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
void print(stack<int> &s)
{
    cout<<"Size: "<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    stack<int> s;
    cout<<s.size()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    print(s);
    cout<<endl;
    print(s);

}
*/

/*
//Queues in stl c++
#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
void print(queue<int > &q)
{
    cout<<"Size: "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main()
{
    queue<int> q;
    cout<<q.size()<<endl;
    for(int i=10;i<=50;i+=10)
    {
        q.push(i);
    }
    print(q);
}
*/

/*
//Strings in c++
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    cout<<s1.length()<<endl;
    //sort(s1.begin(),s1.end());
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
    cout<<s1;
}
*/
/*
//LINKED LIST IN STL C++
#include<bits/stdc++.h>
#include<algorithm>
#include<list>
void print(list<int> &l)
{
    cout<<endl;
    cout<<"Size: "<<l.size()<<endl;
    list<int>:: iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<(*it)<<" ";
    }

}
int main()
{
    list<int> l;
    for(int i=50;i>=10;i-=10)
    {
        l.push_back(i);
    }
    print(l);
    cout<<endl;
    list<int>:: iterator it=l.begin();
    int a;
    cin>>a;
    while(a!=(*it))
    {
        it++;
    }
    l.erase(it);
    cout<<endl;
    print(l);
    l.sort();
    cout<<endl;
    print(l);
    l.push_front(10);
    l.push_back(10);
    l.sort();
    cout<<endl;
    print(l);
    l.unique();
    print(l);
}
*/

/*
//Pairs in stl c++
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    pair<int,string> p;
    p=make_pair(0,"Nikhil");
    cout<<p.first<<" "<<p.second<<endl;
    
}
*/
/*
//Vectors
#include<bits/stdc++.h>
#include<algorithm>
void print(vector<int> &v)
{
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    print(v);
}
*/


/*
//map
#include<bits/stdc++.h>
#include<algorithm>
#include<map>
void print(map<int,string> &m)
{
    cout<<"Size: "<<m.size()<<endl;
    map<int,string>:: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
int main()
{
    map<int,string> m;
    m[0]="Nikhil";
    m.insert(make_pair(1,"Roopashree"));
    m[2]="Sushil";
    print(m);
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
struct Item
{
    int weight;
    int profit;
    float pwr;
};
void input(Item item[],int n)
{
    cout<<"Enter the details of "<<n<<" Items!"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight of Item "<<i+1<<":";
        cin>>item[i].weight;
        cout<<"Enter the profit of Item "<<i+1<<":";
        cin>>item[i].profit;
        item[i].pwr=(float(item[i].profit)/item[i].weight);
    }
    cout<<endl;
}
void display(Item item[],int n)
{
    cout<<"Weights are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<item[i].weight<<" ";
    }
    cout<<endl;
    cout<<"Profits are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<item[i].profit<<" ";
    }
    cout<<endl;
    cout<<"Profit by weight ratio are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<item[i].pwr<<" ";
    }
    cout<<endl;
}
bool compare(Item i1, Item i2)
{
    return (i1.pwr>i2.pwr);
}
float knapsack(Item item[],int n, int capacity)
{
    float total_weight=0;
    float total_profit=0;
    sort(item,item+n,compare);
    for(int i=0;i<n;i++)
    {
        if(total_weight+item[i].weight<=capacity)
        {
            total_weight+=item[i].weight;
            total_profit+=item[i].profit;
        }
        else
        {
            int wt=capacity-total_weight;
            total_profit+=wt*item[i].pwr;
            total_weight+=wt;
        }
    }
    cout<<"Weight filled in knapsack is: "<<total_weight<<endl;
    return total_profit; 
}
int main()
{
    int n,capacity;
    cout<<"Enter the Total Number of items:";
    cin>>n;
    Item item[n];
    input(item,n);
    display(item,n);
    cout<<"Enter the Capacity of the Knapsack: ";
    cin>>capacity;
    float a=knapsack(item,n,capacity);
    cout<<"Maximum Profit: "<<a<<endl;

}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n;
    cout<<"Enter the total number of items: ";
    cin>>n;
    int weight[n];
    int profit[n];
    //Input
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight of "<<i+1<<" Item:";
        cin>>weight[i];
        cout<<"Enter the profit of "<<i+1<<" Item:";
        cin>>profit[i];
    }
    //Display
    cout<<"Weights are: \n";
    for(int i=0;i<n;i++)
    {
        cout<<weight[i]<<" ";
    }
    cout<<endl;
    cout<<"Profits are: \n";
    for(int i=0;i<n;i++)
    {
        cout<<profit[i]<<" ";
    }
    cout<<endl;
    //Knapsack
    int capacity;
    cin>>capacity;
    int k[n+1][capacity+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<capacity+1;j++)
        {
            if(i==0 || j==0)
            {
                k[i][j]=0;
            }
            else if(weight[i-1]<=j)
            {
                k[i][j]=max(profit[i-1]+k[i-1][j-weight[i-1]],k[i-1][j]);
            }
            else
            {
                k[i][j]=k[i-1][j];
            }
        }
    }
    cout<<"K Matrix:\n";
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<capacity+1;j++)
        {
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Maximum Value: "<<k[n][capacity]<<endl;

}
*/

/*
//Infosys second question pdf
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iterator>
int main()
{
    int n,k;
    int count=0;
    cout<<"Enter the maximum possible value in the arrays:";
    cin>>n;
    cout<<"Enter the length of the arrays:";
    cin>>k;
    if(n==1||k==1)
    {
        int temp=(n>k)? n:k;
        cout<<temp<<endl;
    }
    else
    {
        vector<pair<int,int>> v;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=k+1;j++)
            {
                pair<int,int> p=make_pair(i,j);
                v.push_back(p);
            }
        }
        vector<pair<int,int>>::iterator it;
        for(it=v.begin();it!=v.end();it++)
        {
            cout<<(*it).first<<" "<<(*it).second<<endl;
            if(((*it).second)%((*it).first)==0)
            {
                count++;
            }
        }
        cout<<count<<endl;

    }
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    vector<int> v={1,2,3,4,5};
    for(int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
   for(auto it=v.begin();it!=v.end();it++)
   {
       cout<<(*it)<<" ";
   }
   //for(auto variable_name: container_name)
}
*/
/*
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    vector<pair<int ,string>> v;
    for(int i=0;i<2;i++)
    {
        pair<int,string> p;
        int a;
        string s;
        cin>>a;
        cin>>s;
        p=make_pair(a,s);
        v.push_back(p);
    }
    for(auto &val: v)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    
}
*/
/*
//Vector of vectors
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    vector<vector<int>> v;
    for(int i=0;i<2;i++)
    {
        vector<int> p;
        for(int j=0;j<2;j++)
        {
            p.push_back(i);
        }
        v.push_back(p);
    }
    //display
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

/*
//sets in stl c++
#include<bits/stdc++.h>
#include<algorithm>
void print(set<string> s)
{
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(string val: s)
    {
        cout<<val<<" ";
    }
}
int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("cdb");
    s.insert("bcd");
    set<string>:: iterator it;
    //auto it;
    it=s.find("bcd");
    print(s);
}
abc bcd cdb
abc bcd cdb
*/

/*
//Unordered sets in stl c++
#include<bits/stdc++.h>
#include<algorithm>
void print(unordered_set<string> s)
{
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(string val: s)
    {
        cout<<val<<" ";
    }
}
int main()
{
    unordered_set<string> s;
    s.insert("abc");
    s.insert("cdb");
    s.insert("bcd");
    set<string>:: iterator it;
    //auto it;
    //it=s.find("bcd");
    print(s);
}
bcd cdb abc
bcd cdb abc
*/

/*
//Infosys 4th question pdf
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int m,n=2;
    cout<<"Enter the number of rows:";
    cin>>m;
    int **arr;
    arr=(int **)calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
    {
        arr[i]=(int *)calloc(n,sizeof(int));
    }
    cout<<"Enter the details:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k=0;
    int temp=0;
    while(k<m-1)
    {
        if(arr[k][1]<arr[k+1][1])
        {
            temp+=arr[k][1];
        }
        else
        {
            cout<<arr[k][1]<<endl;
            return 0;
        }
        k++;
    }
    temp+=arr[k][1];
    cout<<temp<<endl;
}
*/
/*
#include<bits/stdc++.h>
#include<vector>
void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v=5;
    vector<int> adj[v];
}
*/

/*
#include<bits/stdc++.h>
#include<string>
#include<unordered_map>
int main()
{
    string s1;
    getline(cin,s1);
    string temp="";
    unordered_map<int, string> omap;
    int k=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==' ')
        {
            omap[k++]=temp;
            temp="";
        }
        else
        {
            temp+=s1[i];
        }
    }
    omap[k]=temp;
    for(int i=k;i>=0;i--)
    {
        cout<<omap[i]<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
#include<cstring>
int main()
{
    char s1[10];
    scanf("%[^\n]",s1);
    int len=strlen(s1);
    int i=0,j=len-1;
    while(i<j)
    {
        if(s1[i]!=s1[j])
        {
            cout<<"NOT a palindrome\n";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Palindrome\n";
}
*/
/*
#include<bits/stdc++.h>
#include<string>
int main()
{
    char s1[10];
    char s2[10];
    scanf("%[^\n]",s1);
    scanf("\n");
    scanf("%[^\n]",s2);
    strcat(s1,s1);
    char *n=strstr(s1,s2);
    if(n==0)
    {
        cout<<"String 2 is not a rotation of string1"<<endl;
    }
    else
    {
        cout<<"String 2 is a rotation of string1"<<endl;
    }

}
*/
/*
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int arr[5]={5,4,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   
}
*/
/*
#include<bits/stdc++.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sorting(int power[],int bonus[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(power[j+1]<power[j])
            {
                swap(&power[j],&power[j+1]);
                swap(&bonus[j],&bonus[j+1]);
            }
        }
    }
    
}
int main()
{
    int n,exp;
    cout<<"Enter the number of monsters:";
    cin>>n;
    cout<<"Enter the initial experience:";
    cin>>exp;
    int power[n];
    int bonus[n];
    for(int i=0;i<n;i++)
    {
        cin>>power[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>bonus[i];
    }
    sorting(power,bonus,n);
     int count=0;
    for(int i=0;i<n;i++)
    {
        if(power[i]<=exp)
        {
            count++;
            exp+=bonus[i];
        }
    }
    cout<<count<<endl;
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int n,k;
    cout<<"Enter the maximum possible values :";
    cin>>n;
    cout<<"Enter the length of array:";
    cin>>k;
    vector<vector<int>> v;
    for(int i=1;i<=n;i++)
    {
        vector<int> temp;
        for(int j=1;j<=k;j++)
        {
            temp.push_back(i);
        }
        v.push_back(temp);
    }
    vector<int> temp;
    for(int i=1;i<=n;i++)
    {
        temp.push_back(i);
    }
    v.push_back(temp);

    //Display
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
int main()
{
    int arr[5]={5,4,3,2,1};
}
*/

/*
#include<bits/stdc++.h>
#include<algorithm>
struct Item
{
    int weight;
    int profit;
    float pwr;
};
void input(Item item[],int n)
{
    cout<<"Enter the details of "<<n<< "items:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight of item-"<<i+1<<":";
        cin>>item[i].weight;
        cout<<"Enter the profit of item-"<<i+1<<":";
        cin>>item[i].profit;
        item[i].pwr=(float(item[i].profit)/item[i].weight);
    }
}
void display(Item item[],int n)
{
    cout<<"Weights are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<item[i].weight<<" ";
    }
    cout<<endl;
    cout<<"Profits are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<item[i].profit<<" ";
    }
    cout<<endl;
    cout<<"Profit by weight ratio are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<item[i].pwr<<" ";
    }
    cout<<endl;

}
bool compare(Item a,Item b)
{
    return (a.pwr>b.pwr);
}
float knapsack(Item item[],int n,int capacity)
{
    float max_weight=0;
    float max_profit=0;
    sort(item,item+n,compare);
    for(int i=0;i<n;i++)
    {
        if(max_weight+item[i].weight<=capacity)
        {
            max_weight+=item[i].weight;
            max_profit+=item[i].profit;
        }
        else
        {
            int wt=capacity-max_weight;
            max_weight+=wt;
            max_profit+=wt*item[i].pwr;
        }
    }
    cout<<"Weight filled in kanpsack is: "<<max_weight<<endl;
    return max_profit;
}
int main()
{
    int n,capacity;
    cout<<"Enter the total number of Items:";
    cin>>n;
    Item item[n];
    input(item,n);
    display(item,n);
    cout<<"Enter the capacity of knapsack:";
    cin>>capacity;
    int a=knapsack(item,n,capacity);
    cout<<"Maximum profit: "<<a<<endl;
}
*/

/*

#include<bits/stdc++.h>
#include<string>
int main()
{
    string s1;
    getline(cin,s1);
    for(int i=0;s1[i]!='\0';i++)
    {
        int temp=s1[i]-48;
        if(temp>=0 && temp<=9)
        {
            continue;
        }
        else
        {
            cout<<"String does not contain only letters";
            return 0;
        }
    }
    cout<<"String contains only letters";
}
*/

/*
#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *next;
};
struct node *root=NULL;
void append(int a)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p=root;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}
void display(struct node *root)
{
    if(root==NULL)
    {
        cout<<"LINKED LIST IS EMPTY\n";
    }
    else
    {
        struct node *p=root;
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<endl;
    }
}
int length(struct node *root)
{
    int count=0;
    if(root==NULL)
    {
        return count;
    }
    else
    {
        struct node *p=root;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
    }
    return count;
}
void addatbegin(int a)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->next=root;
        root=temp;
    }

}
void addatafter(int a, int loc)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a;
    temp->next=NULL;
    int i=0;
    struct node *p=root;
    while(i<loc-1)
    {
        p=p->next;
        i++;
    }
    temp->next=p->next;
    p->next=temp;
}
int main()
{
    display(root);
    int len=length(root);
    cout<<"Length:"<<len<<endl;
    append(10);
    append(20);
    append(30);
    addatbegin(40);
    addatafter(50,3);
    display(root);
    len=length(root);
    cout<<"Length:"<<len<<endl;
    //addatafter(10,3);
}
*/
/*
#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
void append(int a)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a;
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
void display(struct node *root)
{
    if(root==NULL)
    {
        cout<<"Linked list is empty\n";
    }
    else{
        struct node *p=root;
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p=p->link;
        }
        cout<<endl;
    }
}
int length(struct node *root)
{
    int count=0;
    struct node *p=root;
    while(p!=NULL)
    {
        count++;
        p=p->link;
    }
    return count;
}
bool isodd(int a)
{
    if(a%2==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void function1(struct node *root)
{
    struct node *p=root;
    int a=length(root);
    cout<<"Length: "<<a<<endl;
    int arr[a];
    int i=0;
    while(p!=NULL)
    {
        arr[i++]=p->data;
        p=p->link;
    }
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    for(int i=1;i<=6;i++)
    {
        append(i);
    }
    display(root);
    function1(root);

}
*/
/*
Linked list operations 
#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
void append(int a)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a;
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
void display(struct node *root)
{
    if(root==NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else
    {
        struct node *p=root;
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p=p->link;
        }
        cout<<endl;
    }
}
int length(struct node *root)
{
    int count=0;
    if(root==NULL)
    {
        //cout<<"Linked List is empty";
        return 0;
    }
    else
    {
        struct node *p=root;
        while(p!=NULL)
        {
            count++;
            p=p->link;
        }
        return count;
    }
}
void addatbegin(int a)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(temp));
    temp->data=a;
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->link=root;
        root=temp;
    }
}
void addatafter(int a,int loc)
{
    if(loc>length(root))
    {
        cout<<"Invalid location\n";
    }
    else
    {
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a;
        temp->link=NULL;
        int i=0;
        struct node *p=root;
        while(i<loc-1)
        {
            p=p->link;
            i++;
        }
        temp->link=p->link;
        p->link=temp;
    }
}
void deletebyloc(int loc)
{
    if(loc>length(root))
    {
        cout<<"Invalid Location";
    }
    else if(loc==1)
    {
        struct node *p=root;
        root=p->link;
        p->link=NULL;
        free(p);
    }
    else
    {
        struct node *p=root;
        struct node *q;
        int i=1;
        while(i<loc-1)
        {
            p=p->link;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }

}
void deletebyvalue(int a)
{
    struct node *p=root;
    struct node *q;
    while(p->link->data!=a)
    {
        p=p->link;
    }
    q=p->link;
    p->link=q->link;
    q->link=NULL;
    free(q);
}
void reverse()
{
    int i=0;
    int j=length(root)-1;
    struct node *p=root;
    struct node *q=root;
    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->link;
            k++;
        }
        int temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;
        p=p->link;
        q=root;
    }
}
void sort()
{
    struct node *p=root;
    struct node *q;
    for(p=root;p!=NULL;p=p->link)
    {
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(p->data>q->data)
            {
                int temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
        }
    }
}
void arrangeoddeven()
{
    struct node *p;
    struct node *q;
    for(p=root;p!=NULL;p=p->link)
    {
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(p->data%2==1 && q->data%2==0)
            {
                continue;
            }
            else if(p->data%2==0 && q->data%2==1)
            {
                int temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            else if(p->data%2==0 && q->data%2==1 && p->data>q->data )
            {
                int temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            else{
                continue;
            }
        }
    }
}
void swapalternativenode()
{
    struct node *p=root;
    struct node *q;
    while(p->link->link!=NULL)
    {
        q=p->link->link;
        int temp=p->data;
        p->data=q->data;
        q->data=temp;
        p=p->link;
    }
}
int main()
{
    for(int i=1;i<=6;i++)
    {
        append(i);
    }
    cout<<"Length: "<<length(root)<<endl;
    display(root);
    addatbegin(7);
    display(root);
    addatafter(10,8);
    addatafter(8,2);
    display(root);
    deletebyloc(2);
    display(root);
    deletebyvalue(5);
    display(root);
    reverse();
    display(root);
    sort();
    display(root);
    arrangeoddeven();
    display(root);
    swapalternativenode();
    display(root);
}
*/
/*
#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};
struct node *root=NULL;
struct node *create()
{
    int a;
    cout<<"Enter the data(enter -1 for no data):";
    cin>>a;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(a==-1)
    {
        return NULL;
    }
    temp->data=a;
    cout<<"Enter the left child of "<<a<<":\n";
    temp->leftchild=create();
    cout<<"Enter the right child of "<<a<<":\n";
    temp->rightchild=create();

    return temp;

}
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
        //cout<<"There are no nodes in a tree\n";
    }
    cout<<root->data<<" ";
    preorder(root->leftchild);
    preorder(root->rightchild);
}
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->leftchild);
    cout<<root->data<<" ";
    inorder(root->rightchild);
}
void postorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->leftchild);
    postorder(root->rightchild);
    cout<<root->data<<" ";
}
int main()
{
    root=create();
    cout<<"Pre order is: ";
    preorder(root);
    cout<<"\nIn order is: ";
    inorder(root);
    cout<<"\nPost order is: ";
    postorder(root);
}
*/
/*
#include<bits/stdc++.h>
struct node
{
    char data;
    struct node *link;
};
struct node *root1;
struct node *root2;
struct node *root3;
struct node* append(struct node *root, char a)
{
    struct node *p=root;
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=a;
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }  
    return root;  
}
void display(struct node *root)
{
    if(root==NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else
    {
        struct node *p=root;
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p=p->link;
        }
        cout<<endl;
    }
}
bool find(struct node *root, char a)
{
    struct node *p;
    for(p=root;p!=NULL;p=p->link)
    {
        if(p->data==a)
        {
            return true;
        }
    }
    return false;
}
struct node* union1(struct node *root1,struct node *root2)
{
    struct node *p=root1;
    struct node *q=root2;
    while(q!=NULL)
    {
        if(find(root1,q->data))
        {
            q=q->link;
        }
        else
        {
            struct node *temp;
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=q->data;
            temp->link=NULL;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
            q=q->link;
        }
    }
    return root1;
}
struct node* delete1(struct node* root1, char a)
{
    struct node *p=root1;
    struct node *q;
    if(p->data==a)
    {
        struct node *q=p;
        root1=p->link;
        q->link=NULL;
        free(q);
    }
    else
    {
        while(p->link->data!=a)
        {
            p=p->link;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
    return root1;
}
struct node* total(struct node *root1,struct node *root3)
{
    struct node *p=root1;
    struct node *q=root3;
    while(q!=NULL)
    {
        if(find(root1,q->data))
        {
            root1=delete1(root1,q->data);
            q=q->link;
        }
        else
        {
            q=q->link;
        }
    }
    return root1;
}
void sort(struct node *root)
{
    struct node *p,*q;
    for(p=root;p!=NULL;p=p->link)
    {
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(p->data>q->data)
            {
                char temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
        }
    }

}
int main()
{
    root1=append(root1,'a');
    root1=append(root1,'b');
    root1=append(root1,'d');
    root1=append(root1,'e');
    root1=append(root1,'f');
    root2=append(root2,'b');
    root2=append(root2,'c');
    root2=append(root2,'g');
    root3=append(root3,'a');
    root3=append(root3,'f');
    cout<<"First linked List:\n";
    display(root1);
    cout<<"Second linked List:\n";
    display(root2);
    cout<<"Third linked List:\n";
    display(root3);
    root1=union1(root1,root2);
    cout<<"Union List:\n";
    display(root1);
    cout<<endl;
    root1=total(root1,root3);
    cout<<"toatal List:\n";
    display(root1);
    sort(root1);
    cout<<"Finally:\n";
    display(root1);

}
*/
/*
#include<bits/stdc++.h>
#include<string>
#include<unordered_map>
int main()
{
    string s="wuuusssuup";
    //getline(cin,s);
    //int n;
    //cin>>n;
    vector<string> arr;
    arr[0]="wussup";
    arr[1]="wuup";
    arr[2]="wuuusssuup";
    arr[3]="wusuuup";
    arr[4]="wuusupg";
    arr[5]="wuusuup";
    int count=0;
    for(int i=0;i<6;i++)
    {
        if(s==arr[i])
        {
            count++;
        }
        else
        {
            unordered_map<char,int> omap;
            for(int j=0;j<s.length();j++)
            {
                omap[s[i]]+=1;
            }
            unordered_map<char,int> omap1;
            for(int j=0;j<arr[i].size();j++)
            {
                omap1[arr[i][j]]+=1;
            }
        }
    }
    cout<<count;
}
*/