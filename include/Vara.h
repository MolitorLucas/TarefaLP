
class Vara
{
    private:
        int id;
        Processo processo;
        Advogado advogado;
        string juiz;
        float valorCausa;

    public:
        Vara(int id, Processo processo, Advogado advogado, string juiz, float valorCausa): id(id), processo(processo), advogado(advogado), juiz(juiz), valorCausa(valorCausa) {}
        Vara(): id(0), juiz(""), valorCausa(0.0){}

        int getId() const { return this->id; }
        Processo getProcesso() const { return this->processo; }
        Advogado getAdvogado() const { return this->advogado; }
        string getJuiz() const { return this->juiz; }
        float getValorCausa() const { return this->valorCausa; }

        void setId(int id) { this->id = id; }
        void setProcesso(Processo processo) { this->processo = processo; }
        void setAdvogado(Advogado advogado) { this->advogado = advogado; }
        void setJuiz(string juiz) { this->juiz = juiz; }
        void setValorCausa(float valorCausa) { this->valorCausa = valorCausa; }

        void imprimir();

};

  void Vara::imprimir() {
    cout << "IMPRIMIR VARA\n";
    cout << "ID: " << this->id << endl;
    cout << "PROCESSO: " << endl;
    this->processo.imprimir();
    cout << "ADVOGADO: " << endl;
    this->advogado.imprimir();
    cout << "JUIZ: " << this->juiz << endl;
    cout << "VALOR DA CAUSA: " << this->valorCausa << endl;
    cout << "-------" << endl;
}
