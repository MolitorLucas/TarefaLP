
class Advogado {

    private:
        int id;
        string nome;
        string cidade;
        string estado;
        int idade;

    public:
        Advogado(): id(0), nome(""), cidade(""), estado(""), idade(0) {}
        Advogado(int, string, string , string, int);

        int getId() const {return this->id;}
        string getNome() const {return this->nome;}
        string getCidade() const {return this->nome;}
        string getEstado() const {return this->estado;}
        int getIdade() const {return this->idade;}

        void setId(int id) {this->id = id;}
        void setNome(string nome) {this->nome = nome;}
        void setCidade(string cidade) {this->cidade = cidade;}
        void setEstado(string estado) {this->estado = estado;}
        void setIdade(int idade) {this->idade = idade;}

        void imprimir();

};

Advogado::Advogado(int id, string nome, string cidade, string estado, int idade) {
    this->id = id;
    this->nome = nome;
    this->cidade = cidade;
    this->estado = estado;
    this->idade = idade;
}

void Advogado::imprimir() {
    cout << "IMPRIMIR ADVOGADO\n";
    cout << "ID: " << this->id << endl;
    cout << "NOME: " << this->nome << endl;
    cout << "CIDADE: " << this->cidade << endl;
    cout << "ESTADO: " << this->estado << endl;
    cout << "IDADE: " << this->idade << endl;
    cout << "-------" << endl;
}



