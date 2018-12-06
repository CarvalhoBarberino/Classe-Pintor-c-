#ifndef CLASSEPINTORH
#define CLASSEPINTORH


class Pintor{
	public:
		Pintor(int larguraArg, int alturaArg){
			largura = larguraArg;
			altura = alturaArg;
			char t[largura][altura];
			//tela = t;
			std::cout << "Length of array = " << (sizeof(t)/sizeof(*t)) << std::endl;

		}
		int getLargura(){
			return largura;
		}
		int getAltura(){
			return altura;
		}
	private:
		int altura, largura;
		char *tela;
};

//int Pintor::getAltura();

#endif
