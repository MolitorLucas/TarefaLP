
class Processo : public TipoProcesso {
    private:
        int id;
        string descricao;
        string dataEntrada;
        string horaEntrada;

    public:
        Processo(int id, string descricao, string dataEntrada, string horaEntrada, int tipoId, string tipoDesc):
             id(id), descricao(descricao), dataEntrada(dataEntrada), horaEntrada(horaEntrada), TipoProcesso(tipoId, tipoDesc) {}
        Processo(): id(0), descricao(""), dataEntrada(""), horaEntrada("") {}

        int getId() const { return this->id; }
        string getDescricao() const { return this->descricao; }
        string getDataEntrada() const { return this->dataEntrada; }
        string getHoraEntrada() const { return this->horaEntrada; }

        void setId(int id) { this->id = id; }
        void setDescricao(string descricao) { this->descricao = descricao; }
        void setDataEntrada(string dataEntrada) { this->dataEntrada = dataEntrada; }
        void setHoraEntrada(string horaEntrada) { this->horaEntrada = horaEntrada; }

        void imprimir();
};

void Processo::imprimir(){
    cout << "IMPRIMIR PROCESSO\n";
    cout << "ID: " << this->id << endl;
    cout << "DESCRICAO: " << this->descricao << endl;
    cout << "DATA_ENTRADA: " << this->dataEntrada << endl;
    cout << "HORA_ENTRADA: " << this->horaEntrada << endl;
    cout << "TIPO_PROCESSO: " << endl;
    TipoProcesso::imprimir();
    cout << "-------" << endl;
}
