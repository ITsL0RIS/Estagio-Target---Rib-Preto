// Aluna: Lorena de OLiveira C
//RA: 2100479 


public class Prof extends CremeHidratante{

		private int ref;
		private String marca;


		public Prof(){
			ref = 0;
			marca = "";
			
		}

		public int getRef(){
			return ref;
		}

		public String getMarca(){
			return marca;
		}

		public void setRef(int ref){
			this.ref = ref;
		}

		public void setMarca(String marca){
			this.marca = marca;
		}
}
