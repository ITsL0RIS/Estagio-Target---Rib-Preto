// Aluna: Lorena de OLiveira C
//RA: 2100479 


	
	

public class XxHidra{

	public static void main(String arg[]){

		CremeHidratante h1 = new CremeHidratante();
		Leitura l = new Leitura();

		boolean vai = true;
		while(vai) {

		try{
			String resp1 = l.entDados("\nInforme a Quantidade: ");
			int resp2 = Integer.parseInt(resp1);

			h1.setQuantidade(resp2);

			String lg = l.entDados("\nInforme o Lugar: ");
			h1.setLugar(lg);

			//System.out.println("\nQUANTIDADE...: "+h1.getQuantidade());
			//System.out.println("\nLUGAR........: "+h1.getLugar());
			vai = false;


		}		
		catch(NumPeqException npe){
			System.out.println("\nCATCH NumPeqException - Quantidade deve ser positivo!");
		}

		finally{
			System.out.println("\n\nFINALLY FOI EXECUTADO.......");		
			}

		}//fim do while
//continua..
		
		
		EdEspecial ee = new EdEspecial();
		Especificacao espec = new Especificacao();
		

		ee.setColecao("Glow");		

		ee.setRef(366);
		ee.setMarca("Pantene");
		ee.setMarca("Seda");
		ee.setMarca("Dove");

		espec.setTipo("Cabelo oleoso");
		espec.setTipo("Cabelo opaco");
		espec.setFuncao("Dar Brilho");
		


		System.out.println("\nREFERENCIA...: "+ee.getRef());
		System.out.println("\nMARCA........: "+ee.getMarca());



		System.out.println("\nTIPO...: "+espec.getTipo());
		System.out.println("\nFUNCAO........: "+espec.getFuncao());
	

		System.out.println("\nCOLECAO........: "+ee.getColecao());




	}//fim do main
}//fim da classe
