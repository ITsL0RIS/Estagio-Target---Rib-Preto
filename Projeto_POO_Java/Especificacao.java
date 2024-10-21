// Aluna: Lorena de OLiveira C
//RA: 2100479 



/*
#####################################################################################################
Legenda
TIPO se refere a qual tipo de Creme Hidratante é mais indicado (ex: pele seca; cabelo oleoso)
FUNCAO se refere a funcao necessaria do creme hidratante (ex:crescimento dos fios; drenagem)
#####################################################################################################
*/	



public class Especificacao extends Prof{

	private String tipo;
	private String funcao;

	public Especificacao(){
		tipo = "";
		funcao = "";
	}	

	public String getTipo(){
		return tipo;
	}

	public String getFuncao(){
		return funcao;
	}

	public void setTipo(String tipo){
		this.tipo = tipo;
	}

	public void setFuncao(String funcao){
		this.funcao = funcao;
	}
}