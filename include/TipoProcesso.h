
class TipoProcesso {

    private:
        int id;
        string descricao;
    public:
        TipoProcesso(int id, string descricao): id(id), descricao(descricao) {}
        TipoProcesso(): id(0), descricao("") {}

        int getId() const { return this->id; }
        string getDescricao() const { return this->descricao; }

        void setId(int id) { this->id = id; }
        void setDescricao(string descricao) { this->descricao = descricao; }

        void imprimir();
};

void TipoProcesso::imprimir(){
    cout << "IMPRIMIR TIPO_PROCESSO\n";
    cout << "ID: " << this->id << endl;
    cout << "DESCRICAO: " << this->descricao << endl;
    cout << "-------" << endl;
}
