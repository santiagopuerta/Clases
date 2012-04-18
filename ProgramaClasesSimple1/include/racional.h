#ifndef _RACIONAL_
#define _RACIONAL_


class Racional{
	private:
		int numerador;
		int denominador;
	
	public:
		Racional();
		Racional(int num);
		Racional(int num, int den);
		int Devuelvenum() const;
		
};

#endif
