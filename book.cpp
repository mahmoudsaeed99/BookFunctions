#include "book.h"
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <cstring>
#include <algorithm>
using namespace std;
book::book()
{
    //ctor
}

book::~book()
{
    //dtor
}
void book::addbook(){
    book b;
    cin.ignore();
    cout<<"book's name : "<<endl;
    getline(cin,b.name);
    cout<<"book's author : "<<endl;
    getline(cin,b.author);
    cout<<"book's year : "<<endl;
    cin>>b.year;
    cout<<"book's versions : "<<endl;
    cin>>b.n_versions;
    m_book.push_back(b);
}
void book::s_name(string n){
    vector<book>::iterator it;
    for(it = this->m_book.begin();it != this->m_book.end(); ++it)
    {
        if(it->name==n){
            cout<<it->name<<" "<<it->author<<" "<<it->year<<" "<<it->n_versions<<endl;
    }
    }
}
void book::s_author(string a){
    vector<book>::iterator it;
    for(it = this->m_book.begin();it != this->m_book.end(); ++it)
    {
        if(it->author==a){
            cout<<it->name<<" "<<it->author<<" "<<it->year<<" "<<it->n_versions<<endl;
    }
    }
}
void book:: update_version(string n,int num)
{
    vector<book>::iterator it;
    for(it = this->m_book.begin();it != this->m_book.end(); ++it)
    {
        if(it->name==n){
            it->n_versions=num;
        }
    }
    cout<<"after update :"<<endl;
    for(it = this->m_book.begin();it != this->m_book.end(); ++it)
    {
        cout<<it->name<<" "<<it->author<<" "<<it->year<<" "<<it->n_versions<<endl;
    }
    }
void book::find_book(){
    vector<book>::iterator it;
    string x;
    for(it = this->m_book.begin();it != this->m_book.end(); it++)
    {
            x=max(x,it->n_versions);
    }
    for(it = this->m_book.begin();it != this->m_book.end(); it++)
    {
            if(it->n_versions==x){
                cout<<"this is the book that have the biggest number of versions"<<endl;
                cout<<it->name<<" "<<it->author<<" "<<it->year<<" "<<it->n_versions<<endl;
            }

}
}
void book::l_book(){
    string m[m_book.size()*4];
    vector<book>::iterator it;
    int i;
    for(it= this->m_book.begin(),i=0;it!=this->m_book.end();it++,i+=4)
    {
            m[i]=it->name;
            m[i+1]=it->author;
            m[i+2]=it->year;
            m[i+3]=it->n_versions;
    }
    string key1,key2,key3,key4;
    for (i =4; i < m_book.size()*4; i+=4) {
        key1 = m[i];
        key2 = m[i+1];
        key3 = m[i+2];
        key4 = m[i+3];
        int j = i - 4;
    while (j >= 0 && m[j] > key1) {
            m[j + 4] = m[j];
            m[j+5]=m[j+1];
            m[j+6]=m[j+2];
            m[j+7]=m[j+3];
            j = j - 4;
        }
        m[j + 4] = key1;
        m[j + 5] = key2;
        m[j + 6] = key3;
        m[j + 7] = key4;

    }
    for(i=0;i< m_book.size()*4;i+=4){
        book b;
        b.name=m[i];
        b.author=m[i+1];
        b.year=m[i+2];
        b.n_versions=m[i+3];
        c_book.push_back(b);
    }
    m_book.erase(m_book.begin(),m_book.end());
    copy(c_book.begin(),c_book.end(),inserter(m_book,m_book.end()));



}
void book::printall(){
    vector<book>::iterator it;
    for(it= this->m_book.begin();it!=this->m_book.end();it++)
    {
        cout<<it->name<<" "<<it->author<<" "<<it->year<<" "<<it->n_versions<<endl;
    }
}
