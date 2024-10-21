/*
#####################################################################################################
Legenda
QUANTIDADE se refere a quantidade de ml do Creme Hidratante (ex: 990; 300)
LUGAR se refere a qual lugar do corpo o creme Hidratante sera usado (ex: cabelo; rosto; corpo)
#####################################################################################################
*/


      
public class CremeHidratante{

	private int quantidade;
	private String lugar;
	
//***************************************************************************

public void setQuantidade(int quantidade) throws NumPeqException{
		if(quantidade > 0){
			this.quantidade = quantidade;
	}
	else {
			throw new NumPeqException();
	}
}



public void setLugar(String lugar){
		this.lugar = lugar;
	}
}
