#include <iostream>
#include <string>
using namespace std;

  class AgendaTelefonica
   {
    private:
    
    string Telefone;
    string Nome;
    
    public:
    
    void setNome(const string &n)
    {
        Nome=n;
    }
    
    void setTelefone(const string &t)
    {
        Telefone=t;
    }
    
    void exibir( )const
    {
        cout<<"Nome:"<<Nome<<endl;
        cout<< "Telefone:"<<Telefone<<endl;
    }
};
int main()
{
    
    AgendaTelefonica a;
    a.setNome("duda");
    a.setTelefone ("6196727627");
    
    a.exibir();
    
    return 0;
};
  
 
