#include <iostream>
#include <string>
#include<iomanip>

#include "Advogado.h"
#include "Processo.h"
#include "TipoProcesso.h"
#include "Vara.h"

using namespace std;

int main() {
    Advogado advogado(1, "Almir", "Assis", "SP", 35);

    advogado.imprimir();

    TipoProcesso tipoProcesso(1, "Trabalhista");

    Processo processo(1, "Processo Trabalhista", "01/01/2023", "10:00", tipoProcesso.getId(), tipoProcesso.getDescricao());

    processo.imprimir();

    Vara vara(1, processo, advogado, "Otávio", 10000.0);

    vara.imprimir();

    Advogado advogado2;
    advogado2.setId(1);
    advogado2.setNome("Nathalia");
    advogado2.setCidade("Jacarezinho");
    advogado2.setEstado("PR");
    advogado2.setIdade(35);
    advogado2.imprimir();

    TipoProcesso tipoProcesso2;
    tipoProcesso2.setId(1);
    tipoProcesso2.setDescricao("Criminal");
    tipoProcesso2.imprimir();

    Processo processo2;
    processo2.setId(1);
    processo2.setDescricao("Processo Criminal");
    processo2.setDataEntrada("01/04/2023");
    processo2.setHoraEntrada("08:30");
    processo2.setTipoId(tipoProcesso2.getId());
    processo2.setTipoDesc(tipoProcesso2.getDescricao());
    processo2.imprimir();

    Vara vara2;
    vara2.setId(1);
    vara2.setProcesso(processo2);
    vara2.setAdvogado(advogado2);
    vara2.setJuiz("Abner");
    vara2.setValorCausa(100000.0);
    vara2.imprimir();

    return 0;
}
