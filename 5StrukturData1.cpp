#include <iostream>

using namespace std;

int maks=5, top=0;
string buku[5];

void pushBuku(string data)
{
    if (top>=maks)
    {
        cout<<"Data Full"<<endl;
    }
    else
    {
        buku[top]=data;
        top++;
    }
}

void displayBuku()
{
    cout<<"Data Stack Buku"<<endl;
    cout<<"==============="<<endl;
    for(int i = maks-1;i>=0;i--)
    {
        if(buku[i] != "")
        {
            cout<<"Stack ke- "<<i<<" = "<<buku[i]<<endl;
        }
    }
}

bool isFull()
{
    if(top==maks)
    {
        cout<<"Stack Sudah Penuh"<<endl;;
        return true;
    }
    else
    {
        cout<<"Stack Masih Kosong"<<(maks-top)<<"Data";
        return false;
    }
}

bool isEmpty()
{
    if(top==0)
    {
        cout<<"Stack Masih Kosong"<<endl;
        return true;
    }
    else
    {
        cout<<"Data Masih Kosong"<<endl;
        return false;
    }
}

void popBuku()
{
    if(isEmpty())
    {
        cout<<"Data Kosong"<<endl;
    }
    else
    {
        buku[top-1]="";
    }
}

int main()
{
    pushBuku("Sherlock");
    pushBuku("Hujan");
    displayBuku();
    cout<<endl;

    pushBuku("Negeri 5 Menara");
    pushBuku("Senja");
    pushBuku("Sejarah Dunia");
    displayBuku();
    cout<<endl;

    pushBuku("Kata");
    displayBuku();
    isFull();
    
    popBuku();
    displayBuku();
    isEmpty();
return 0;
}