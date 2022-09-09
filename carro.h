# ifndef CARRO_H
# define  CARRO_H

class carro{
    private:
        int ano;
        float gas, km;

    public:
        carro(int a, float k, float g);

        void setAno(int a);
        int getAno();

        void setKm(float v);
        float getKm();

        void setGas(float g);
        float getGas();

        void acabaGas();
        void carroAndando();
};

# endif
